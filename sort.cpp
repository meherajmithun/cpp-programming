#include<bits/stdc++.h>

using namespace std;
int main(){
    string a,b;
    cout<<"Enter string : ";
    cin>>a>>b;

    sort(a.begin() , a.end());
    sort(b.begin() , b.end());

    cout<<a<<endl<<b<<endl;

    (a == b) ? cout<<"Anagram"<<endl : cout<<"Not Anagram"<<endl;
}