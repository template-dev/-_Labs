#include <iostream>
#include <fstream>
#include <filesystem>
#include <windows.h>
#include "Menu.h"

void Menu::Start() {
	system("cls");
	std::cout << "STARTED GAME" << std::endl;
}

void Menu::Save() {
	std::ofstream out(pathSave);
	if (out.is_open()) {
		out << "---[ SAVE ]---" << std::endl;
	}
	out.close();
}

void Menu::Continue() {
	bool checkData = CheckSaveDatas();
	if (checkData) {
		Start();
	}
	else {
		ShowMenu();
	}
}

void Menu::Exit() {
	Save();
}

void Menu::ShowMenu() {
	std::cout << "Welcome to the game \"Hammurabi\"!" << std::endl
		      << "Select a menu item:" << std::endl
			  << "1. Start" << std::endl
			  << "0. Exit" << std::endl;
	std::cout << "Select: ";
	int item = 0;
	std::cin >> item;
	switch (item) {
	case 0:
		Exit();
		break;
	case 1:
		Start();
		break;
	case 2:
		Continue();
		break;
	default:
		std::cout << "Incorrect item!" << std::endl;
		break;
	}
}

bool Menu::CheckSaveDatas() {
	bool resFlaf = false;
	std::string line = 0;
	std::ifstream input(pathSave);
	if (input.is_open()) {
		/*while (getline(input, line)) {
			std::cout << line << std::endl;
		}*/
	}
	resFlaf = true;
	input.close();

	return resFlaf;
}

Menu::~Menu() {
	Save();
}