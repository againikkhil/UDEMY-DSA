#include<iostream>
using namespace std;
int main(){
    int a=10;
    int&r=a; // refernce

    int b=30;
    r=b; //a=r=b

    cout<<a<<endl<<r<<endl;

    
    return 0;
}