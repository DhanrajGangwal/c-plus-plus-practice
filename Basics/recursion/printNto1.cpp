#include <iostream>

using namespace std;
void call(int n)
{
    if (n == 1)
    return;
    
    cout << n << endl;
    call(n - 1);
}
int main()
{
    int n;
    cin >> n;
    call(5);
    return 0;
}