#include<iostream>

using namespace std;
int main(){
    int one,two,temp;
    cout<<"enter the first num: ";
    cin>>one;
    cout<<"enter the second num: ";
    cin>>two;
    // temp = a;
    // a = b;
    // b = temp;

    temp = one ;
    one = two;
    two = temp;
    cout<<one<<endl<<two<<endl;
    return 0;
}