#include <stdio.h>
#include <string.h>
#include <stdlib.h>//srand 
#include <time.h> //time 

void robotChoice(int random,int choice); //prototype

int main()
{
     srand(time(NULL)); //random number sequence using time
     int random,choice;

     printf("Welcome to 'paper scissor rock game'\nIt ends when one side's score reaches 3\n");
     robotChoice(random,choice);
}

void robotChoice(int random,int choice)
{
     random=rand()%3+1;//choose number between 1 and 3 (include)
     int comp=0;
     int player=0;
     do
     {
          printf("1-paper\n2-scissor\n3-rock\nMake your choice\n");
          scanf("%d",&choice);

          if(random==1)
          {
               if(choice==2)
                    player++;
               else
                    comp++;
          }
          else if(random==2)
          {
               if(choice==1)
                    comp++;
               else
                    player++;
          }
          else
          {
               if(choice==1)
                    player++;
               else
                    comp++;
          }
          printf("Computer: %d Player: %d\n",comp,player);
     } while (comp!=3 && player!=3);
     
     if (comp>player)
          printf("\nYou loose :(");
     else
          printf("You win!! :)");
}