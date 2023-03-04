#include<iostream>
using namespace std;
int main(){
    int A[10]={2,4,6,8,10};
    // int A[5]={2,4,6,8,10};
    // A[0]=12;
    // A[1]=15;
    // A[2]=25;
    // for(int i=0;i<10;i++)
    // For Each loop
    for(int x:A)
    {
        // cout<<A[i]<<endl;
        cout<<x<<endl;
    }
    // cout<<sizeof(A)<<endl;
    // cout<<A[1]<<endl;
    // printf("%d\n",A[2]);
    return 0;
}