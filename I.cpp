
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
	char a, b;
	cin >> a >> b;

	int va = a - 48;
	int vb = b - 48;

	if(vb%va==0 || va%vb==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}


	/**********************************************************/
	return 0;
}