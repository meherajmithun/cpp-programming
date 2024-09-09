#include<bits/stdc++.h>
using namespace std;
//a normal pair with string and integer data type
/*int main(){
    pair<string , int>p;
    p.first = "meheraj";
    p.second = 10;
    cout<<p.first<<" " << p.second<<endl;
}
*/
// A pair with int and vector of integer data type

int main(){
    /*pair<int,int>p1,p2;

    p1 = {2, 3};
    p2 = {2 ,4};
    if(p1 < p2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    pair<int,int>p;
    p = min(p1,p2);
    cout<<p.first<<" "<<p.second<<endl;;

    vector<pair<int,int>>v;
    v.push_back({1,2});
    v.push_back({1,32});
    v.push_back({23,2});
    v.push_back({123,232});
    v.push_back({123,223});
    v.push_back({12,23});
    sort(v.begin() , v.end());
    for(auto u : v) cout<<u.first<<" "<<u.second<<endl;

    pair<int,int>p[]={{4,2},{3,452},{323,234},{234,342}};
    sort(p , p + 4);
    for(auto u : p) cout<<u.first<<" "<<u.second<<endl;
	*/

	/*vector<pair<string,int>>v1;
	v1.push_back({"Meheraj" , 19});
	v1.push_back({"Mithun" , 32});
	v1.push_back({"Meheraj" , 19});
	sort(v1.begin(),v1.end());
	//for(auto u : v1) cout<<u.first<<" "<<u.second<<endl;
	int x = unique(v1.begin() , v1.end()) - v1.begin();
	for(int i = 0 ; i < x; i++) cout<<v1[i].first<<" "<<v1[i].second<<endl;
	*/
	pair<int,int>arr[3];
	for(int i = 0; i < 3; i++) cin >> arr[i].first>>arr[i].second;
	for(int i = 0; i < 3; i++) cout<< arr[i].first<<" "<<arr[i].second<<endl;
}
