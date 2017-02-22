Random Number Guessing Game
Description
You will be writing an interactive guessing game. This will build on concepts from Assignment 2.1, but we will be utilizing rand() and srand() to make it more fun. You'll use Visual Studio to create a new project. As well as use Visual Studio to code, edit, and build this assignment.

Requirements:

Create a Visual Studio project. Naming convention for project: [yourlastname]_3
Create guessing_game.cpp file in the new project.
Project must build and compile without any errors.
Must meet runtime specifications.
Runtime Specifications:

Prompt the user for two integers; these will be the range for our random number.
Make sure the input is correct here. You should expect the START of the range as the first number and the END of the range as the second.
Verify the above condition with an if statement. Print an error to console if this is incorrect.
Once we have the min and max, generate a random number. Then prompt the user to guess the number.
If the user's guess is correct, print a congratulatory message.
If the user's guess is wrong, print a disappointed message and tell the how far off they were. For example, if the number was 60 and the user guesses 1000, they were off by 940.
Each execution of the application should yield different random variables even if the same range is used.
You should use logical operators ||, &&, or ! where appropriate to reduce code duplication.
Two sample outputs from a program run:

Output 1 (correct guess)

            > Please enter min and max range:  10 100

            > Guess the number: 7

            > How did you do that? You must be a robot.

Output 2 (incorrect guess)

            > Please enter min and max range:  10 100

            > Guess the number: 68

            > Wrong! The number was 7, you were off by 61!

Output 3 (incorrect input on range)

            > Please enter min and max range:  200 100

            > Incorrect input: The range input needs to be in the order of MIN then MAX.

