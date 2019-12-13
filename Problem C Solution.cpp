#include<bits/stdc++.h>
#define ll long long int
#define ff first
#define ss second
#define pq priority_queu
#define MOD 1000000007
using namespace std;

int main(){
	ll n,k;
	cin >> n >> k;
	string s;
	// map to store the keyboard keys that are available
	map<char,ll> mp;
	cin >> s;
	char t;
	for(int i=0;i<k;i++){
		cin >> t;
		mp[t]++; 
	}
	ll count=0,pro=0;
	/* for the entire string as soon as a key is 
	encountered that is not available, calculate the no. of substrings
	and all the possible outcomes*/
	for(int i=0;i<s.length();i++){
		if(mp[s[i]]==1){
			count++;
		}
		if(mp[s[i]]==0){
			pro+= ((count)*(count+1))/2;
			//cout << pro << " " << s[i] << endl;
			count=0;
		}
	}
	pro+= ((count)*(count+1))/2;
	// output the number
	cout << pro << endl;
	return 0;
}
