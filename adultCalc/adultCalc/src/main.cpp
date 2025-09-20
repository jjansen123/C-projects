#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

int main() {
	int age;

	std::cout << "What is your age? ";
	std::cin >> age;
	std::this_thread::sleep_for(std::chrono::seconds(1));
	system("cls");
	std::cout << "Age successfully submitted! \n";
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	std::cout << "Starting calculations... \n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
	system("cls");

	if (age >= 18) {
		std::cout << "You are an adult.\n";
	}
	else {
		std::cout << "You are not an adult.\n";
	}
}