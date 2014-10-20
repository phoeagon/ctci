#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int work(const string &s){
	int ct[300];
	memset(ct,0,sizeof(ct));
	for (auto it=s.begin(); it!=s.end(); ++it){
		if ( ct[*it] > 0 )
			return 0;
		ct[*it] += 1;
	}
	return 1;
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

