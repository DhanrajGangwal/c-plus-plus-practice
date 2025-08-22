#include<iostream>

using namespace std;
int main(){
    char ch;
    cout<<"enter the character: ";
    cin>>ch;
    if (ch >='a' && 'z')
    {
        cout<<"lowercase"<<endl;
    }
    else{
        cout<<"upercase"<<endl;
    }
    
    return 0;
}