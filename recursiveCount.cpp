#include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 0;
    }
    // recursive
    int smallAns=count(n/10);
    return smallAns+1;
}
int main(){
     int n;
    cout<<"Number"<<endl;
    cin>>n;
    
    cout<<"The total number count is: "<<count(n);
    
    return 0;
}