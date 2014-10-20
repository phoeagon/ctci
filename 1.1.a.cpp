#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int work(string &s){
	sort(s.begin(), s.end());
	auto it = unique(s.begin(), s.end());
	return it==s.end();
}
int main(){
	string s;
	cin >> s;
	while (cin){
		if (work(s))
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		cin >> s;
	}
}

