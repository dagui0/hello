# Hello world

## Intro

Hello world example source to test C/C++ development environment.

Tested on following platforms:

* Linux
* macOS
* FreeBSD
* Solaris (11.4.42 CBE)
* Windows (MinGW)

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
