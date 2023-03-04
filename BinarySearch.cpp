#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        // int mid = (s + e) / 2;
         int mid = s+ (e-s)/ 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cout << "Enter Key" << endl;
    int key;
    cin >> key;
    sort(a, a + n);  // ye unsorted array ko sort karne ke liye
    int pos = BinarySearch(a, n, key);
    if (pos == -1)
    {
        cout << "Key is not found" << endl;
    }
    else
    {
        cout <<"The Key Found at Index " << pos << endl;
    }
    return 0;
}