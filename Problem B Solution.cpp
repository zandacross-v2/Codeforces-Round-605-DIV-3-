#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main()
{
	ll t;
	cin >> t;
	while(t--){
		string s,f="";
		cin >> s;
		// variables to check the count of L , R , U, D
		ll count1=0,count2=0,count3=0,count4=0;
		// finding the count
		for(int i=0;i<s.length();i++){
			if(s[i]=='L'){
				count1++;
			}
			if(s[i]=='R'){
				count2++;
			}
			if(s[i]=='D'){
				count3++;
			}
			if(s[i]=='U'){
				count4++;
			}
		}
		// storing the minimum count for (L,R) and (D,U)
		ll countf1 = min(count1,count2);
		ll countf2 = min(count3,count4);
		// if string has only U and D
		if(countf1==0 && countf2!=0){
			cout << 2 << endl;
			cout << "UD" << endl;
			continue;
		}
		// if string has only L and R
		else if(countf2==0 && countf1!=0){
			cout << 2 << endl;
			cout << "LR" << endl;
			continue;
		}
		// adding L,R,D,U according to minimum values
		for(int i=0;i<countf1;i++){
			f +='R';
		}
		for(int i=0;i<countf2;i++){
			f+='U';
		}
		for(int i=0;i<countf1;i++){
			f +='L';
		}
		for(int i=0;i<countf2;i++){
			f+='D';
		}
		// printing the final string
		cout << f.length() << endl;
		cout << f << endl;
	}
	return 0;
}
