#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

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
    }else if (a == 'l' & b == 'r')
    {
        return 1;
    }else if (a == 'r' & b == 'l')
    {
        return -1;
    }else if (a == 'l' & b == 'p')
    {
        return -1;
    }else if (a == 'p' & b == 'l')
    {
        return 1;
    }else if (a == 'l' & b == 's')
    {
        return 1;
    }else if (a == 's' & b == 'l')
    {
        return -1;
    }else if (a == 'l' & b == 'x')
    {
        return -1;
    }else if (a == 'x' & b == 'l')
    {
        return 1;
    }else if (a == 'x' & b == 'r')
    {
        return -1;
    }else if (a == 'r' & b == 'x')
    {
        return 1;
    }else if (a == 'p' & b == 'x')
    {
        return -1;
    }else if (a == 'x' & b == 'p')
    {
        return 1;
    }else if (a == 'x' & b == 's')
    {
        return -1;
    }else if (a == 's' & b == 'x')
    {
        return 1;
    }
    return 0;
}

int main()
{
    char computer, you;
    int result;
    int started;
    int k;
do
{
    cout << "Welcome to Rock, Paper, sissors, Lizard, xock  Game....."<<endl << "This is inxired From The Big Bang Theory. "<<endl;
    cout << "So Let's Start...\n" ;
    cout << "Enter 1 to Start And Enter 0 To Exit\n";
    cin >> started;
    srand(time(0));
    k = rand()%100+1;
    if(k<=20){
        computer = 'r';
    }else if(k>20& k<=40){
        computer = 'p';
    }else if(k>40& k<=60){
        computer = 's';
    }else if(k>60& k<=80){
        computer = 'l';
    }else if(k>80& k<=100){
        computer = 'x';
    }
    cout << "Choose between 'r' for  Rock ,'p' for Paper ,'s' for sissor, 'l' for Lizard ,'x'for Spock .....\n";
    
    cin >> you;

    result = getTheWinner(computer, you);
    if(result == 0){
        cout << "The game was a DRAW!!!\n";
    }else if(result == 1){
        cout << "You Win....\n";
    }else{
        cout << "You loose.....\n";
    }

    cout << "You choose " << you << " and Computer choose " << computer <<endl ;
} while (started!=0);


    
    return 0;
}