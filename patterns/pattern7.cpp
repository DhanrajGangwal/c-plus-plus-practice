#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of rows: ";
    cin>>n;
      for (int i = 1; i <= n; i++)
      {
        for (int  s = n - 1; s >= i; --s)           
        {
            cout<<" ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout<<"*";
        }
        cout<<"\n";
      }
      
    return 0;
}