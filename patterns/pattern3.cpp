#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the value of rows: ";
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; i <= j; j++)
        {
            cout<<"*";

        }
        cout<<"\n";
    }
    
    return 0;
}