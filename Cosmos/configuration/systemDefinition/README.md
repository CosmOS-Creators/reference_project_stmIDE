# Generic json file structure

In the config file directory there can be an arbitrary number of json files.
Filenames should only have alphanumeric names and no special symbols/spaces as the name of one config file will be used to define a config class.
All json files in the config directory will be parsed and consolidated together.

If a property is not listed as mandatory the definition of that property can be omitted if the conditions for it's requirement are not met.

## Top level json keys

### Metadata

Every json file has the following meta properties located at the root level:

* version:
  * Mandatory: Always
  * Can be omitted: Never
  * Value type: `string`
  * Description:

    Version of the file structure definition. Versions between files all have to match.
    This version attribute refers to the version of the config structure itself, so if there was some property added in the spec this version would have to be increased.
    That way the files can maybe even be automatically upgraded from one version to the next when opening them.

### Attribute properties

Every json file has the following property located at the root level:

* attributes:
  * Mandatory: Always
  * Can be omitted: Never
  * Value type: `dictionary`
  * Description:

    Every entry in the dictionary holds the attributes for one element. Every element in that dict represents a UI element definition that can be reused (think of it as a class and it's usage as an instance)
    The dictionary key of the element will be used as a unique ID of this attribute property.
    Attribute property IDs have to be unique only inside of one file.
    If accessing an attribute from outside of a file it is required to state the config class before the ID. For example `cores/:name` will refer to the name attribute inside the core.json file while `tasks/:name` will will refer to the name attribute inside the tasks.json file.

#### Properties in an attribute element

Every element in the attribute property should define the following properties:

* inherit:
  * Mandatory: If no `type` property was defined
  * Has to be omitted: If `type` property was defined
  * Value type: `string`
  * Example value: `cores/name`
  * Default value if omitted: `""`
  * Description:

    If defined all configuration of the target attribute will be taken over to this attribute. If a property was defined on this level it will overwrite the setting of the attribute which it inherits in case it already existed before.
* label:
  * Mandatory: Always except if one of `placeholder` or `hidden` property is true
  * Has to be omitted: Never
  * Value type: `string`
  * Example value: `Core Name`
  * Default value if omitted: `""`
  * Description:

    A descriptive user friendly name of the attribute (might even be used to display the string in the UI)
* tooltip:
  * Mandatory: Never
  * Has to be omitted: Never
  * Value type: `string`
  * Example value: `The core name is a user friendly human readable name used to easily identify a core`
  * Default value if omitted: `""`
  * Description:

    A description to describe to the user what this field in the UI is doing (maybe can be used as a comment field for hidden entries too)
* type:
  * Mandatory: Always except if `inherit` property was defined. Changing the type when inheriting is not supported.
  * Has to be omitted: If `inherit` property was defined.
  * Value type: `string`
  * Example value: `string`
  * Default value if omitted: `None`
  * Description:

    This property will define the type of an attribute. Possible options are:
    | Type            | Default value if placeholder | `value` property has to be of type | Note                                           |
    |-----------------|------------------------------|------------------------------------|------------------------------------------------|
    | string          | `""`                         | string                             |                                                |
    | bool            | `false`                      | boolean                            |                                                |
    | int             | `0`                          | number                             |                                                |
    | float           | `0`                          | number                             |                                                |
    | referenceList   | `[]`                         | list                               |                                                |
    | stringList      | `[]`                         | list                               |                                                |
    | selection       | `""`                         | string                             |                                                |
    | hex             | `""`                         | string in the format of `0xHHH`.   | Will be parsed to an int by the config parsers |
    | slider          | `0`                          | number                             |                                                |
    | parentReference | `None`                       | string                             |                                                |
* min:
  * Mandatory: Never
  * Has to be omitted: If `type` property is not one of: `int`, `float`, `slider`, `hex`
  * Value type: `number`
  * Example value: `0`
  * Default value if omitted: `None`
  * Description:

    Only relevant if type is int, float, hex or slider. Will be used for value validation instead of the `validation` property for these special types
* max:
  * Mandatory: Never
  * Has to be omitted: If `type` property is not one of: `int`, `float`, `slider`, `hex`
  * Value type: `number`
  * Example value: `256`
  * Default value if omitted: `None`
  * Description:

    Only relevant if type is int, float, hex or slider. Will be used for value validation instead of the `validation` property for these special types
* step:
  * Mandatory: Never
  * Has to be omitted: If `type` property is not `slider`
  * Value type: `number`
  * Example value: `0.5`
  * Default value if omitted: `1`
  * Description:

    Only relevant if type is slider. The type of the value could be inferred from this property. For example if step is a full number type would be int, if step would be a float the value would also be float. This property would define how much granularity a slider has.
* elements:
  * Mandatory: If `type` property is `selection`
  * Has to be omitted: Always except when `type` property is `selection`
  * Value type: `list` or `string`
  * Example value: `["CM4", "CM7"]` or `core/:name`
  * Default value if omitted: `None`
  * Description:

    The behavior of this property changes depending on the type of it's value:
    * A list of strings that will be shown in a dropdown as the options to be able to choose from
    * A string which refers to a config file for example `cores/:name` would show all elements defined in the `cores.json` file in the elements list using the value of their `name` attribute instance as the displayed option label in the dropdown
* validation:
  * Mandatory: Never
  * Has to be omitted: If `type` property is not `string`
  * Value type: `string`
  * Example value: `^[A-Za-z0-9]+$`
  * Default value if omitted: `""`
  * Description:

    A regex that determines if a string has a valid format or not. Validation can have the following states:
    * If left empty validation is considered deactivated; If an instance of this attribute definition is targeted by a [dependency expression](#dependency-expressions) it will evaluate to true
    * If the regex expression provided was invalid validation is considered erroneous; If targeted by a [dependency expression](#dependency-expressions) it will evaluate to false
    * If the regex expression provided was valid validation is considered active. In this case every pending change of the value property should be validated against this regex and only be written if the regex matches. If targeted by a [dependency expression](#dependency-expressions) it will evaluate to true if validation passed and false otherwise.
* hidden:
  * Mandatory: Never
  * Has to be omitted: If `type` is `parentReference`
  * Value type: `boolean`
  * Example value: `true`
  * Default value if omitted: `false`
  * Description:

    If true attribute instances of this attribute definition will not show up in the UI. This is useful for some helper "variables" that are only used by some logic and are not of interest for the user
* placeholder:
  * Mandatory: Never
  * Has to be omitted: If `type` is `parentReference`
  * Value type: `boolean`
  * Example value: `true`
  * Default value if omitted: `false`
  * Description:

    If true it signals that the value for an attribute instance of this would be populated by a script at a later point.

### Element properties

Every json file has the following property located at the root level:

* elements:
  * Mandatory: Always
  * Can be omitted: Never
  * Value type: `dictionary`
  * Description:

    Each dictionary entry is considered a group whose id is the dictionary key.
    An element should always have a list as it's value.

#### Properties in an elements element

Every item in the elements list (attribute instance) should be a dictionary with the following properties:

* target:
  * Mandatory: Always except if `parentReference` property is defined
  * Has to be omitted: Never except when `parentReference` property is defined
  * Value type: `string`
  * Example value: `cores/:name` or just `name` if the attribute definition is within the same file
  * Default value if omitted: `None`
  * Description:

    An ID of an attribute definition which is instantiated. If the attribute was defined within the same file simply list it's name. If it was defined in another file it has to be prefixed by the filename without the file extension.
* targetNameOverwrite:
  * Mandatory: Never
  * Has to be omitted: Never
  * Value type: `string`
  * Example value: `coreName`
  * Default value if omitted: `None`
  * Description:

    If specified the attribute instance that the target property is pointing to will get this name instead of the targets name.
    For example if `target` is set to `cores/:name` but `targetNameOverwrite` was defined to `coreName` the name property can be accessed inside the object model by `core_0.coreName` but still instantiates the same `cores/:name` attribute definition and all it's validations etc.
* value:
  * Mandatory: Always unless the targeted attribute definition has `placeholder` defined as true
  * Has to be omitted: If targeted attribute definition has `placeholder` == true
  * Value type: `string`, `number`, `bool` or `list` depending on the type of the targeted attribute definition
  * Example value: `CM4`
  * Default value if omitted: Only comes to affect if `placeholder` == true. Will follow the defined defaults in the table of the attribute section for the `type` property
  * Description:

    Stores the current value of the attribute instance.
    If `type` is a list, a list of links or list of strings is expected depending on the list type.
    For a `type` of `referenceList` the links should point to an element in the form of `core/core_0`
* enabled (optional/can be omitted; default: true):
  * Mandatory: Never
  * Has to be omitted: if the targeted attribute is `hidden` or is a `placeholder`
  * Value type: `string` or `bool`
  * Example value: `true` or `core0:name` or `cores/core0:name`
  * Default value if omitted: `true`
  * Description:

    Defines if this element can be edited through the UI. Can operate in two ways:
    * If the value of this property is a boolean it is enabled if true or disabled/read-only if false
    * If the value is a string the attributes enabled state is determined by evaluating the given [dependency expression](#dependency-expressions)
Special notes for the parentReference attribute type:
  A parentReference is a special property. It points to the id of another element which it is the child of. When parsing, this target element will get a reference to this item as a property using the config name as a property name.
  If the type of an attribute is set to parentReference the value of the `value` property will be used as the link to that parent.
  For example:
  In config `cores.json` an element with the key `core_0` exits
  In config `programs.json` an element with the name `program_0` has a parent reference to `cores/core_0` and the target name of that attribute definition is `core`.
  After parsing, an expression like this: `config.cores.core_0.programs` exists and would contain a reference to the config of `program_0`
  additionally an expression like this: `config.programs.core` exists and would point to a reference of the config of `core_0`

## <a name="dependency-expressions"></a>Dependency expressions

Expression which will give a boolean result after it is evaluated.

Wording:

* target: defines which other element to target, should be an existing element ID; If the given target is a boolean the state of the boolean will be evaluated. If the target is some other type it's validity will be used instead
* operator - negator: `!` negates a target
A dependency expression might look something like this: `core0:name` or this `!cores/core0:bootOs`
