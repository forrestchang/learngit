#include <iostream>
using namespace std;

long Fibonacci(long);

int main() {
	long n;
	cin>>n;
	cout<<Fibonacci(n)<<endl;
	return 0;
}
long Fibonacci(long n) {
	if(n == 1) {
		return 1;
	} else if(n == 2) {
		return 1;
	} else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}
