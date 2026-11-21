#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for the height until the user gives a number from 1 to 8
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // For each row from 1 to height
    for (int i = 1; i <= height; i++)
    {
        // Print (height - i) spaces
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }

        // Print i hashes
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }
}
