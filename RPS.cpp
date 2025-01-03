//This game is of rock paper and sicssor using if else statement and various c++ methods

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

char getComputerMove()
{
    int move;

    //generating trandom number betrween 0-2
    srand(time(NULL));
    move = rand()%3;

    //returning move based on the random number gernerated
    if(move==0)
    {
        return 'P';

    }
    else if(move==1)
    {
        return 'S';
    }
    return 'R';

}


//function to return the reuzlt of the game
int getResult(char playerMove , char computerMove)
{
    //condition for Draw
    if(playerMove==computerMove)
    {
        return 0 ;
    }

    //condition for win and loose according toi gamne rule
    if(playerMove == 'S' && computerMove == 'R')
    {
        return 1;
    }

    

     if(playerMove == 'P' && computerMove == 'S')
    {
        return 1;
    }

     if(playerMove == 'P' && computerMove == 'R')
    {
        return 1;
    }

     if(playerMove == 'R' && computerMove == 'P')
    {
        return 1;
    }

    if(playerMove == 'R' && computerMove == 'S')
    {
        return 1;
    }

    return 0;
    

}

int main()
{
    char playerMove;

    cout<<"\n\n\n\t\t\tWELCOME TO ROCK PAER SICSSOR GAME\n";

    cout<<"\n\n\n\t\t\tENTER 'R' FOR ROCK 'S' FOR SCISSOR 'P' FOR PAPER\n";

    while(1)
    {
        cin>>playerMove;
        if(playerMove == 'P' || playerMove == 'R' || playerMove == 'S')
        {
            break;
        }
        else{
            cout<<"\t\t\t\tINVALID Player Move !! Please Try Again"<<endl;
        }
    }

    //computer move
    char computerMove = getComputerMove();

    int result = getResult(playerMove, computerMove);
    if(result == 0)
    {
        cout<<"congo you have won  ";
    }

    else{
        cout<<"\t\t oh! computer won the game !";
    }

    cout<<"\t\t\tyour Move: "<<playerMove<<endl;
    cout<<"\t\t\tcomputer move "<<computerMove<<endl;
    return 0;
}