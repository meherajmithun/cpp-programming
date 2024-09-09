//ForEach loop

#include<bits/stdc++.h>
using namespace std;
/*
int main(){
	int a;
	vector<int>v;
	for(int i = 0; i < 5; i++){
		cin>>a;
		v.push_back(a);
	}
	for(auto u : v) cout<<u<<endl;
}
*/


//While says in the statement that continously take input if you don't get 0.
/*
int main(){
	int n;
	vector<int>v;
	while(1){
		cin>>n;
		if(n == 0) break;
		v.push_back( n );
	}
	for( auto u : v) cout<<u<<" ";
	cout<<endl;
}
*/
int main(){
	int n,i,a;
	cin>>n;
	vector<int>v;
	for(i =0; i < n; i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin() , v.end() , greater<int>());
	for(auto u : v) cout<<u<<" ";
	cout<<endl;
}
