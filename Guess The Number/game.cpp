#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main(){
    int number , guess , tries =1;
    srand(time(0));
    number = rand()%100+1;
    cout <<  "This is the Random Number " << number<<endl;
    do{
        cout << "Guess the Number : ";
        cin >> guess;
        if(guess>number){
            cout << "Lower Number please.. "<<endl;

        }else if(guess < number ){
            cout << "Higher Number please.. "<<endl;
        }else{
            cout << "You Guessed In " << tries <<"  tries";
        }
        tries++;
    }while (guess!=number);
    
    return 0;
}

