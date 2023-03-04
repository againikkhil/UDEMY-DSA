#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class book{
    char bname[20], aname[20];
    float price;

    public:
    void readbook(){
        cout<<"Enter book name"<<endl;
        gets(bname);
        cout<<"Enter Author name"<<endl;
        gets(aname);
        cout<<"Enter price"<<endl;
    }
    void showbook(){
        cout<<bname<<"\t"<<aname<<"\t"<<price<<endl;
    }
};
int main(){
    book *b;
    int n,i;
    cout<<"Enter No of order"<<endl;
    cin>>n;
     b= new book[n];
     for (i=0;i<n;i++)
     b[i].readbook();
     cout<<"Bookname \t Author \t Price "<<endl;
     for(i=0;i<n;i++)
     b[i].showbook();
     delete b;
     getch();

};