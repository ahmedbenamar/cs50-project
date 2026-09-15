#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string world1 = get_string("player 1:");
    string world2 = get_string("player 2:");

int points[] = {
    1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10
};
int score1 = 0;

for (int i = 0; i < strlen(world1); i++)
{
    if (isalpha(world1[i]))
    {
        int index = toupper(world1[i]) - 'A';
        score1 += points[index];
    }
}
int score2 = 0;

for (int i = 0; i <strlen(world2); i++)
{
    if (isalpha(world2[i]))
    {
       int index = toupper(world2[i]) - 'A';
    score2 += points[index];
    }
}
if (score1 > score2)
{
    printf("Player 1 wins!\n");
}
else if (score2 > score1)
{
    printf("Player 2 wins!\n");
}
else
{
    printf("Tie!\n");
}
}
