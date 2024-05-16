
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

bool possible(lli a, lli b, lli c, lli d){

	/*given each operator is used atmost once*/

	//if(a + b + c == d) return 1;
	if(a + b - c == d) return 1;
	if(a + b * c == d) return 1;

	if(a - b + c == d) return 1;
	//if(a - b - c == d) return 1;
	if(a - b * c == d) return 1;

	if(a * b + c == d) return 1;
	if(a * b - c == d) return 1;
	//if(a * b * c == d) return 1;
	return 0;
}
int main(){
	init();
	
	/**********************************************************/
	lli a, b, c, d;
	cin >> a >> b >> c >> d;

	bool isp = possible(a, b, c, d);

	isp == 1 ? (cout << "YES") : (cout << "NO");
	cout << endl;



	/**********************************************************/
	return 0;
}