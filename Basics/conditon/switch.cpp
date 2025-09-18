#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"enter the age";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"your age is now 18";
        break;
    
    case 15:
        cout<<"your age is now 15";
        break;
    
    case 10:
        cout<<"your age is now 10";
        break;
    
    default:
    cout<<"no special age";
        break;
    }
    return 0;
}