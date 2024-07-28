#include <bits/stdc++.h>
using namespace std;
int main(){
    //declaring an array
	vector<int> a = {13,46,24,52,20,9};

    //the key idea is to SELECT minimums from subarrays and bring it to the begninning of that subarray
	for(int i = 0 ; i < a.size() ; i++){

        //declaring a min
		int min = a[i]; int index = i;

        //declaring subarray
		for(int j = i ; j < a.size() ; j++){
			if(a[j]<min){
				min = a[j];
				index = j;
			} //finding min, storing its value and index

			int temp = a[i];
			a[i] = a[index];        //swapping
			a[index] = temp;

			for(auto it : a){
				cout << it << " ";      //printing each iteration to see steps
			}
            cout << endl;
		}
	}
	return 0;
}