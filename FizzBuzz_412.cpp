#include<bits/stdc++.h>
using namespace std;

int n;

int main(){
	cin >> n;

	if((n % 3 == 0) && (n % 5 == 0)){
		cout << "Fizz Buzz \n";
	} else if(n % 3 == 0){
		cout << "Fizz \n";
	} else if(n % 5 == 0){
		cout << "Buzz \n";
	} else{
		cout << n << "\n";
	}

	system("PAUSE");

	return 0;
}