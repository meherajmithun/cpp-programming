/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,n,count=0;
    cin >> x >> n;
    vector<string>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    map<string , int > cnt;
    for(auto u : v) cnt[u]++;
    //for(auto u : cnt) cout<<u.second<<endl;
    for(auto u : cnt){
        if(u.second == x) count++;
    }
    cout<<count<<endl;
}
 */
//Another way to the code

#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n;
	cin >> n;
	map<string , int > cnt;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		cnt[s]++;
	}
	int ans = 0;
	for(auto u : cnt){
		if(u.second == 2) ans++;
	}
	return ans;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cout<<solve()<<endl;
	}
}
