#include <bits/stdc++.h>
using namespace std;

bool isPrime[100 + 2];
void sieve(int n) {
	memset(isPrime, true, sizeof(isPrime));
	for (int p = 2; p * p <= n; p++) {
		if (isPrime[p] == true) {
			for (int i = p * 2; i <= n; i += p) {
				isPrime[i] = false;
			}
		}
	}
	return ;
}

int main(){
    return 0;
}
