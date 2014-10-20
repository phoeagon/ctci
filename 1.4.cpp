#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

char buffer[1000];

int work(){
	int len = 0; 
	for (auto p = buffer; *p; ++p, ++len);
	while (buffer[len]<=' ' && len)
		--len;
	++len;
	buffer[len] = 0;
	if ( !len )
		return 0;
	int space_cnt = 0 ;
	for (int i = 0 ; i < len; ++i)
		if (buffer[i] == ' ')
			++space_cnt;
	int dest = len + space_cnt * 2;
	buffer[dest] = 0; // set new end
	--dest;
	int src = len - 1;
	while (dest){
		if ( buffer[src]!=' ')
			buffer[dest--] = buffer[src--];
		else {
			buffer[dest--] = '0';
			buffer[dest--] = '2';
		        buffer[dest--] = '%';	
			--src;
		}
	}
	printf("%s\n", buffer);
	return 1;
}

int main(){
	while (1){
		fgets(buffer, 1000, stdin);
		if (!work())
			break;
	}
}
