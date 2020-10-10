#include<iostream>
#include<cstring>
#include<error.h>
using namespace std;

int main(){
	FILE* fp = popen("ls","r");
	if(!fp){
		perror("fail to execute ls command");
		exit(-1);
	}
	char buf[1024];
	memset(buf,0,sizeof(buf));
	while(buf,fgets(buf,sizeof(buf),fp)){
		printf("%s",buf);
	}
	return 0;
}
