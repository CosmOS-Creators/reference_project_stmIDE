# Generic json file structure

In the config file directory there can be an arbitrary number of json files.
Filenames are only allowed to have lower case alphanumeric names and no special symbols as the name of one config file will be used to define a config class.
All json files in the config directory will be parsed and consolidated together.

## Metadata

Every json file has the following meta properties:

* version:
  version of the file structure definition. Versions between files all have to match.

## Attribute properties

Every json file has a dictionary of attribute elements. Every element in that dict represents a UI element definition that can be reused (think of it as a class and it's usage as an instance)
The dictionary key of the element will be used as a unique ID of this attribute property.
Attribute property IDs have to be unique only inside of one file.
(COMMENT: Is this a good addition? Is it useful or will it only add too much complexity?) If accessing an attribute from outside of a file it's required to state the config class before the ID. For example `cores/name` will refer to the name attribute inside the core.json file while `tasks/name` will will refer to the name attribute inside the tasks.json file.

### Descriptions of attribute properties

(COMMENT: Not sure if this abstraction layer makes sense or if it would make more sense/be easier if this definition would be moved inside of the elements themselves)

Every element in the attribute property should define the following properties:

* label:
    A descriptive user friendly name of the attribute (might even be used to display the string in the UI)
* description (optional/can be omitted):
    A description to describe to the user what this field in the UI is doing (maybe can be used as a comment field for hidden entries too)
* type:
  * Type of the attribute valid types are: (COMMENT: not sure if slider and hex types make much sense)
    * string
    * bool
    * int
    * float
    * list -> elements of a list are always string
    * hex -> (COMMENT: not sure if the other way around might be easier?) in json this should be always an int but in a UI this should always be displayed as a hex number in the form of 0xHHHH
    * slider (COMMENT: not sure if even needed?)
* min (optional/can be omitted; default: empty):
    only relevant if type is int, float or slider
* max (optional/can be omitted; default: empty):
    only relevant if type is int, float or slider
* step (optional/can be omitted; default: empty):
    only relevant if type is slider. The type of the value could be inferred from this property. For example if step is a full number type would be int, if step would be a float the value would also be float
* validation (optional/can be omitted; default: empty):
  * Ignored/can be omitted if the type is one of:
    * bool
  * Can have three basic states:
    * Validation is considered deactivated if empty; If targeted by a dependency expression it will evaluate to true
    * Validation is considered erroneous if the given string is not a valid regex expression; If targeted by a dependency expression it will evaluate to false
    * Validation is considered active if the value represents a valid regex. In this case every pending change of the value property should be validated against this regex and only be written if the regex matches
* hidden (optional/can be omitted; default: false):
    If true attribute instances of this attribute definition will not show up in the UI. This is useful for some helper "variables" that are only used by some logic and are not of interest for the user
    (COMMENT: Maybe a dependency expression could also be used for this? Does it make sense? Is there a need? If yes, this should be moved to the elements layer)

### Description of elements property

The elements property is a dictionary. Each dictionary entry is considered a group whose id is the dictionary key.
An element should always have a list as it's value.
Every item in this list (attribute instance) should be a dictionary with the following properties:

* target:
    An ID of an attribute which is instantiated. If the attribute was defined within the same file simply list it's name. If it was defined in another file it has to be prefixed by the filename without the file extension. For example: `cores/bootOs`
* value:
    stores the current value of the attribute instance
* enabled (optional/can be omitted; default: true):
  * Defines if this element can be edited through the UI. If omitted true is assumed. Can operate in two ways:
    * If the value of this property is a boolean it is enabled if true or disabled/read-only if false
    * If the value is a string the attributes enabled state is determined by evaluating the given [dependency expression](#dependency-expressions)
Special element properties:
* parentReference:
    A parentReference is a special property that does not have to be defined. It points to an id of another element which it is the child of.

## <a name="dependency-expressions"></a>Dependency expressions

(COMMENT: Does it bring value? is it too complicated? Is there a better way?)
Expression which will give a boolean result after it is evaluated.
language definition:

* target: defines which other element to target, should be an existing element ID; If the given target is a boolean the state of the boolean will be evaluated. If the target is some other type it's validity will be used instead
* operator - negator: `!` negates a target
* operator - and: `&` ands together the results of two targets
* operator - or: `|` ores together the results of two targets
A dependency expression might look something like this: `core0/CoreName & core1/bootOs & !core0/bootOs`
