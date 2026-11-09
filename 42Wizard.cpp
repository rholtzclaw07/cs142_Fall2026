#include <iostream>
#include <string>

int main()
// Make a program that can prompt the user to enter their name, favorite number, and make them guess the number 42

{
	std::string userword;
	int x(0);
	int y(0);
	int z(42);
	
	
std::cout<< "Please enter your name \n" ;

std::cin >> userword;

std::cout << "Hello " <<userword<<". Please enter your favorite number \n" ;

std::cin >> x;

if (x == z) ;
{ 
std::cout<< "CONGRATS" <<userword>> "You guessed correctly!";
{
else if (x > z) ;

	std::cout<< "INCORRECT!" <<userword<< "! \n";
	
	int distance (0);
	distance = x - z;
	
	std::cout<< "You are " <<distance<< "away from the right answer" 
}
{
else if (x < z);

std::cout<< "INCORRECT!" <<userword<< "! \n";
	
	int distance (0);
	distance = z - x;	
	
	std::cout<< "You are " <<distance<< "away from the right answer";
}
}
}