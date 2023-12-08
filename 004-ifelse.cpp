#include<iostream>
using namespace std;
int main()
{   
    int num;
    system("cls");
    cout<<"Enter the number : ";
    cin>>num;
     if(num>=0){

     if(num%2==0)
     {
        cout<<"Number is +ive even";
     }
     else{
        cout<<"Number is +ive odd";
     }
     }else{
         if(num%2==0)
     {
        cout<<"Number is -ive even";
     }
     else{
        cout<<"Number is -ive odd";
     }
     }
    return 0;
}