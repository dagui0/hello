#include <iostream>
using namespace std;
extern "C" {
  #include <stdlib.h>
  #include "hello.h"
}

int main(int argc, char** argv) {
	char *h = shello((argc > 1)? argv[1]: NULL, false);
	cout << h << endl;
	free(h);
	return 0;
}
