# include<iostream>

int main(){
    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    num=rand()%100+1;
    std::cout<<"**********WELCOME TO THE NUMBER GUESSING GAME!**********\n";
    do{
        std::cout<<"Enter anynumber b/w 1 and 100:";
        std::cin>>guess;
        tries++;
        if(guess>num){
            std::cout<<"too high! Try again.\n";
        }
        else if(guess<num){
            std::cout<<"too low!bro try again.\n";
        }
        else{
            std::cout<<"Congratulations! You guessed the number in "<<tries<<" tries.\n";
        }
    } while(guess!=num); 

std::cout<<"Thank you for playing the game! Goodbye!\n";
return 0;
    }

