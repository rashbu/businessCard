#include <iostream>
#include <fstream>

std::string name;
std::string lastName;
int phoneNumber;


int main() {
	
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Enter your last name: ";
	std::cin >> lastName;
	std::cout << "Enter your phone number: ";
	std::cin >> phoneNumber;

	std::fstream file;
	file.open("Business_Card.txt", std::ios::out | std::ios::app);

	file << name << std::endl;
	file << lastName << std::endl;
	file << phoneNumber << std::endl;

	file.close();

	return 0;
}