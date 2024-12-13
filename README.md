# Hello world

## Intro

Hello world example source to test C/C++ development environment.

Tested on following platforms:

* Linux (RHEL 9.5, gcc 11.5)
* macOS (Sequoia 15.1.1, clang 16)
* FreeBSD (14.1, clang 18)
* Solaris (11.4.42 CBE, Developer Studio 12.6)
* Windows (MinGW 13.2, gcc 13.2)

## Build

### Makefile

Create `Makefile` using examples.

```sh
ln -s Makefile.gnu Makefile     # linux, macos
ln -s Makefile.bsd Makefile     # freebsd
ln -s Makefile.sun Makefile     # solaris
```

```cmd
copy Makefile.mingw Makefile    # MinGW
```

### Compile

```sh
make
```

### Test

```
$ ./hello
Hello, world!
$ ./hello make
Hello, make!
```

```
>hello.exe
Hello, world!

>hello.exe make
Hello, make!

```
