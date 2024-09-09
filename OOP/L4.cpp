
   // Constructor

#include<bits/stdc++.h>
using namespace std;

class student{
	public:
		string name;
		long long id;
		string dept;
	student(string s , int n , string s2){
		name = s;
		id = n;
		dept = s2;
	}
	void display(){
		cout<<"Student's name is : "<<name<<endl;
		cout<<"Student's id is : "<<id<<endl;
		cout<<"Student's department is : "<<dept<<endl;
	}
	void dis(){
		cout<<"Student's name is : "<<name<<endl;
		cout<<"Student's id is : "<<id<<endl;
		cout<<"Student's department is : "<<dept<<endl;
	}
};

int main(){
	student mithun("Meheraj",430,"CSE");
	mithun.display();
	student naim("Naimul",439,"CSE");

	naim.dis();
}

//Here is another
/*
   // Constructor

#include<bits/stdc++.h>
using namespace std;

class student{
	public:
		string name;
		long long id;
		string dept;
	student(){
	}
	student(string s, int n, string s2){
		name = s;
		id = n;
		dept = s2;
	}
	void display(){
		cout<<"Student's name is : "<<name<<endl;
		cout<<"Student's id is : "<<id<<endl;
		cout<<"Student's department is : "<<dept<<endl;
	}
	void dis(){
		cout<<"Student's name is : "<<name<<endl;
		cout<<"Student's id is : "<<id<<endl;
		cout<<"Student's department is : "<<dept<<endl;
	}
};

int main(){
	student mithun;
	mithun.display();
	student naim("Naimul",439,"CSE");

	naim.dis();
}
*/
