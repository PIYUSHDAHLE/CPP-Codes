#include<iostream>
using namespace std;
 int main(){
    system("cls");
    int a,b;
    char op;
    cout<<"Enter 2 numbers : ";
    cin>>a>>b;
    cout<<"Enter the operator (+,-,/,*) :";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b;
        break;
    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b;
        break;
    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b;
        break;
    case '/':
        cout<<a<<" / "<<b<<" = "<<a/b;
        break;
    
    default:
          cout<<"invalid operator ";
        break;
    }
 }