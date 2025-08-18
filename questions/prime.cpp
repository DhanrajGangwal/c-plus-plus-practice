#include<iostream>

using namespace std;
int main(){
    int n;
    bool isprime = true;
    cout<<"enter the number ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)     
        {
            isprime = false;
            break;
        }
        
    }

    if (isprime)
    {
        cout<<n<<" is prime number"<<endl;
    }
    else{
        cout<<n<<" is not prime number"<<endl;
    }
    
    
    return 0;
}