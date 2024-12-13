#include <iostream>
extern "C" {
  #include "hello.h"
}

int main(int argc, char** argv) {
	hello((argc > 1)? argv[1]: NULL);
	std::cout << std::endl;
	return 0;
}
