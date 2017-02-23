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
	int minNumber, maxNumber, guess, actualNumber, range;

	// Input/output for the guess
    cout << "Please enter min and max range.";
    cin >> minNumber >> maxNumber;

// If statement to check if numbers are entered in order
if (minNumber > maxNumber)
{
	cout << "Incorrect input: The range input needs to be in order of MIN then MAX.";
}
	// Else if statement to ensure order is correct
	else if (minNumber < maxNumber)
	{
    cout << "Guess the number.";
    cin >> guess;
	}
    // Calulates the random number and the difference between the guess
    srand(time(0));
    actualNumber = rand() % 100 + 1;

    range = (actualNumber - guess);
    // If statement to see if guess is correct
	if (guess == actualNumber)
	{
    	cout << "How did you do that? You must be a robot.";
	}
		else
		{
			cout << "Wrong! The number was" << actualNumber << ",you were off by" << range;
	}
	return 0;
		// Ends the program once the game is over
		system ("pause");
}

/* Bug Notes
-
*/
