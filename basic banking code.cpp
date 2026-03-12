#include<iostream>

void showbalance(double balance);
double deposit();
double withdraw();

int main(){
    double balance=0.0;
    int choice=0;
    do{
    std::cout<<"**********WELCOME TO THE BASIC BANKING PROGRAM!**********\n";
    std::cout<<"Enter your choice:";
    std::cout<<"1. show balance\n";
    std::cout<<"2.deposit\n";
    std::cout<<"3.withdraw\n";
    std::cout<<"4.exit\n";
    std::cin>>choice;
    
    switch(choice){
        case 1:showbalance(balance);
        break;
        case 2:balance += deposit ();
        break;
        case 3:balance-=withdraw();
        break;
        default:
        std::cout<<"Exiting...Thank you for visiting :)";
    }
    }while(choice!=4);

return 0;
    
}
 void showbalance(double balance){
    std::cout<<"Your current balance is:"<<balance<<"rs"<<std::endl;
   }
double deposit(){
    double amount;
    std::cout<<"ENter the amount to deposit:";
    std::cin>>amount;
    return amount;
}
double withdraw(){
    double amount;
    std::cout<<"enter the amount to withdraw:";
    std::cin>>amount;
    return amount;
}
   
