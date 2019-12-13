#include<bits/stdc++.h>
#define ll long long int
#define pq priority_queue
#define ff first
#define ss second
#define MOD 1000000007
using namespace std;

int main(){
	ll t;
	cin >> t;
	while(t--){
		vector<ll> v(3,0);
		// input the x-coordinates
		for(int i=0;i<3;i++){
			cin >> v[i];
		}
		// sort according to position
		sort(v.begin(),v.end());
		/*if first and second coordinates are equal and not the third 
		then increment the first and second by one so as to reduce the total modulo distance */
		if(v[0]==v[1] && v[1]!=v[2]){
			v[0]+=1;
			v[1]+=1;
		}
		else if(v[1]==v[2] && v[1]!=v[0]){
			v[1]-=1;
			v[2]-=1;
		}
		/*the minimum distance shall be achieved increasing the first distance by 1
		and decreasing the third by 1*/
		if(v[0]+1<=v[1]){
			v[0]=v[0]+1;
		}
		if(v[2]-1>=v[1]){
			v[2]=v[2]-1;
		}
		// calculate the minimum distance
		ll sum = abs(v[0]-v[1]) + abs(v[0]-v[2]) + abs(v[1]-v[2]);
		cout << sum << endl;
	}
	return 0;
}
