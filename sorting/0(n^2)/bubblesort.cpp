#include <bits/stdc++.h>
using namespace std;
int main() {
    //declaring an array
    vector<int> a = {13,46,24,52,20,9};

    //basic idea is to get the MAXIMUM of each subarray to the extreme end of the subarray by repeated swaps
    for(int i = a.size()-1 ; i>=0 ; i++){
        //selecting subarray
        for(int j = 0 ; j < i ; j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];      //swaps
                a[j+1] = temp;
            }
        }

        for(auto it : a){
            cout << it << " ";      //printing each iteration to see steps
        }
        cout << endl;
    }
    return 0;
}