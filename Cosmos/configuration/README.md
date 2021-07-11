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

### Description of config file structure

The configuration json file consists of multiple root level elements.
each root level element represents one type of file generation.
There can be as many root level elements as needed.
Every root level element may contain the following properties:

* templates:
  * Mandatory: Yes
  * Type: list of strings -> List of partial paths to a file
  * Description:
    The templates list is used to determine which templates to use for the file generation. The value should be a path relative to the template directory that was passed to the generator when instantiating it.
    The file ending of the template should be omitted. Template files should follow the naming convention of `templateName.generatedFileExtension.j2`.
    There will always be one file generated per given template also if they differ in their file extension.
    Template file paths can be treaded a bit like wildcards. The generator will look for templates that start with the string specified and will generate one output file for each of the found matching templates keeping their original file extension but removing the `.j2` extension.
    For example, The following directory is given:
      Templates/
      ├─ application/
      │  ├─ program.h.j2
      │  ├─ program.c.j2
      │  ├─ programImplementation.h.j2
      │  ├─ programImplementation.c.j2
    By specifying `application/program` in the templates list the following files will be generated:
    * program.h
    * program.c
    * programImplementation.h
    * programImplementation.c
* outputDir:
  * Mandatory: yes
  * Type: string -> Path to folder
  * Description:
    Path where the generated output files should be placed
* fileName:
  * Mandatory: no
  * Type: string -> Name of the output file
  * Description:
    The name the output file will be given.
    File extensions should be omitted here as they will be taken from the template file name instead.
    If this property is not specified the name of the template file will be used as a default.
    There are the following placeholders available which will be replaced by some special values when storing output files:
    * `{template}` -> will be replaced by the full template filename that was used without the file extension.
    * `{target}` -> Only applicable to use when the loop property was used. Will be replaced by the value of the specified attribute of the current loop element.
* pattern:
  * Mandatory: no
  * Type: dictionary of string: string -> file extension : output subfolder name
  * Description:
    If specified any file matching any of the defined extensions in the dictionary will be generated in a subfolder of the output directory with the name of the key value
    For example the following patter config:

    ```json
    "pattern": {
      ".h": "inc",
      ".c": "src"
    }
    ```

    Will put output files with the .c extension to a subfolder `src` of the output directory while files with the extension .h will be generated in a subfolder called `inc`.
* loop:
  * Mandatory: no
  * Type: string -> Link to a config attribute in the form of `config/:attributeName`
  * Description:
    If specified all elements in the given config will be looped through and for every config element one output file will be generated.
    The `{target}` placeholder will be populated with the value of the specified attribute of the current loop element so that is can be used in the `fileName` property to generate a file with a unique filename.
* target:
  * Mandatory: no
  * Type: string -> variable name
  * Description:
    Can only be used if the `loop` property is also given.
    If specified an additional variable with the name that is given as the value of this property will become available to be used in the template containing the current loop element.

Example configuration of both looped and non looped files:

``` json
{
    "templates": [
      "application/program"
    ],
    "outputDir": "{ApplicationGenDir}",
    "loop": "programs/:name",
    "fileName": "{target}",
    "target": "program",
    "pattern": {
      ".h": "inc",
      ".c": "src"
    }
  },
  {
    "templates": [
      "core/thread/thread"
    ],
    "outputDir": "{CoreGeneratedDir}/thread",
    "fileName": "{template}",
    "pattern": {
      ".h": "inc",
      ".c": "src"
    }
  }
```
