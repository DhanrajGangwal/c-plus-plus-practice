#include<iostream>

using namespace std;
int main(){
    int n = 2;
    int* m = &n;

    // & ----> address of operator
    cout<<"address of n is "<<&n<<endl;

    // * ----> deference operator  / * operator 
    cout<<"address of m is "<<m<<endl;

    // *m print the value 
    cout<<*m<<endl;
    return 0;
}