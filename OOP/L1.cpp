#include<bits/stdc++.h>
using namespace std;

class student{
	public:
		string name;
		long long id;
		string dept;

};

int main(){
	student mithun;
	mithun.name = "Meheraj";
	mithun.id = 20245103430;
	mithun.dept = "CSE";
	cout<<"Student's name is : "<<mithun.name<<endl;
	cout<<"Student's id is : "<<mithun.id<<endl;
	cout<<"Student's department is : "<<mithun.dept<<endl;
}
