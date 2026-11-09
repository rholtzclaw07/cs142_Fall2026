#include <iostream>

//Riley Holtzclaw

void GetNum (int & x, int & y);

int main()
{
int num1 (0), num2 (0);

GetNum(num1 , num2);

std::cout<<"Num1: " << num1 << std::endl;
std::cout<<"Num2: " << num2 << std::endl;

return 0;
}

void GetNum (int & x, int & y)
{
std::cout << "Please enter a number: ";
std::cin >> x;

std::cout << "\nPlease enter another number: ";
std::cin >> y;

//return x, y;
}