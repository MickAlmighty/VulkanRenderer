#include <iostream>
#include "Runtime.h"

int main() {
	Runtime runtime;

	try {
		runtime.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		getchar();
		return EXIT_FAILURE;
	}
	return 0;
}