#include <stdlib.h>
#include <stdio.h>

int main()
{
    int player;
    printf("Who is the best football player in the world?");              /*prompt the user*/
    scanf("%c", &player);                                                 /*allows for user input, getting the input as a word. Then, store input in declared variable. Need the &*/
    printf("You are right, %c is the best player in the world!", player); /*printing user input*/
    return 0;
}