#include <iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
    for (int count = 1; count <= n - 1; count++)
    {
        int flag = 0;
        for (int j = 0; j <= n - 2; j++)
        {

            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = 1; // if 1 comes then loop run till it becomes sorted
            }
        }
        if (flag == 0);  // This will happeen array is already sorted
        break; // then loop will break therefore time com will me O(n);
    }
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
    bubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}