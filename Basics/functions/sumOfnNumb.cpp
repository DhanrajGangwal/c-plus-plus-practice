#include<iostream>

using namespace std;
int sumOfn(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
    int sum = 0;
    for (int i = 1; i <= a ; i++)
    {
        sum+=i;
    }
    cout<<"the sum of first "<<a<<" number is "<<sum<<endl;
    // return sum;
}
int main(){
    sumOfn();
    return 0;
}