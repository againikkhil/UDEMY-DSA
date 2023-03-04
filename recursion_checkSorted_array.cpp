#include <bits/stdc++.h>
using namespace std;
bool isSorted(int a[], int n)
{
    if (n == 0 || n == 1) // size is neither Zero nor one
    {
        return true;
    }
    if (a[0] > a[1]) // next element must be greater than previos one
    {
        return false;
    }
    bool issmallerSorted = isSorted(a + 1, n - 1);
    // if (issmallerSorted)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return issmallerSorted;
}
int main()
{
    int a[] = {1, 2, 3, 5, 4};
    if (isSorted(a, 5))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
    return 0;
}