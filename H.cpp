
/*
 * Author: akashmaji945 (@gmail.com) 
 */

#include<bits/stdc++.h>
using namespace std;

#define READ freopen("in.txt", "r", stdin)
#define WRITE freopen("out.txt", "w", stdout)
#define iseql(dx, dy) (abs(dx-dy) < 0.00000000001)
typedef long long lli;

void init(){
	#ifndef ONLINE_JUDGE
		READ;
		WRITE;
	#endif
}

int main(){
	init();
	
	/**********************************************************/
	lli n, k, a;
	cin >> n >> k >> a;
	lli p = n * k;

	if(n%a == 0 || k%a == 0 || p%a == 0){
		//integeral
		lli b = p/a;
		if(b > INT_MAX || b < INT_MIN){
			cout << "long long" << endl;
		}else{
			cout << "int" << endl;
		}
	}else{
		cout << "double" << endl;
	}


	/**********************************************************/
	return 0;
}