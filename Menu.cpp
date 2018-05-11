//
//  Menu.cpp
//  GroupProject162
//
//  Created by Jin Zheng Xuan on 5/9/18.
//  Copyright © 2018 Jin Zheng Xuan. All rights reserved.
//

#include "Menu.hpp"
#include <iostream>

using namespace std;

void startMenu(int &select){
	cout << "1.) Begin the Predator-Prey Game." << endl;
	cout << "2.) Quit the program." << endl;
	cout << "Please enter either 1 or 2 from the above menu." << endl;
	select = inputType_val(1,2);
}

void replayMenu(int &select){
	cout << "1.) Play the Predator-Prey Game again." << endl;
	cout << "2.) Quit the program." << endl;
	cout << "Please enter either 1 or 2 from the above menu." << endl;
	select = inputType_val(1,2);
}

int inputType_val(int min, int max){
	//Checks for correct data type and whether input is within the specified range.
	int val;
	cin >> val;
	while (std::cin.fail() || val < min || val > max){
		if(std::cin.fail())
			std::cout << "Input is invalid! Please enter an integer:  " << std::endl;
		else if (val < min)
			std::cout << "Input is invalid! Please enter an integer between " << min << " and " << max << "!" << std::endl;
		else if (val > max)
			std::cout << "Input is invalid! Please enter an integer between " << min << " and " << max << "!" << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
	}
	return val;
};

