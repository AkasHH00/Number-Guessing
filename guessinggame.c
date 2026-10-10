#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));
    random = rand() % 100 + 1; //generating between 0-100
    //printf("Number generated is : %d ", random);


    printf("Welcome to the world of Guessing Number\n");

    do{
        printf("\nPlease Enter you Guess between(1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess < random)
        {
            printf("Guess a larger number.\n");
        }else if (guess > random) {
            printf("Guess a smaller number.\n");
        } else {
            printf("Congratulations!!! you guessed the number in %d attempts.", no_of_guess);
        }
        


       } while(guess != random);
       printf("\n Bye Bye, Thanks for playing the game");
       printf("\n Developed by: Akash Singh");
}
