#include<iostream>
#include <vector>
using namespace std;
// Using Array
int SaveAllPosUsingArray(int a[], int n, int x, int i,int out[], int j){
    if(i==n){
        return 0;
    }
    if(a[i]==x){
      out[j]=i;
     return 1+ SaveAllPosUsingArray(a,n,x,i+1,out,j+1);
    }
    return 0+ SaveAllPosUsingArray(a,n,x,i+1,out,j);
}
// using vector
void SaveAllindexPos(int a[], int n, int x, int i, vector <int> &ans){
    if(i==n){
        return;
    }
    if(a[i]==x){
       ans.push_back(i);
    }
    SaveAllindexPos(a,n,x,i+1,ans);
}
int main(){
    int a[]={4,5,6,5,6};
    vector <int> v;
    SaveAllindexPos(a,5,6,0,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int output[10];
    int count =SaveAllPosUsingArray(a,5,6,0,output,0);
    for(int i=0;i<count;i++){
        cout<<output[i]<<" ";
    }
    return 0;
}