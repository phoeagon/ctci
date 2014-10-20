#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

char buffer[1000];
char buf2[1000];

int main(){
	while (1){
		fgets(buffer, 1000, stdin);
		int len = strlen(buffer);
		if ( len < 2 )
			break;
		buffer[len--] = 0;
		int i = 0;
		int cnt = 1;
		auto ptr = buf2;
		for (int j = 1; j <=len; ++j)
			if ( buffer[j] == buffer[j-1] )
				++cnt;
			else {
				i = sprintf( ptr += i, "%c%d", buffer[j-1], cnt); 
				cnt = 1;
			}
		if (strlen(buf2) < len)
			printf("%s\n", buf2);
		else printf("%s", buffer);
	}
}
