//using of map

#include<bits/stdc++.h>
using namespace std;

int main(){

//Using map with int index and int varrible.
//Here the first int represent the index of mp
	map<int , int > v;
	v[1] = 21;
	v[2] = 32;
	v[3] = 31;

	for(int i = 1; i < 4; i++) cout << v[i] << " ";
	cout << endl;

// Using map with string index and int varrible.
	map<string , int > id;
	id["Mithun"] = 430;
	id["Nayem"] = 439;
	id["Sojib"] = 434;

	cout << id["Sojib"] << " " << id["Nayem"]<< " " << id["Mithun"] <<endl;

//Using map with string index and string varrible;

	map<string , string > gender;

	gender["mithun"] = "male";
	gender["toma"] = "female";
	gender["siam"] = "gay";

	cout << gender["toma"] <<" " << gender["mithun"] << " " << gender["siam"]<<endl;

//Using map with string and int varrible
	map<int , string>d;
	d[ 1 ] = "Meheraj";
	d[ 4 ] = "Hossain";
	d[ 14 ] = "Mithun";
	d[ 12 ] = "Naimul";
	d[ 11 ] = "Karim";

	cout << d[1] <<" "<<d[4] <<" "<<d[14]<<endl<<d[12]<<" "<<d[11]<<endl;


//long long in map;
	vector<long long> s = {1,3241234321321,2342131431234,2423424312,3241234321321};
	map<long long, int>cnt;
	for(int i = 0; i < s.size(); i++){
		cnt[s[i]]++;
	}
	cout << cnt[3241234321321] << endl;

//pair
	for(auto u : cnt) cout << u.first << " " << u.second << endl;
}
