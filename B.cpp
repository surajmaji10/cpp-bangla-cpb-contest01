
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
	lli a, b, c;
	cin >> a >> b >> c;

	lli x = a % c;
	lli y = b % c;

	if(x == 0 and y == 0){
		cout << "Both";
	}else if(x == 0 and y != 0){
		cout << "Memo";
	}else if(x != 0 and y == 0){
		cout << "Momo";
	}else{
		cout << "No One";
	}


	/**********************************************************/
	return 0;
}