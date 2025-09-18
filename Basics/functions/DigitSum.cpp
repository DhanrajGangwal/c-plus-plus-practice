#include <iostream>

using namespace std;
void SumOfDigit(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int rem = num % 10;
        num = num / 10;
        sum += rem;
    }
        cout<<"The value is "<<sum<<endl;
}
int main()
{
    SumOfDigit(123);
    return 0;
}