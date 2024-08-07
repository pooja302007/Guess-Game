#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

      int number,guess = 0,Nguesses=1,score = 100;
      srand(time(0));
      number = rand()%100+1;

      printf("\t---*WELCOME TO GUESS GAME*---\n");




      do{
        printf("Enter Your Guess Between 1 to 100:");
        scanf("%d",&guess);

        if(guess>number){
            printf("Your guess is too high.\n");
            score-=10;
        }
        else if(guess<number){
            printf("Your guess is too low.\n");
            score-=10;
        }
        else{
            printf("Hurray! You got it in %d attempts!",Nguesses);
            printf("Your Score:%d\n",score);
        }
        Nguesses++;
      }while(guess!=number);


       return 0;

      }


