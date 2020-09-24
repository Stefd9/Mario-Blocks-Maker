#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    // Asks for number between 1 - 8
    
    do
        {
            height = get_int("Height: ");
        }
    while (height < 0 || height >= 9);
    
    // The first for loop controls the first line of the hashtag. Connected to the 3rd loop, iff  
 
 for (int b = 0; b < height; b++)
    {
        for (int c = 0; c < b; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}