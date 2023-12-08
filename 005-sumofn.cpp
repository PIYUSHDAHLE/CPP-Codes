#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    sum+=i;
    }
    cout<<"Sum of First N Natural number : "<<sum;
    return 0;
}