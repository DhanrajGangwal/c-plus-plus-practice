#include<iostream>

using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter the value: ";
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        // cout<<i<<" ";
       fact = fact * i;
    }
    cout<<fact;
    return 0;
}