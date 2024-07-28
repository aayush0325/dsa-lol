#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
	vector<int> temp;
	int left = low; //setting up 2 pointers
	int right = mid+1;

	while(left<=mid && right <= high){
		
		if(arr[left] <= arr[right]){
			temp.push_back(arr[left]); //comparing and adding values to temp
			left++;
		}else{
			temp.push_back(arr[right]);
			right++;
		}
	}

	while(left<=mid){
		temp.push_back(arr[left]); //adding left over elements to temp
		left++;
	}

	while(right<=high){
		temp.push_back(arr[right]); //adding leftover elements to temp
		right++;
	}

	for(int i = low ; i <= high ; i++){
		arr[i] = temp[i-low]; // updating elements in actual array
	}
}

void mergeSort(vector<int> &arr, int low, int high){
	if(low==high){
		return; //returns the funtion call to parent function
	}else{
		int mid = (low+high)/2;
		mergeSort(arr,low,mid);  //sort thr left half
		mergeSort(arr,mid+1,high); //sort the right half
		merge(arr,low,mid,high); //merge the 2 sorted parts in the sorted manner

	}
}
int main(){

	vector<int> a = {5,4,3,2,1};
	mergeSort(a,0,4);

	for(auto it : a){
		cout << it << " "; //printing the sorted array
	}

	return 0;
}

//use arrays instead of in built pushback function for better time complexity