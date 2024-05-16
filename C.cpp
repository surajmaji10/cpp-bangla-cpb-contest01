
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
	char ch;
	cin >> ch;

	if(ch == 122){  // if 'z' make it 'a'
		ch = 97;
	}else{          // else make next character
		ch++;
	}

	cout << ch << endl;


	/**********************************************************/
	return 0;
}