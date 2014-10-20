#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char* reverse(char *str){
	if (!str)
		return str;
	int length = 0;
	for( auto i = str; *i; ++i , ++length);
	for ( int i = 0 ; i < length/2; ++i ){
		auto x = str[-i+length-1];
		str[-i+length-1] = str[i];
		str[i] = x;
	}
	return str;
}

int main(){
	char tmp[1000];
	while (scanf("%s", tmp)){
		printf("%s\n", reverse(tmp));
	}
}
