#ifndef __HELLO_H
#define __HELLO_H

#include <stdio.h>

#ifdef WIN32
#define HELLO_NEWLINE "\r\n"
#else
#define HELLO_NEWLINE "\n"
#endif

#define HELLO_NONL 0

void hello(const char*, const int);
char* shello(const char*, const int);
void fhello(FILE*, const char*, const int);

#endif
