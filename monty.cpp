//THE CODE HERE IS MY OWN CODE

#include <iostream>
#include <string>


int main()

//The program greets the user and asks them their name.

	{ 
	std:: string response;

	std::string userword;

	std::cout << "Hello Fair Traveller! What might your name be? \n";

	std::cin >> userword;

	std::cout << "Well Hello Sir " <<userword<< " I see that you are on an important quest. And your goal is just past this bridge that I so happen to be blocking. \n" << std::endl;

	std::cout << "You must answer these riddles of three so yee can be free to cross this sea! Get one wrong and you'll be gone! \n" << std::endl;


// The user must answer the yes or no question. If they answer yes (y) they continue.
// if they answer no (n) they end the program

		while (true){	

		std::cout << "Are you brave enough to challenge my riddles? \n" << std::endl;

		std::cout << "answer y/n \n";

		std::cin >> response;
			{
			if (response == "y")
			{
			std::cout << "Very well then answer my first question... \n \n"; break;	
			}
				else if (response == "n")
				{
					std::cout << "Very well. Goodbye traveller \n \n";
					return(0);
				}

	else
		std::cout << "I'm sorry, I didnt quite catch that... Answer Yes or No \n";
}
}

//Question One

int x(0);

std::cout << "Question #1 \n \n" << std::endl;

std::cout << "What is 2 + 2 \n \n" << std:: endl;


std::cin >> x;


{
	if
	
	(x == 4)
	
	{
		
	std::cout << "Correct! on to the next question. \n \n" << std::endl;
	}
//Incorrect Answer
	else
	
	{
	std::cout<<"INCORRECT! YOU ARE CAST INTO THE GORGE OF PERIL \n \n" << std::endl;
std::cout << "Thanks for playing my Monty Python Game! [INTERMISSION \n";

		return(0);

}
}
// Question Two

double Mathtwo; 

std::cout << "Now for a harder math equation... \n";

std::cout << "What is (3 * 3) + 5 / 8 ? Round to the nearest 10th \n";

std::cin >> Mathtwo;
 
 //Correct Answer
 
if
(Mathtwo == 9.6)
 
 { std::cout << "Correct! on to the next question. \n \n";
 }
else 
	//Incorrect Answer
{ 
std::cout << "INCORRECT! YOU TRIPPED ON YOUR OWN TWO FEET INTO THE GORGE OF PERIL \n \n" << std::endl;
std::cout << "Thanks for playing my Monty Python Game! [INTERMISSION \n";

return (0);
}
	
//Question 3

std:: string color;

std::cout << "What is your favorite color? \n";

std::cin >> color;
//correct answer
if
	(color == "Blue" || color == "blue")
	
{std::cout << "Correct! On to the final question. \n \n";
}
//incorrect answer
else

{	
std::cout << "INCORRECT! YOU SLIPPED ON A STRAY BANANA PEEL AND FELL INTO THE GORGE OF PERIL \n \n" << std::endl;
std::cout << "Thanks for playing my Monty Python Game! [INTERMISSION \n";

return (0);

	}
//Question 4

int number;

std::cout << "Now for your final question. \n";

std::cout << "What is the airspeed velocity of an unladen swallow? \n";

std::cin >> number;
//correct answer
if
((number % 2) != 0)
{
	std::cout << "I- er- I don't know that!\n";
	
	std::cout<< "<BOING> \n";
	
	std::cout << "Congratulations! You beat the game and crossed the bridge!\n \n";
	
std::cout << "Thanks for playing my Monty Python Game! [INTERMISSION} \n";
} //incorrect answer
	else
	{
	std::cout << "INCORRECT! YOU FAILED ON THE LAST PROBLEM AND ARE NOW CAST INTO THE GORGE OF PERIL \n \n" << std::endl;
std::cout << "Thanks for playing my Monty Python Game! [INTERMISSION \n";
	
	}
	}
	
	//Riley Hotlzclaw