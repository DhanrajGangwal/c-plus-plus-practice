#include<iostream>

using namespace std;
int factorial(int a){
    int fact=1;
    for (int i = 1; i <= a; i++)
    {
        fact *=i;
    }
    cout<<fact<<endl;
}
int main(){
    factorial(5);
    return 0;
}