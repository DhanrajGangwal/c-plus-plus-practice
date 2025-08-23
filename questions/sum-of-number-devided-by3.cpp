#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter the number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%3==0)
        {
            cout<<setw(4)<<i;
            sum = n+i;
        }
        
    }
    cout<<endl<<sum;
    return 0;
}