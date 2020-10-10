#include<iostream>
using namespace std;

void mergeSort(int* arr,int left,int right){
	if(left == right){
		return;
	}
	int mid = left + (right - left)/2;
	mergeSort(arr,left,mid);
	mergeSort(arr,mid+1,right);
	int i,j;
	for(i = left,j = mid + 1;i <= mid;i++)
		if(arr[i] > arr[j]){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	for(int i = left,j = mid + 1;i <= mid;i++){
		if(arr[i])		
	}

}

int main(){
	
}
