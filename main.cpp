#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(time(0));

    int guess = rand()%100+1;
    int num;
    int tr_y=0;

    cout<<"LET'S PLAY GUESSING NUMBER GAME"<<endl<<endl;
    cout<<"YEAH ! GOT A NUMBER :) GUESS :"<<endl;

    do{

        cin>>num;
        tr_y++;

        if(guess < num){
            cout<<"LOWER THEN YOU GUESS"<<endl;
        }
        else if(guess > num){
            cout<< "Higher THEN YOU GUESS"<<endl;
        }
        else if(guess==num){
            cout<<"Congratulation YOU win the GAME"<<endl;
            cout<< "and YOuR attempt is =  "<< tr_y;
        }

    }

while(num != guess);


return 0;


}
