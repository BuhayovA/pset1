#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get_string allows us to ask the user to enter some text
    string name = get_string("What is your name?\n");

    //printf just outputs a message to the terminal
    printf("hello, %s\n", name);
}