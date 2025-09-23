#include<iostream>

using namespace std;
int call(){
    cout<<"hello!!"<<endl;
    call();
}
int main(){
    call();
    return 0;
}