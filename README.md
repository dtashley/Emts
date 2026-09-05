# Emts
*Emts* (*Em*bedded System *T*ool*s*et Base)
is a set of software source files (and related files and
information) used to assist in the construction
of PC and server tools.

## Licensing

_Emts_ is provided under _The Unlicense_ (full text below).  The license places
no restrictions (other than inabilty to litigate) on a user of the software.
The software may be used without restriction or obligation in embedded products.

*This is free and unencumbered software released into the public domain.
Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.*
    
*In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.*

*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.*

*For more information, please refer to &lt;https://unlicense.org&gt;*

## Organization of an *Emts* Application

### Required Software and Libraries

In order to build a typical *Emts* application, four
components are required.

* *The application:* software source files (and other files)
  unique to the
  application.
  * Includes source files unique to the application,
    and project/build files.
  * Project/build files will point to files in
    *Emts*, *LibGen*, and/or *LibNum*.
* [*Emts*](https://github.com/dtashley/Emts): source files (and other files)
  in this repository, providing functionality to construct PC and server tools.
* [*LibGen*](https://github.com/dtashley/LibGen): source files (and other files)
  providing a general non-numeric library.
* [*LibNum*](https://github.com/dtashley/LibNum): source files (and other files)
  providing a numeric library.

### *Emts* Console-Mode and GUI Versions, *Windows* and _*nix* Compatibility

Applications developed for *Emts* can be built in 3 variants.

* *Windows* console-mode.
* _*nix_ console-mode.
* *Windows* GUI.

There is no option for building a _*nix_ GUI variant.

The console-mode variants can be used as part of either
a developer workflow or a server workflow.  The GUI variant
is intended to be used only interactively by a human.

A given *Emts* build will consist of the core (discussed below)
plus any number of modules (also discussed below).
The details of the GUI build haven't been decided yet, but
preliminarily:

* The GUI window will consist of an arbitrary number of tabs,
  each of which makes a different panel active.  Each panel
  would consume the entire GUI interface, except for the tab area,
  which selects between the panels.
* Each module (described below) has to correspond to an integral
  number of GUI panels, each selected by a tab.
  * If a given module
    is not present in the GUI build, its tabs and panels will not be
    visible or available.
  * The reason for the restriction that a module correspond to an integral
    number of panels (no panel sharing between modules) is that without
    this restriction, it is harder to handle the mechanics of the GUI
    interface and module exclusion or inclusion in a build.

### Future Scripting Language Development

It is anticipated that in the future, both the console-mode and GUI
variants will be augmented with a scripting language.  There are two
implications:

* Commands and subcommands must map to scripting language functions.
* Internally, something like the *Tcl* object must be used.  The tool must be built
  as if the commands were being called from a script interpreter.

### *Emts* Core

*Emts* contains a core (called the *core*
or the *Emts core*), that is not designed to be divided.
Any application built using *Emts* would contain the entire core, combined
with additional proprietary or custom content.

### *Emts* Modules, Tools, Commands

Outside of the core, the fundamental building block of *Emts*
is the *Emts module*, or *module*.  A module is the
smallest unit that can be included or not included in a build
of an *Emts* application.  A module is atomic and not designed to
divided.  A module generally contains closely related functionality;
cryptographic hashing functions, for example.

Modules are generally not visible to the user of an *Emts* application.

* Modules specify the minimum granularity with which functionality can be
  included or excluded from an *Emts* application.  *Module* is
  a configuration and build notion rather than an observable behavior
  notion.
* In console-mode builds, module boundaries are invisible.  (In other words,
  it would not be obvious to a user whether two tools are in the same
  module.)
* In GUI builds, it is required that a module use an integral number
  of GUI panels.  (There is no notion of modules sharing panels.)  

A module may contain one or more *tool*s.  A tool generally
corresponds to narrow functionality; the SHA256 hash, for example.

A tool may contain one or more *command*s.  A command
generally has very narrow scope to support a tool.  For example,
an SHA256 tool might contain two commands; one to calculate the
hash of a string, and another to calculate the hash of a file.

Modules are not generally visible to a user of an *Emts* application.  A module
is a build notion that specifies the minimum functionality that
can be included or omitted from the build of an *Emts* application.

The notions of module, tool, and command are subjective enough
that no guarantees can be made about how they might be
defined.  The only guarantee that can be made is that a
module corresponds to an integral number of panels
in the graphical tool.

The rules for identifying a command to run are:

* _module_ is not used in the naming.
* _tool_ and _command_ are concatenated together to form the
  full command name: for example, _sha256hash.hashfile_.
  * The exception is that if the _command_ name is globally
    unique, the _tool_ qualifier is optional.

### Verbosity Levels

TBD.

### Threading

TBD.

### Logging

TBD.

### Assertions

Assertions are implemented using the macro
```LBGN_ASSERT()```.  With assertions disabled, no code is generated; and with
assertions enabled, code to exit the program is generated.

## Design Rules for *Emts* Applications

### Recommended Directory Organization

The recommended directory organization is for the application
to be at the same directory level as *Emts*, *LibGen*, and
*LibNum*.

This is convenient because:
* *Emts*, *LibGen*, and *LibNum* can be shared between several applications
  without having multiple copies of each repository on disk.
* This organization keeps repositories separate, which is simpler than
  nesting them or using *Git* submodules.

This is a recommendation only.  *Emts* applications should build
and run correctly even if some other scheme is used.

### C Versus C++ File Naming Conventions

C files should have a _.c_ extension, and the associated header files 
should have a _.h_ extension.  C++ files should have a _.cpp_ extension, 
and the associated header files should have a _.hpp_ extension.  In all 
cases, a header file has the same base name as the associated C or C++ 
source file.  

### File Name Uniqueness

Within an *Emts* application:

* No two C or C++ source files within the application should have the same 
  base name.
* No C or C++ source file in the application should have the 
  same base name as any source file in *Emts*, *LibGen*, or *LibNum*.  
  
### File Name, Function, Class, and Constant Prefixes

The application must ensure uniqueness of free function names, global 
variable names, class names, and constants are unique within the 
application.  However, the application should also: 

* Avoid _Et_ and _Emts_ as prefixes, as these are used by *Emts*.
* Avoid _Lg_ or _Lbgn_ as prefixes, as these are used by *LibGen*.
* Avoid _Ln_ and _Lbnm_ as prefixes, as these are used by *LibNum*.

### Threading Rules

TBD.

### C, C++ Language Standards Supported

The compiler language version support assumed for C code is C99.

The compiler language version support assumed for C++ is C++17.

## Command Line Format

### General Format

The general format of a command line is:

```emts [tool.]command [options] [--] [filespecs]```

### Options

#### ```-vn``` (Verbosity)

Specifies the verbosity, 0-9.  The default level is 3.  The levels
are defined in the *LibGen* documentation.

The verbosity can be specified in two ways.

* ```-vn```, where *n* is an integer in the range 0-9.
  Example: ```-v6```.  The levels specified correspond
  to the *LibGen* documentation.
* ```-v```, ```-vv```, ```-vvv```, etc.  This can only
  increase the default verbosity (3), but not decrease it.
  ```-v``` would correspond to a verbosity of 4, ```-vv``` to
  a verbosity of 5, etc.

#### ```-pr```, ```-cr```, ```-ar```

Parsing range, context range, and action range.

| Level | Brief Description | *stdout* | *stderr* | Long Description           |
| :---  |     :---          | :---     |  :---    | :---                  |
| `0`  | Silent             | No output. | No output. | No *stdout* or *stderr* output.  All results through process exit code and generated files. |
| `1`  | Terse error descriptions only, announced on *stderr* only. | No output. | Terse errors only. | No output to *stdout*.  Errors, if any, are described in a terse form on *stderr*. |
| `2`  | Detailed error descriptions, announced on *stderr* only. | No output. | Detailed errors only. | No output to *stdout*.  Errors, if any, are described in a detailed form on *stderr*. |


### Doxygen is Used for Documentation
_Doxygen_ is used as the documentation tool for this library, and comments
in the source code are formatted accordingly.

## Miscellaneous Information

### Certum Card Instructions

Cut the card out of the holder.

Installed in the reader (took a little guessing to get it open).

Installed the SmartCard reader drivers from the ACS website.

Rebooted to be sure.

Installed the ProCertum CardManager, 64-bit MSI.

Rebooted per instructions.

Read card, Initialized, then set my standard 6-digit value for both PIN and PUK (they are set identically).

20240810:  Results from renewing code signing certificate.
Went through automatic verification process tonight.  It
involved a cellphone and taking a picture of my identity
document (passport), and some shots of my face.

Status of process unclear.  Believe I've done all I can
do.  Should know by Monday, which should be a work day
for Certum.

Process is unclear.  I believed I would use old
certificate to help authenticate the renewal, but from
the instructions it appears that I don't do this.

Could not find earlier notes anywhere, so it appears
I will have to re-document how to use the card,
or search more for my earlier notes.

<!-- End of file README.md -->
