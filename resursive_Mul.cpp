#include<iostream>
using namespace std;
int multiply(int n, int m){
    if(n==0){
        return 0;
    }
    int smallAns=multiply(m, n-1);
    return smallAns+m;
}
int main(){
     int n,m;
    cout<<"Digits"<<endl;
    cin>>n>>m;
    cout<<"The Multiplication of the digit is: "<<multiply(n,m);
    
    return 0;
}