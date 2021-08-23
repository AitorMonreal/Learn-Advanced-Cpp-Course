#include <iostream>

class CanGoWrong {
public:
	CanGoWrong() {
		// char* pMemory = new char[999999999];
		char* pMemory = new char[999];
		delete[] pMemory;
	}
};

int main2() {
	try {
		CanGoWrong cangowrong;
	}
	catch (std::bad_alloc& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}