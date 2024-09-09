//Function of pair
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int>p;

    p = make_pair(2,3);
    p.first++;
    p.second += 3;
    cout<<p.first<< " "<<p.second<<endl;
    // Easy way to access of value in pair
    p = {2,3};
    cout<<p.first << " "<<p.second<<endl;
}

//access string and vector value in pair with an easy way
/*int main(){
    pair<string , vector<int>>p;

    p = {"meheraaj" , {1 ,2 ,3 ,4}};
    cout<<p.first<<endl;
    for(auto u : p.second ) cout<<u<<" ";
    cout<<endl;
    cout<<p.first.size()<<" "<<p.second.size()<<endl;
    pair<int,int>p1,p2;
    p1= {2,3};
    p2= {1,2};
    pair<int,int> ps = max(p1,p2);
    cout<<ps.first<< " "<<ps.second<<endl;

    vector<pair<int,int>>v;
    v.push_back({1,2});
    v.push_back({3,2});
    v.push_back({4,2});
    v.push_back({1,4});
    v.push_back({3,3});
    v.push_back({4,4});
    sort(v.rbegin() , v.rend());

    for(auto u : v) cout<<u.first<<" "<<u.second <<endl;

    sort(v.begin() , v.end());
    for(auto u : v) cout<<u.first<<" "<<u.second <<endl;
/*
    pair<int,int>arr[5];
    for(int i = 0; i < 5; i++) cin >>arr[i].first >>arr[i].second;
    for(int i = 0; i < 5; i++) cout <<arr[i].first <<" "<<arr[i].second<<endl;
    cout<<endl;
*/
    /*
    vector < pair < string , int > >v2;
    v2.push_back({ "Meheraj" , 43});
    v2.push_back({ "Mithun" , 23});
    v2.push_back({ "Hossain" , 65});
    v2.push_back({ "Meheraj" , 43});
    v2.push_back({ "Mithun" , 23});
    v2.push_back({ "Hossain" , 65});

    sort( v2.begin() , v2.end());
    //for(auto u : v2)cout <<u.first <<" " <<u.second << endl;

    //Now we see how unique function works in vector of pair.

    int sz = unique( v2.begin() , v2.end()) - v2.begin();
    for(int i = 0; i < sz; i++) cout << v2[i].first << " " <<v2[i].second << endl;
}
*/
