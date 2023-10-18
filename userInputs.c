#include <stdio.h>
#include <stdlib.h>

int main() {
  int age;
  printf("What is the best number in the world?"); /*prompt the user*/
  scanf("%d", &age); /*allows for user input, getting the input as a word. Then,
                        store input in declared variable. Need the &*/
  printf("You are right, %d is the best number in the world!",
         age); /*printing user input*/
  return 0;
}