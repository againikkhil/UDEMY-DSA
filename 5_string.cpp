#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abc";
    cout << s << endl;

    string *sp = new string;
    *sp = "mno";
    cout << sp << endl;  // ye address bayatega qki usme pointer assign nhi hai
    cout << *sp << endl; // ye actual output dega =mno

    vector<string> v;
    v.push_back(s);
    v.push_back("Hello"); // isko print karne ke liye iterate karna hoga

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
        sort(v[i].begin(), v[i].end());
        cout << v[i] << endl;
    }
    string s2;
    s2 = "def";
    cout << s2 << endl;
    string s3;
    // getline(cin, s3);
    // cout<<s3;
    s3 = "abcabc";
    cout << s3 << endl;
    s3[0]='d';
    cout<<s3<<endl;

    string s4 =s3 + s2;
    s4 += s3 + s2 + " Hello coding";
    cout << s4 << endl;
    cout<<s4.size()<<endl;
    cout<<s4.length()<<endl;

    cout<<s4.substr(3)<<endl; // ye phela 3 letter chor ke uske baad wala ko o/p dega i.e.,[ abcdefdbcabcdef Hello coding ]
    string s5= s4.substr(3,5); // ye phela 3 letter chor ke uske baad aage ka 5 letter tak print kar dega [abcde]
    cout<<s5<<endl;
    cout<<s4.find("abc")<<endl; // batayega ki "abc" s4 me kis position pe hai
    
    // To function (Convert integer function into string)
    int a=123;
    string s6=to_string(a);
    cout<<s6<<endl;
    s6[1]='4'; // ye char ban jayega aur isko uske jaise change v kar sakte hai
    cout<<s6<<endl;
    // atoi fn takes string as input and return as integer
    a= atoi(s6.c_str());
    cout<<s6<<endl;
    s6.push_back('5'); // ye last me 5 push kar dega
    cout<<s6<<endl;
    
    return 0;
}