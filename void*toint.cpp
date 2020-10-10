#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	void* arr = (void*)600;
	cout<<arr<<endl;
	int a = static_cast<int>(*arr); 
	cout<<a<<endl;
	return 0;
}
