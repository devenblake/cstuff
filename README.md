# cstuff

Short C programs.

## requirements

- an ANSI C compiler compatible with the C89 specification.
- a UNIX-like environment (AIX, BSDs, Linuxes, macOS, and Solaris should all work unless otherwise indicated in a program's comments).

## compiling

Make sure you have an ANSI C compiler (or a more specific one if specified in the comments of the file you're compiling).

`cc [programname].c`

## installing

#### for all users

`mv a.out /usr/bin/[programname]`

#### for the local user

```
mv a.out $HOME/bin/[programname]
[open your preferred shell]
export PATH=$PATH":$HOME/bin"
```

## uninstalling

#### for all users

`rm /usr/bin/[programname]`

#### for the local user

```
rm $HOME/bin/[programname]
exit
```
