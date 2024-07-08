#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string str = s.substr(16 , 7);
	cout<<str<<endl;
}
