#include <iostream>
#include <string>
#include <limits>


//The code is my own

//Riley Holtzclaw

int main()
{
	char repeatchoice = 'y';
	
	int U
	
	(U = 0);
	
	int L
	
	(L = 0);
	
	do {
		do{
std::cout << "Please enter the upper bound of the Collatz Conjecture." << std::endl;

		
		
//user enters the upper limit		

std::cin >> U;

std::cout << "You entered " <<U<< std::endl; 

std::cout << "Now please enter the lower bound of the Collatz Conjecture." << std::endl;

//user enters the lower limit

std::cin >> L;

std::cout << "You entered " <<L<< std::endl;
std::cout << "--------------------------------------------------------\n";


//the program shows the two bounds entered by the user
	
	{
std::cout << "Your upper bounds are " <<U<< std::endl; 
std::cout << "Your lower bounds are " <<L<< std::endl;
std::cout << "--------------------------------------------------------\n";

long long Maxstepsnumber = L;
	}
}
while (L <= 0 || U <= 0 || L > U);
long long Maxstepsnumber = L;
int maxSteps = -1;

for (int current = L; current <= U; ++current)
{
	long long n = current;
	int steps = 0;
	std::cout << "The Collatz Conjecture for " << current << ": ";

while(n !=1){
	if(n % 2 ==0){
		n = n / 2;
	}else{
		n = 3 * n + 1;
	}
	steps++;
}
std::cout << 1 << " (Total Steps: " << steps << ") \n";



if (steps > maxSteps){
	maxSteps = steps;
	Maxstepsnumber = current;
	
	std::cout << "--------------------------------------------------------\n";

	std::cout << "The maximum cycle length between " << L << " and " << U << " is: " << maxSteps << "\n";
	std::cout << "The value between " << L << " and " << U << " with the maximum cycle is : " << Maxstepsnumber << "\n";
std::cout << "--------------------------------------------------------\n";
	
	
	
}
	
	
}
std::cout << "Would you like to enter another number? (Y)es or (N)o \n" << std::endl;

std::cin >> repeatchoice;

}while (repeatchoice == 'y' || repeatchoice == 'Y');

std::cout << "Thanks for using my program, Goodbye! :)" << std::endl;

return (0);
}