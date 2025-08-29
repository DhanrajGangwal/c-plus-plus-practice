#include<iostream>
9
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of rows: ";
    cin>>a;
    // cout<<"enter the value of b: ";
    // cin>>b;
    for (int i = 1; i <= a; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        cout<<"*";
       }
       cout<<"\n";
    }
    return 0;
}