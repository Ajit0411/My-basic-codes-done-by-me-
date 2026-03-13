
/*#include<iostream>
int main(){
    std::string game_names[]={"rdr2","gta5","minecraft,","fortnite"};
    for(int i=0;i<sizeof(game_names)/sizeof(std::string);i++){
        std::cout<<game_names[i]<<std::endl;
    }
    return 0;
}
//---------------------------------------------------------------------------------------------------------------------------
#include<iostream>
double gettotal(double grade[],int size){
    double total=0.0;
    for(int i=0;i<size;i++){
        total+=grade[i];
        
    }
    return total;

}
int main(){
double grades[]={85.5,90.2,78.0,92.5,88.0};
double total=gettotal(grades,sizeof(grades)/sizeof(grades[0]));
for(int i=0;i<sizeof(grades)/sizeof(double);i++)
std::cout<<"GRADE:"<<total<<std::endl;
return 0;
}

//---------------------------------------------------------------------------------------------------------------------------
#include<iostream>

int searcharray(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;

}
int main(){
    int nums[]={10,20,30,40,50};
    int size=sizeof(nums)/sizeof(nums[0]);
    int index;
    int Mynums;
    std::cout<<"Enter the number to search in the array:\n";
    std::cin>>Mynums;
    index=searcharray(nums ,size,Mynums);
    if(index!=-1)
    std::cout<<"Eelement at index:"<<index<<std::endl;
    else
    std::cout<<"Element not found in the array. \n";

   
return 0;
}
//----------------------------------------------------------------------------------------------------------------------------

#include<iostream>
void sortarray(int arr[],int size);
int main(){
    int arr[]={10,9,2,1,5,4,6,7,9,8,3,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sortarray(arr,size);
    for (int element:arr){
        std::cout<<element<<" ";

    }
return 0;
}
void sortarray(int arr[],int size){
    int temp;
    for(int i=0;i< size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;

            }
        }
    }

        }
    //----------------------------------------------------------------------------------------------------------------------------
   
   #include<iostream>
   int main(){
    std::string food[100];
    fill(food,food+100,"BURGERR!!");
    for(std::string foods:food){
        std::cout<<foods<<" ";
    }
    }
    //--------------------------------------------------------------------------------------------------------------------
   #include<iostream>
   #include<string>
   int main(){
    std::string foods[5];
    int size=sizeof(foods)/sizeof(foods[0]);

    for(int i=0;i<size;i++){
        std::cout<<"Enter the food name "<<i+1<<":";
        std::getline(std::cin,foods[i]);
    }
    std::cout<<"you like the following foods:"<<std::endl;
    for(std::string food:foods){
    std::cout<<food<<"\n";
    }
   }
//----------------------------------------------------------------------------------------------------------------------
#include<iostream>

int main(){
    int nums[2][2];
    int size=sizeof(nums)/sizeof(nums[0]);;
    for(int i=0;i<size;i++){
                 std::cout<<"Enter 2 element to add in the array:\n";
                 for(int j=0;j<size;j++){
                    std::cin>>nums[i][j];
                 }

    }
    std::cout<<"the elements in the array are:\n";
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            std::cout<<nums[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}

//---------------------------------------------------------------------------------------------------------------------------

//(for exam)
#include<iostream>

int main(){
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int r;
    int c1;
    std::cout<<"Enter the number of rows:";
    std::cin>>r;
    std::cout<<"Enter the number of columns:";
    std::cin>>c1;
    std::cout<<"Enter the first element of the matrix:"<<std::endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            std::cin>>a[i][j];
        }
    }
    std::cout<<"Enter the second element of the matrix:"<<std::endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            std::cin>>b[i][j];
        }
    }
    std::cout<<"THE SUM OF THE TWO ELEMENTS ARE:"<<std::endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            c[i][j]=a[i][j]+b[i][j];
            std::cout<<c[i][j]<<" ";
        }
        std::cout<<"\n";
    }
return 0;
}

*/

