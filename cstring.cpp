#include<iostream>
using namespace std;

void test(char* msg,int len){
	string tmp(msg,len);
	cout<<"char*: "<<msg<<endl;
	cout<<"string: "<<tmp<<endl;
	return;
}

int main(){
	char* msg = "abc";
	test(msg,5);
	return 0;
}
