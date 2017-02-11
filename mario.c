#include <stdio.h>
#include <cs50.h>

/* Mario More Comfortable CS50 Project
   by James Meehan
*/

int main(void)
{
    
    int height;
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while (height < 0|| height > 23);
   
    for (int i = 0; i < height; i++)
    {
    for (int j = 0; j < height - i - 1; j++)
    {
        printf("%s", " ");
    }
    for (int k = 0; k < i+1; k++)
        {
            printf("#");
        }
   
        printf("  ");
        
    for (int l = 0; l < i+1; l++)
    {
        printf("#");
    }
    printf("\n");
    }
  
}
