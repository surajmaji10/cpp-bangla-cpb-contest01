
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

lli Katryoshkas(lli n, lli m, lli k){
	if(n == 0 or k == 0) return 0;
	else if(m == 0) return min(n/2, k);
	else{
		lli mn = min({n, m, k});
		return mn + Katryoshkas(n-mn, m-mn, k-mn);
	}
}

int main(){
	init();
	
	/**********************************************************/
	lli n, m, k;
	cin >> n >> m >> k;
	lli ans = Katryoshkas(n, m, k);
	cout << ans << endl;

	/**********************************************************/
	return 0;
}