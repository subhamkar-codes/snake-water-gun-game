#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int totalRounds, target;
    int playerScore, computerScore;
    int playAgain;

    do
    {
        playerScore = 0;
        computerScore = 0;

        printf("Choose Best of 1, 3, 5, or 7: ");
        scanf("%d", &totalRounds);
        printf("You chose Best of %d\n", totalRounds);

        target = (totalRounds / 2) + 1;

        while (playerScore < target && computerScore < target)
        {
            int player, computer = (rand() % 3);

            printf("\nChoose '0' for Snake, '1' for Water, '2' for Gun\n");
            scanf("%d", &player);
            printf("The computer's chosen number is %d\n", computer);

            if (player == 0 && computer == 0)
            {
                printf("Draw!! Both chose the same!! Round replays\n");
            }
            else if (player == 0 && computer == 1)
            {
                printf("You Win!! Snake drinks Water\n");
                playerScore++;
            }
            else if (player == 0 && computer == 2)
            {
                printf("You Lose!! Gun kills the Snake\n");
                computerScore++;
            }
            else if (player == 1 && computer == 0)
            {
                printf("You Lose!! Snake drinks Water\n");
                computerScore++;
            }
            else if (player == 1 && computer == 1)
            {
                printf("Draw!! Both chose the same!! Round replays\n");
            }
            else if (player == 1 && computer == 2)
            {
                printf("You Win!! Water drowns the Gun\n");
                playerScore++;
            }
            else if (player == 2 && computer == 0)
            {
                printf("You Win!! Gun kills the Snake\n");
                playerScore++;
            }
            else if (player == 2 && computer == 1)
            {
                printf("You Lose!! Water drowns the Gun\n");
                computerScore++;
            }
            else if (player == 2 && computer == 2)
            {
                printf("Draw!! Both chose the same!! Round replays\n");
            }

            printf("Score -> You: %d | Computer: %d\n", playerScore, computerScore);
        }

        printf("\n=== Match Over ===\n");
        if (playerScore > computerScore)
        {
            printf("You won the match %d-%d!\n", playerScore, computerScore);
        }
        else
        {
            printf("Computer won the match %d-%d!\n", computerScore, playerScore);
        }

        printf("\nWant to play again? 0 for yes, 1 for no: ");
        scanf("%d", &playAgain);

    } while (playAgain == 0);

    printf("\nThank you for your cooperation!\n");

    return 0;
}