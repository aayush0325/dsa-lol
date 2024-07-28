#include <bits/stdc++.h>
using namespace std;


int f(vector<int> &arr, int low, int high){
	int pivot = arr[low];
	int i = low;
	int j = high;
	while(i<j){
		while(arr[i]<=pivot && i < high){
			i++;
		}

		while(arr[j]>pivot && j > low){
			j--;
		}

		if(i<j){
			swap(arr[i],arr[j]);
		}
	}

	swap(arr[low],arr[j]);

	return j;
}

void qs(vector<int> &arr, int low, int high){
	if(low<high){
		int pivot = arr[low];
		int pi = f(arr,low,high);
		qs(arr,low,pi-1);
		qs(arr,pi+1,high);
	}
	else{
		return;
	}

}
int main(){
	vector<int> a = {10,9,8,7,6,5,4,3,2,1};
	qs(a,0,9);
	for(auto it : a){
		cout << it << " ";
	}
	return 0;
}