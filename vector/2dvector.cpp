#include<bits/stdc++.h>
using namespace std;

int main(){
    vector< vector<int> >v;
    vector<int>a1 = {5 , 7 , 9 , 8};
    vector<int>a2 = {1 , 4 , 5 , 9};

    v.push_back( a1 );
    v.push_back( a2 );
    for(auto u : v){
        for(auto g : u) cout<<g<<" ";
        cout<<endl;
    }
}