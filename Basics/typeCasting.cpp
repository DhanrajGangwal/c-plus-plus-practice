#include<iostream>

using namespace std;
int main(){
    float a = 24.55f;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the changed value float to int: "<<int(a)<<endl;

    // ************************ Questions **************************
    int x = 45;
    float y = 45.67;
    cout<<"the expression is x + b: "<<x+y<<endl;
    cout<<"the expression is x+int(y): "<<x+int(y)<<endl;
    cout<<"the expression is x+(int)y: "<<x+(int)y<<endl;

    return 0;
}