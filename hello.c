#include <stdio.h>
#include "hello.h"

void hello(const char* target) {
	printf("Hello, %s!", (target == NULL)? "world": target);
}
