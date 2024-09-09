#include<bits/stdc++.h>
using namespace std;

int main(){
/*
	priority_queue<int>q;
	for(int i = 0; i < 5; i++){
		int a; cin >> a;
		q.push( a );
	}
	/*
	cout<<q.top()<<endl;
	q.pop();
	cout<<q.top()<<endl;

	while( !q.empty()){
		cout<<q.top()<<endl;
		q.pop();
	}

		priority_queue<string>q;
	for(int i = 0; i < 5; i++){
		string a; cin >> a;
		q.push( a );
	}
	/*
	cout<<q.top()<<endl;
	q.pop();
	cout<<q.top()<<endl;

	while( !q.empty()){
		cout<<q.top()<<endl;
		q.pop();
	}
	*/
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
	for(int i = 0; i < 5; i++){
		int a,b; cin >> a >> b;
		q.push( {a, b});
	}
	/*
	cout<<q.top()<<endl;
	q.pop();
	cout<<q.top()<<endl;
	*/
	while( !q.empty()){
		cout<<q.top().first<<" "<<q.top().second<<endl;
		q.pop();
	}
}
