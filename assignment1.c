/*
Program Description: Develop a program in C that will simulate a mathematics quiz
game. The game will include various features, each of which must be incorporated
into your program.
Author: Ian Rainier Hipolito
Date: 16/11/21
*/

#include <stdio.h>


int main()
{
    //initialising the variables
    int option = 0;
    int numques = 0;
    int ans1 = 0;
    int ans2 = 0;
    int ans3 = 0;
    int ans4 = 0;
    int ans5 = 0;
    int corans = 0;
    int incorans = 0;
    int i = 0;

    //While loop is used to continually keep asking options and questions until user inputs the number 4
    while (option != 4)
    {
        //Displaying the main menu
        printf("\n<------Welcome to the Mathematics Quiz Game!------> \n");
        printf("<------The Rules of the game are as follows:------> \n");
        printf("<------You will be asked to choose an option between 1 to 4.------> \n");
        printf("<------Option 1: You will be asked how many questions you wish to answer (Maximum is 5).------> \n");
        printf("<------Option 2: The quiz game will begin with the amount of questions you have chosen.------> \n");
        printf("<------Option 3: Will display the amount of correct and incorrect questions for each round of the quiz.------> \n");
        printf("<------Option 4: By chosing the last option the quiz game will terminate.------> \n");
        printf("<------Enjoy the Mathemathics Quiz Game!!------> \n");

        printf("\n Enter an option from 1 to 4: ");
        scanf("%d", &option);

        //Error checking to ensure valid input for the options
        if (option != 1 && option != 2 && option != 3 && option != 4)
        {
            printf("\n Error, wrong input!!\n Please enter a correct option from 1-4: \n");
            scanf("%d", &option);
        } //end if

        //Error checking if user input is a letter or symbol (unwanted characters)
        while (getchar() != '\n')
            ;

        //if condition is true execute the code inside the if statement
        if (option == 1)
        {
            /*
            Do-while loops can be useful when you know you want the code to run at least once 
            (a while loop will not run at all if the condition it checks for is false beforehand, 
            but a do-while loop will run once before it checks)
            */
            //Do while loop does not check the condition for the first loop but checks the other loops after
            //We need to get user input before we check if it's invalid otherwise we'd be checking 0 since that's what we initialised it to
            do
            {
                printf("\n How many questions do you want to answer from 1 to 5? ");
                scanf("%d", &numques);
            } while (numques > 5);

        } //end if

        //if user inputs option 2 the quiz will begin
        else if (option == 2)
        {
            printf("\n Start and play the quiz! \n");

            //In order to reset correct and incorrect answer counter; corans and incorans must equal to 0
            corans = 0;
            incorans = 0;

            //Ask a question for 'numques' times
            //i is the counter, after every loop i++ adds one to i, so if i is greater than or equals to numques the loop will stop
            for (i = 0; i < numques; i++)
            {
                printf("\n Please answer the question: \n");

                //If statements allows to the user to have different questions
                //Ask the user the first question
                if (i == 0)
                {
                    printf("5 * 5 + 5 = ");
                    scanf("%d", &ans1);

                    //Checks if answer is correct or incorrect
                    if (ans1 == 30)
                    {
                        printf("\n You entered %d, The answer is correct! \n", ans1);

                        //Correct answers counter is implemented
                        corans = corans + 1;
                    } //end if

                    else if (ans1 != 30)
                    {
                        printf("\n The answer is incorrect, the answer is 30 \n");

                        //Incorrect answers counter is implemented
                        incorans = incorans + 1;
                    } //end else if
                }

                //If i equals to 1 the user will be asked the 2nd question
                if (i == 1)
                {
                    printf("18 / 9 - 1 = ");
                    scanf("%d", &ans2);

                    //Checks if answer is correct or incorrect
                    if (ans2 == 1)
                    {

                        //Correct answers counter is implemented
                        corans = corans + 1;
                    } //end if

                    else if (ans2 != 1)
                    {
                        printf("\n The answer is incorrect, the answer 1 \n");

                        //Incorrect answers counter is implemented
                        incorans = incorans + 1;
                    } //end else if
                }

                //If i equals to 2 the user will be asked the 3rd question
                if (i == 2)
                {
                    printf("3 - 3 + 3 = ");
                    scanf("%d", &ans3);

                    //Checks if answer is correct or incorrect
                    if (ans3 == 3)
                    {
                        printf("\n You entered %d, The answer is correct! \n", ans3);

                        //Correct answers counter is implemented
                        corans = corans + 1;
                    } //end if

                    else if (ans3 != 3)
                    {
                        printf("\n The answer is incorrect, the answer is 3 \n");

                        //Incorrect answers counter is implemented
                        incorans = incorans + 1;
                    } //end else if
                }     //end outer if

                //If i equals to 3 the user will be asked the 4th question
                if (i == 3)
                {
                    printf("7 + 7 / 7 = ");
                    scanf("%d", &ans4);

                    //Checks if answer is correct or incorrect
                    if (ans4 == 2)
                    {
                        printf("\n You entered %d, The answer is correct! \n", ans4);

                        //Correct answers counter is implemented
                        corans = corans + 1;
                    } //end if

                    else if (ans4 != 2)
                    {
                        printf("\n The answer is incorrect, the answer is 2 \n");

                        //Incorrect answers counter is implemented
                        incorans = incorans + 1;
                    } //end else if
                }     //end outer if

                //If i equals to 4 the user will be asked the 5th question
                if (i == 4)
                {
                    printf("10 - 2 * 3 = ");
                    scanf("%d", &ans5);

                    //Checks if answer is correct or incorrect
                    if (ans5 == 4)
                    {
                        printf("\n You entered %d, The answer is correct! \n", ans5);

                        //Correct answers counter is implemented
                        corans = corans + 1;
                    } //end if

                    else if (ans5 != 4)
                    {
                        printf("\n The answer is incorrect, the answer is 4 \n");

                        //Incorrect answers counter is implemented
                        incorans = incorans + 1;
                    } //end else if
                }     //end outer if
            }         //end for loop

            //wrongInput = wrongInput + 1;
        } //end outer else if

        //Prints out number of correct and incorrect asnwers
        if (option == 3)
        {
            printf("Number of correct answers = %d \n", corans);
            printf("Number of incorrect answers = %d \n", incorans);

        } //end else if
    }
    return 0;
} //end main
