# Workspace and file generation config files

## Workspace config

The workspace configuration file should only contain json properties which are either of type string or a list containing strings.
Nesting of objects is not allowed/supported.

### Placeholders

A placeholder is defined by wrapping the placeholders name in curly braces. For example: `{workspace}`

Any string type property can be used as a placeholder for another property value. List items cannot be used as placeholders.
There is a special placeholder for referring to the workspace root directory to allow an easy configuration of absolute paths called `workspace`. Creating a key with this name in the json file is forbidden.

Consider the following example:

``` json
{
  "Cosmos": "{workspace}/Cosmos",
  "CoreConfig": "{Cosmos}/configuration/systemDefinition",
  "HWConfig": "{Cosmos}/stm32h755_integration/newConfiguration",
  "config": [
    "{CoreConfig}",
    "{HWConfig}"
  ]
}
```

Using the example above the workspace parser would return an object containing a property for every key in the config file.
Calling `workspace.CoreConfig` in python would return something like `C:\Files\Projects\Cosmos_reference_project\Cosmos` assuming that workspace is the name of the workspace object that was returned by the workspace parser.
`workspace.config` would return something along the lines of: `[".../Cosmos_reference_project/Cosmos/configuration/systemDefinition", ".../Cosmos_reference_project/Cosmos/stm32h755_integration/newConfiguration"]`.
The workspace parser also provides methods for making sure that certain properties exist inside the json and also for checking whether the given paths exist, are valid files or even prompt it to create the paths if they do not exist yet.
This can be done using the following methods of the workspace object:

* require
* requireFile
* requireFolder

For full documentation on these please check the python docstrings inside the workspace parser sourcefile.

Also any additional paths can be easily resolved by calling the `resolvePath` method of the workspace object with full support for replacing any already known placeholders inside the paths string.

## File generation config

This config is used to determine which files have to be generated with which templates and in which output directories they have to be generated.
