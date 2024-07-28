#include <bits/stdc++.h>
#define ll long long
using namespace std;

int bs(vector<int>&nums, int target, int l, int r){
	if(l>r) return -1;
	int mid = (l+r)/2;
	if(nums[mid]==target) return mid;
	if(nums[mid]<target) return bs(nums,target,mid+1,r);
	else return bs(nums,target,l,mid-1);
}

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int target; cin >> target;
	sort(a.begin(),a.end());
	cout << " the index is: " << bs(a,target,0,n)+1 << endl;
}	
