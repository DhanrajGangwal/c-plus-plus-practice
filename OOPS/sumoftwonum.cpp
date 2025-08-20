#include<iostream>
class add{
    public:
   float sum(float a,float b){
     return  a + b;

   }
};
using namespace std;
int main(){
    add num;
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    float ans = num.sum(a,b);
    cout<<"the result is: "<<ans<<endl;
    return 0;
}