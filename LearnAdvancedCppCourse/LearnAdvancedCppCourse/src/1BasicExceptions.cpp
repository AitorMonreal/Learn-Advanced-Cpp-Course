#include <iostream>

void mightGoWrong() {  // exception - only for something that goes badly wrong

	bool error = true;

	if (error) {
		throw 8;
	}
}

int main1() {  // remove the 1 from main1 to run...
	try {
		mightGoWrong();
	}
	catch (int e) {  // print Error code if exception caught. This catches a thrown variable of type int.
		std::cout << "Error code: " << e << std::endl;
	}

	std::cout << "Still running" << std::endl;

	return 0;
}