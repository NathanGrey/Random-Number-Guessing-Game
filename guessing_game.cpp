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
	// Declaration of variables
	int minNumber, maxNumber, guess, actualNumber, range1, range2;
	// Seeds the random number to make it actually random
	srand(time(0));

	// Input/output for the guess
	cout << "Please enter min and max range. \n";
	cin >> minNumber >> maxNumber;

	// If statement to check if numbers are entered in order
	if (minNumber < maxNumber)
	{
		cout << "Guess the number. \n";
		cin >> guess;
	}
	// Else if statement for the input order being incorrect
	else if (minNumber > maxNumber)
	{
		cout << "Incorrect input: The range input needs to be in order of MIN then MAX. \n";
		system("pause");
		return;
	}
	// Calculations for the number range and how to determine which formula to use for the range so that no negative values are given
	actualNumber = rand() % (maxNumber - minNumber) + min; // Makes random number between min and max range
	range1 = (actualNumber - guess);
	range2 = (guess - actualNumber);

	// If statement to see if guess is correct
	if (guess == actualNumber)
	{
		cout << "How did you do that? You must be a robot. \n";
	}
	// Else if to see if the guess is incorrect with nested if statement to check which range integer to use
	else if (guess != actualNumber)
		if (actualNumber > guess)
		{
			cout << "Wrong! The number was" << " " << actualNumber << ", you were off by" << " " << range1 << "!" << "\n";
		}
		else if (actualNumber < guess)
		{
			cout << "Wrong! The number was" << " " << actualNumber << ", you were off by" << " " << range2 << "!" << "\n";
		}

	// Ends the program once the game is over
	system("pause");
}

/* Bug Notes
-Build errors occurred because integers were being called for before they were declared. Changed the order of statements.
-Program was running after the input was incorrect. Added a system pause and made the program end afterwards.
-cout was jumbled up. Added in extra spaces and line breaks for readability.
-Was getting negative values for how far off the numbers were. Added in an if statement to fix that.
-Named the project wrong. Renamed and made a new project for it so there weren't duplicate files.
*/
