#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	// Amount of times the program should run //StartHere1
	int testcases;
	cin >> testcases;
	// EndHere1
	while(testcases--){
		//Number for which the calculation should be done on//StartHere2
		int number;
		cin >> number;
		//EndHere2
		int factorial = 1;
		for(int i = 1; i<=number; i++){
			factorial*=i;
		}
		cout << factorial << endl;

	}
}
