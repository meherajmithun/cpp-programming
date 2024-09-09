#include<bits/stdc++.h>
using namespace std;
/*
int main(){
	int n,i,a;
	cin>>n;
	vector<int>v;
	for(i = 0; i < n; i++){
		cin>>a;
		v.push_back(a);
	}
	for(auto u : v) cout<<u<<endl;
}*/
int gcd(int a,int b){
	if(b == 0) return a;
	return(a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
}
