// Starts the preprocessor command including the contents of iostream
#include <iostream>
// Generates random numbers
#include <stdlib.h>
// Uses seed srand with time
#include <time.h>
// This eliminates the need to write std::cout so it can just be cout
using namespace std;  

void main()
{
	// Delcaration of variables
	int minNumber, maxNumber, guess, actualNumber, range

	// Input/output for the guess
    cout << "Please enter min and max range";
    cin >> minNumber maxNumber;

	if (minNumber maxNumber)
	{
    cout << "Guess the number";
    cin >> guess;

    actualNumber = rand()
    // If statement to see if guess is correct
	if (guess == actualNumber)
	{
    	cout << "How did you do that? You must be a robot.";
	}
		else
		{
			cout << "Wrong! The number was" << actualNumber << ",you were off by" << range;
		}

	}

}
