#include<iostream>
#include<memory>
using namespace std;

int main(){
	shared_ptr<int>ptr = make_shared<int>(40);
	delete ptr;
	ptr = make_shared<int>(20);
	return 0;
}
