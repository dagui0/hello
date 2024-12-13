#include "hello.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HELLO_FORMAT "Hello, %s!%s"

void hello(const char* target, const int newline) {
	fhello(stdout, target, newline);
}

void fhello(FILE* fp, const char* target, const int newline) {
	fprintf(fp, HELLO_FORMAT,
		(target == NULL)? "world": target,
		(newline)? HELLO_NEWLINE: "");
}

char* shello(const char* target, const int newline) {
	char buf[BUFSIZ];
	size_t len = 0;
	char* result = NULL;

	len = sprintf(buf, HELLO_FORMAT,
                (target == NULL)? "world": target,
                (newline)? HELLO_NEWLINE: "");
	result = (char*)malloc(len + 1);
	return strcpy(result, buf);
}
