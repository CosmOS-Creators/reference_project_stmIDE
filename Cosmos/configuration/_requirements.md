# Generic json file structure

In the config file directory there can be an arbitrary number of json files.
Filenames are only allowed to have lower case alphanumeric names and no special symbols as the name of one config file will be used to define a config class.
All json files in the config directory will be parsed and consolidated together.

## Metadata

Every json file has the following meta properties:

* version:
  Version of the file structure definition. Versions between files all have to match.
  This version attribute refers to the version of the config structure itself, so if there was some property added in the spec this version would have to be increased.
  That way the files can maybe even be automatically upgraded from one version to the next when opening them.

## Attribute properties

Every json file has a dictionary of attribute elements. Every element in that dict represents a UI element definition that can be reused (think of it as a class and it's usage as an instance)
The dictionary key of the element will be used as a unique ID of this attribute property.
Attribute property IDs have to be unique only inside of one file.
If accessing an attribute from outside of a file it's required to state the config class before the ID. For example `cores/name` will refer to the name attribute inside the core.json file while `tasks/name` will will refer to the name attribute inside the tasks.json file.

### Descriptions of attribute properties

Every element in the attribute property should define the following properties:

* inherit (optional/can be omitted):
    If defined all configuration of the target attribute will be taken over to this attribute. If a property was defined on this level it will overwrite the setting of the attribute which it inherits in case it already existed before.
* label (can be omitted for placeholder and hidden attributes):
    A descriptive user friendly name of the attribute (might even be used to display the string in the UI)
* tooltip (optional/can be omitted):
    A description to describe to the user what this field in the UI is doing (maybe can be used as a comment field for hidden entries too)
* type:
  * Type of the attribute. Valid types are:
    * string
    * bool
    * int
    * float
    * referenceList
    * stringList
    * selection
    * hex -> in json and the UI this should be always a string in the form of 0xHHHH
    * slider
* min (optional/can be omitted; default: empty):
    only relevant if type is int, float, hex or slider
* max (optional/can be omitted; default: empty):
    only relevant if type is int, float, hex or slider
* step (optional/can be omitted; default: 1):
    only relevant if type is slider. The type of the value could be inferred from this property. For example if step is a full number type would be int, if step would be a float the value would also be float
* elements (optional/can be omitted if an element is not of type selection):
  * two possibilities:
    * A list of strings that will be shown in a dropdown as the options to be able to choose from
    * A string which refers to a config file for example `cores/coreName` would show all elements defined in the cores.json file in the elements list using the value of their coreName attribute instance as the displayed option label in the dropdown
* validation (optional/can be omitted; default: empty):
  * Ignored/can be omitted if the type is one of:
    * bool
  * Can have three basic states:
    * Validation is considered deactivated if empty; If targeted by a dependency expression it will evaluate to true
    * Validation is considered erroneous if the given string is not a valid regex expression; If targeted by a dependency expression it will evaluate to false
    * Validation is considered active if the value represents a valid regex. In this case every pending change of the value property should be validated against this regex and only be written if the regex matches
* hidden (optional/can be omitted; default: false):
    If true attribute instances of this attribute definition will not show up in the UI. This is useful for some helper "variables" that are only used by some logic and are not of interest for the user
* placeholder (optional/can be omitted; default: false):
    If true it signals that the value for an attribute instance of this would be populated by a script at a later point.


### Description of elements property

The elements property is a dictionary. Each dictionary entry is considered a group whose id is the dictionary key.
An element should always have a list as it's value.
Every item in this list (attribute instance) should be a dictionary with the following properties:

* target:
    An ID of an attribute which is instantiated. If the attribute was defined within the same file simply list it's name. If it was defined in another file it has to be prefixed by the filename without the file extension. For example: `cores/bootOs`
* targetNameOverwrite (optional/can be omitted; default: empty):
    If specified the attribute instance that the target property is pointing to will get this name instead of the targets name
* value:
    stores the current value of the attribute instance.
    If type is a list, a list of links or list of strings is expected depending on the list type.
    For referenceList the links should point to an element in the form of `core/core_0`
    If placeholder is set to true this property has to be omitted.
* enabled (optional/can be omitted; default: true):
  * Defines if this element can be edited through the UI. If omitted true is assumed. Can operate in two ways:
    * If the value of this property is a boolean it is enabled if true or disabled/read-only if false
    * If the value is a string the attributes enabled state is determined by evaluating the given [dependency expression](#dependency-expressions)
Special element properties:
* parentReference:
    A parentReference is a special property that does not have to be defined. It points to an id of another element which it is the child of.
* name(only in combination with parentReference):
    If an element is a parent reference and a name property is present a reference to the parent will be added to the current element where the key is set to the value of the name property.


## <a name="dependency-expressions"></a>Dependency expressions

Expression which will give a boolean result after it is evaluated.
language definition:

* target: defines which other element to target, should be an existing element ID; If the given target is a boolean the state of the boolean will be evaluated. If the target is some other type it's validity will be used instead
* operator - negator: `!` negates a target
A dependency expression might look something like this: `core0/CoreName` or this `!core0/bootOs`
