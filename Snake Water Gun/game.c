#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int getTheWinner(char a, char b)
{
    if (a == b)
    {
        return 0;
    }
    else if (a == 'w' & b == 's')
    {
        return 1;
    }
    else if (a == 's' & b == 'w')
    {
        return -1;
    }
    else if (a == 'g' & b == 's')
    {
        return -1;
    }
    else if (a == 's' & b == 'g')
    {
        return 1;
    }
    else if (a == 'w' & b == 'g')
    {
        return -1;
    }
    else if (a == 'g' & b == 'w')
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
    printf("Welcome to Snake, Water, Gun Game.....\n");
    printf("So Let's Start...\n");
    printf("Enter 1 to Start And Enter 0 To Exit\n");
    scanf("%d",&started);
    srand(time(0));
    k = rand()%100+1;
    if(k<33){
        computer = 's';
    }else if(k>33& k<66){
        computer = 'g';
    }else if(k>66){
        computer = 'w';
    }
    printf("Choose between 's' for  Snake ,'w' for Water ,'g' for Gun .....\n");
    
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