#include<iostream>
#include<ctime>
#include<cstdlib>

char getcomputerchoice();
char getuserchoice();
void showchoice(char choice);
void chooseWinner(char player,char computer);
int main(){
    srand(time(NULL));
    char player;
    char computer;
player=getuserchoice();
std::cout<<"you choice is:";
showchoice(player);
computer=getcomputerchoice();
std::cout<<"computer choice is:";
showchoice(computer);
chooseWinner(player, computer);
    return 0;
}
char getcomputerchoice(){
    
    int randnum=rand()%3+1;
    switch(randnum){
        case 1:
        return 'r';
        break;
        case 2:
        return 'p';
        break;
        case 3:
        return's';
        break;      
    }
    return 0;
}
char getuserchoice(){
    char player;
    do{
    std::cout<<"Enter your choice (r for rock,p for paper,s for scissor):";
    std::cin>>player;
}while(player!='r' && player!='p' && player!='s');

    return player;
}
void showchoice(char choice){
    switch(choice){
        case 'r':
        std::cout<<"ROCK\n";
        break;
        case 'p':
        std::cout<<"PAPER\n";
        break;
        case 's':
        std::cout<<"SCISSOR\n";
        break;
    }
}
void chooseWinner(char player,char computer){
    if(player==computer){
        std::cout<<"its a TIE!!!";
    }
    else if(player=='r'&& computer=='s'){
        std::cout<<"YOU WINN!! :)";
    }
    else if(player=='p' && computer=='r'){
        std::cout<<"YOU WINN!!";
    }
    else if(player=='s' && computer=='p'){
        std::cout<<"YOU WINN!!";
    }
    else{
        std::cout<<"YOU LOOSE!! :(, COMPUTER WIN !!";

           
    }
    }