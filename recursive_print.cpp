#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    print(n - 1);    //.(n-1) .......2 1
    cout << n << endl;
}
void print2(int n)
{
    if (n == 0)
    {
        return;
    }
   cout << n << endl;
    print2(n - 1);    // 1 2 3 4 5 6....(n-1)
    return;
}
int main()
{
    int n;
    cout << "Print Numbers" << endl;
    cin >> n;
        cout << "The Numbers are" << endl;

    print(n);
    cout<<"The reversed number is "<<endl;
    print2(n);
    return 0;
}