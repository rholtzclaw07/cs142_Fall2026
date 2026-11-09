/* 
Riley Holtzclaw
Assignment #4

This code is my own
RH
*/
#include <iostream>
#include <limits>
#include <string>

bool isPrime(int num);

void howmanyprime(int num, int & primeCount);

void print(int num);

int main()
{
	//list of integers n thingies
	
int usernum = 0;
int totalprime = 0;
bool numberisprime = false;
char continuechoice = ' ';
char viewListchoice = ' ';

std::cout << "--**Welcome to the Prime Calculator**--" << std::endl;

do{
	std::cout << "Please enter a number: ";
	std::cin >> usernum ;
	
//testing if the number is prime
	
	numberisprime = isPrime(usernum);
	
	howmanyprime(usernum, totalprime);
	
	if (usernum <= 1) {
		std::cout << "No prime numbers were found!" << std::endl;
	}
	else if (usernum == 2) {
		std::cout << "2 is a prime number. \n" << std::endl;
		std::cout << "2 is the smallest prime number!" << std::endl;
	}
	else {
		if (numberisprime) {
			std::cout << usernum << " is a prime number." << std::endl;
		}
		std::cout << "There are " << totalprime << " prime numbers between 0 and " << usernum << std::endl;
	
	
//prompt user to view the list of prime numbers

std::cout << "Would you like to see the numbers" <<std::endl;

std::cout << "(Y)es or (N)o? ";

std::cin >> viewListchoice;

if (viewListchoice == 'Y' || viewListchoice == 'y') {
	
	std::cout << "The number(s) are: ";
	print(usernum);
	std::cout << std::endl;
	}
}
std::cout << "Would you like to continue" << std::endl;
std::cout << "(Y)es or (N)o? ";

std::cin >> continuechoice;

} while (continuechoice == 'Y' || continuechoice == 'y');

std::cout << "Thanks for running the program" << std::endl;
std::cout << "goodbye!" << std::endl;

    return 0;
	}
bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

//calculate total number of prime numbers up to 'num'

void howmanyprime(int num, int & primeCount) {
	primeCount = 0;
	int currentNum = 2;
while (currentNum < num) {
	if (isPrime(currentNum)){
		primeCount++;
	}
	currentNum++;
}
}
//prints prime numbers between 0 and 'num'

void print(int num) {
	for (int i = 2; i < num; i++) {
		if (isPrime(i)) {
			std::cout << i << " ";
		}
	}
}