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
	int minNumber, maxNumber, guess, actualNumber, range1, range2;
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
	// Else if statement to ensure order is correct
	else if (minNumber > maxNumber)
	{
		cout << "Incorrect input: The range input needs to be in order of MIN then MAX. \n";
		system("pause");
		return;
	}
		// If statement to see if guess is correct
	
		actualNumber = rand() % 100 + 1;
		range1 = (actualNumber - guess);
		range2 = (guess - actualNumber);

		if (guess == actualNumber) 
		{
			cout << "How did you do that? You must be a robot. \n";
		}

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
-Build errors occured because integers were being called for befor they were declared. Changed the order of statements.
-Program was running after the input was incorrect. Added a system pause and made the program end afterwards.
-cout was jumbled up. Added in extra spaces and line breaks for readability.
-Was getting negative values for how far off the numbers were. Added in an if statement to fix that.
*/
