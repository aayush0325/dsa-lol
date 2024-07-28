#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>
#define mll map<ll,ll>
#define pll pair<ll,ll>
using namespace std;

//lowest index such that a[lb]>=target = lower bound
//lowest index such that a[ub]>>target = upper bound

ll ub(vll &a, ll target, ll n){
	ll answer = n;
	ll l = 0; ll r = n;
	while(l<=r){
		ll mid = l+(r-l)/2;
		if(a[mid]>target){
			r = mid-1;
			answer = min(mid,answer);
		}else l = mid+1;
	}

	return answer;
}


int main(){
	ll n; cin >> n;
	vll a(n); sort(a.begin(),a.end());
	for(ll i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	ll target; cin >> target;
	cout << ub(a,target,n) << endl;
	cout << upper_bound(a.begin(),a.end(),target)-a.begin();
}