#include "fractionCalc.hpp"

void run(){
	//Menue:
	std::string str_menueInput = "";
	do{	
		std::cout << "Schreibe 'q' zum beenden des Programmes!" << std::endl;
		std::cin >> str_menueInput;
	}
	while(str_menueInput != "q");
}