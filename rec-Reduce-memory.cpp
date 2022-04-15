#include <bits/stdc++.h>
using namespace std;
// calculating power of x by recursion
//but with logn stack frames instead 
// of n frames to optimize memory.
int CalcXpowN(int x, int n);

int main(){
	// x^n = x * (x^n-1)
	cout << CalcXpowN(0, 5);
	return 0 ; 	
}

int CalcXpowN(int x, int n){
	if(n == 0) return 1;// dry running helps!
	if(n == 1) return x;
	if(n & 1){
		return x * CalcXpowN(x, n/2) * CalcXpowN(x, n/2);
	}
	else{
		return CalcXpowN(x, n/2) * CalcXpowN(x, n/2);
	}
}