#include<iostream>

using namespace std;
int Swap(int* a, int* b){
    cout<<"before swap "<<*a<<" "<<*b<<endl;
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"after swap "<<*a<<" "<<*b<<endl;
}
int main(){
    int x = 7,y=5;
    Swap(&x,&y);
    
    //its change in actual value 
    cout<<x<<" "<<y;
    return 0;
}