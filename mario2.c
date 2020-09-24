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
    
    for  (int i = 0; i < height; i++)
    {
            
        for (int j = height; j > i; j--)
        {
            printf(" ");
        }
    for (int a = 0; a <= i; a++)
    {
        
    printf("#");
    
    }
    for (int space = 0; space < 1; space++)
    {
        
    printf("  ");
    
    for (int b = 0; b <= i; b++)
    {
    for (int c = b; c <= b; c++)
    {
        printf("#");
    }
    }
       
    }
    printf("\n");
    }
}