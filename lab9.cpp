#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double suma(int n) {
	double res = 0;
	for (int i = 1; i <= n; i++) {
		res += 1/pow(3, 2*i);
	}
	return res;
}

int main() {

	double e;
	int n;

	cin>>e;
	cin>>n;

	double out = suma(n);
	int k = 0;

	out = floor(out/e+5*e)*e;

	cout<<out<<endl;

	return 0;
}