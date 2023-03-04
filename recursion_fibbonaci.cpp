#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int smallOutput1= fibo(n - 1);
    int smallOutput2= fibo(n - 2);
    return smallOutput1+smallOutput2;
}
int main()
{
    int n;
    cout<<"Integer:"<<endl;
    cin>>n;
    
    cout<<"The next fibbonaci number is: "<<fibo(n);
    return 0;
}