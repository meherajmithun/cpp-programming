#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>>p;
    p.push_back({1,2});
    p.push_back({32,32});
    p.push_back({121,232});
    p.push_back({1321,2});
    p.push_back({132,243});
    p.push_back({132,2});
    sort(p.rbegin() , p.rend());
    for(auto u : p) cout <<u.first<<" "<<u.second<<endl;
    cout<<endl;
}