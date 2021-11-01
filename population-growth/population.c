#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // variable initialization
    int startSize;
    int endSize;
    int yearsCount = 0;

    do
    {
      //get_int allows us to ask the user to enter start number
      startSize = get_int("Enter Start Size: ");

      printf("Start size: %i\n", startSize);
    }
    while (startSize < 9);

    do
    {
      //get_int allows us to ask the user to enter end number
      endSize = get_int("Enter End Size: ");

      printf("End size: %i\n", endSize);
    }
    while (endSize < startSize);


    for (yearsCount; startSize < endSize; yearsCount++)
    {
        startSize += startSize/3 - startSize/4;
    };

    printf("Years: %i\n", yearsCount);
}