#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    bool isprime = true;
    cout << "Enter a limit: ";
    cin >> n;
    
    for (int num = 2; num <= n; num++)
    {
        isprime = true;

        for (int i = 2; i < num; i++)
        {
           if (num % i == 0)
           {
                isprime = false;
                break;
           }
           
        }
        if (isprime)
        {
            cout<<setw(5)<<num;
        }
        
        
    }
    
    return 0;
}

