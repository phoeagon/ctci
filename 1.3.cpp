#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main(){
	string a1, a2;
	cin >> a1 >> a2;
	while (cin){
		sort(a1.begin(), a1.end());
		sort(a2.begin(), a2.end());
		if ( a1 == a2 )
			cout<< "YES" << endl;
		else cout<< "NO"<<endl;
		cin >> a1 >> a2;
	}
}
