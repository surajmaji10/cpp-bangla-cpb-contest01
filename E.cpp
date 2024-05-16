
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
	int a, b;
	cin >> a >> b;

	int valid = (abs(a-b));
	if(a == 0 and b == 0){
		cout << "NO" << endl;
	}
	else if(valid <= 1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}


	/**********************************************************/
	return 0;
}