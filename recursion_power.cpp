#include <iostream>
using namespace std;
int power(int x, int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    // recursive
    int smallOutput= power(x, n-1);
    // calculation5
    return x * smallOutput;
}
int main()
{
    // int x,n;
    // cout<<"Integer:"<<endl;
    // cin>>x>> n;
    
    cout<<"The ouput of the given number and its power: "<<power(5,3);
    return 0;
}