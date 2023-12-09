#include<iostream>
using namespace std;

int main()
{
 
 system("cls");
 
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b&&a>c){
        cout<<a<<" is max number";
    }else if(b>a&&b>c){
        cout<<b<<" is max number";
    }else if(c>a&&c>b){
        cout<<c<<" is max number";
    }

 return 0;

}