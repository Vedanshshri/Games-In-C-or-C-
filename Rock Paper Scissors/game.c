#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int getTheWinner(char a, char b)
{
    if (a == b)
    {
        return 0;
    }
    else if (a == 'r' & b == 'p')
    {
        return 1;
    }
    else if (a == 'p' & b == 'r')
    {
        return -1;
    }
    else if (a == 's' & b == 'p')
    {
        return -1;
    }
    else if (a == 'p' & b == 's')
    {
        return 1;
    }
    else if (a == 'r' & b == 's')
    {
        return -1;
    }
    else if (a == 's' & b == 'r')
    {
        return 1;
    }
}

int main()
{
    char computer, you;
    int result;
    int started;
    int k;
do
{
    printf("Welcome to Rock, Paper, Scissors Game.....\n");
    printf("So Let's Start...\n");
    printf("Enter 1 to Start And Enter 0 To Exit\n");
    scanf("%d",&started);
    srand(time(0));
    k = rand()%100+1;
    if(k<33){
        computer = 'r';
    }else if(k>33& k<66){
        computer = 'p';
    }else if(k>66){
        computer = 's';
    }
    printf("Choose between 'r' for  Rock ,'p' for Paper ,'s' for Scissor .....\n");
    
    scanf(" %c", &you);

    result = getTheWinner(computer, you);
    if(result == 0){
        printf("The game was a DRAW!!!\n");
    }else if(result == 1){
        printf("You Win....\n");
    }else{
        printf("You loose.....\n");
    }

    printf("You choose %c and Computer choose %c\n" , you ,computer);
} while (started!=0);


    
    return 0;
}