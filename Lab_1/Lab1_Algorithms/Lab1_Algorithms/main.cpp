#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <exception>
#include "Menu.h"

#include <fstream>

int main() {
	try {
		Menu menu;
		menu.ShowMenu();
	}
	catch (std::exception& ex) {
		std::cerr << ex.what() << std::endl;
	}

	return 0;
}