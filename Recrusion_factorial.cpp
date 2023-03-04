#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallAns = fact(n - 1);
    int ans = n * smallAns;
    return ans;
}
int main()
{
    int n;
    cout<<"Integer:"<<endl;
    cin>>n;
    
    cout<<"The factorial of the given number is: "<<fact(n);
    return 0;
}