#include<bits/stdc++.h>
using namespace std;
void strings(string a,string b);
int main(){
    string a,b;
    cin>>a>>b;
    strings(a,b);
}
void strings(string a , string b){
    
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    
    if(a>b){
        cout<<"1"<<endl;
    }
    else if(a<b){
        cout<<"-1"<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
}