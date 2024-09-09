#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
int a[mx];

int main(){
	priority_queue<int>p;
	int n ; cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0 ; i < n; i++){
		p.push(a[i]);
		if(p.size() >= 3){
			int a = p.top(); p.pop();
			int b = p.top(); p.pop();
			int c = p.top(); p.pop();
			cout<<a*b*c<<endl;
			p.push(a);
			p.push(b);
			p.push(c);
		}
		else {
			cout<<-1<<endl;
		}
	}
	while(!p.empty()){
		cout<<p.top()<<" ";
		p.pop();
	}
}
