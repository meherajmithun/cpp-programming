/*This code is learning from CPS academy STL tutorial level-1
*/
//Learn vector and compare it with an array.
#include<bits/stdc++.h>
using namespace std;

int main(){
	//declare a vector with 'v' varrible name.and its data type is int.
	vector<int>v;
	//using push_back for taking input.
	v.push_back( 0 );
	v.push_back( 2 );
	v.push_back( 4 );
	v.push_back( 6 );
	v.push_back( 8 );

	//vector is also index dependent like an array.
	for(int i = 0 ; i < v.size() ; i++) cout<<v[i]<<endl;

	//taking input for a vector from user.
	int n,a;
	vector<int>t;
	cout<<"Enter a size = ";
	cin>>n;
	for(int i =0 ; i < n ; i++){
		cin>>a;
		t.push_back(a);
	}
	for(int i = 0 ; i < n ; i++) cout<<t[i]<< " ";
}
