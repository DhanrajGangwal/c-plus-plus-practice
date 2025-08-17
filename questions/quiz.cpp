#include<iostream>

using namespace std;
int main(){
    int ans1,ans2,ans3,ans4;
    cout<<"Q1) What is the name of the world's longest river?"<<endl<<"1) Missouri River\n2) Nile\n3) Amazon River\n4) Yangtze River"<<endl;
    cout<<"Q2) How many bones are in the human body?\n1) 92\n2) 150\n3) 206\n4) 10 \n";
    cout<<"Answer 1: ";
    cin>>ans1;
    cout<<"Answer 2: ";
    cin>>ans2;
    if (ans1 == 2)
    {
        cout<<"Answer 1 is true"<<endl;
    }
    else{
        cout<<"Answer 1 wrong try again!!"<<endl;
    }
    
    if (ans2 == 3)
    {
        cout<<"Answer 2 is true"<<endl;
    }
    else{
        cout<<"Answer 2 is wrong try again!!"<<endl;
    }
    
    return 0;
}