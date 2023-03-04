        #include<bits/stdc++.h>
using namespace std;
double Gsum(int k){
    if(k==0){   
        return 1;
    }
    // recursive
    double smallAns=Gsum(k-1);

    //Calculation
    return smallAns+ 1.0/pow(2,k);
}
int main(){
    int n;
    cout<<"Digits"<<endl;
    cin>>n;
    cout<<"The Geometric Sum of digit is: "<<Gsum(n);
    
    return 0;
}