#include <iostream>
#include <future>
#include <thread>
using namespace std;

int thread_t(){
	future<int> result = async([](){
		this_thread::sleep_for(chrono::milliseconds(500));
		return 9;
	});
	cout<<"wait..."<<endl;
	cout<<"the future result :"<<result.get()<<endl;
	cout<<"wait again..."<<endl;
	cout<<"the future result :"<<result.valid()<<endl;
	try{
		result.wait();
	}catch(...){
		cout<<"get error..."<<endl;
	}
}

int main(){
	thread t1(thread_t);
	cout<<"1111"<<endl;
//	thread t2(thread_t);
	t1.join();
	cout<<"222"<<endl;
//	t2.join();
}
