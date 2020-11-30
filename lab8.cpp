#include <iostream>
#include <string>
#include <Time.h>
#include <Windows.h>
#include <cmath>
using namespace std;

int main() {
	srand(time(0));

	int choice = rand()%2;
	if (choice == 1) {
		cout<<"\nСдвиг элементов вниз\n"<<endl;
	} else {
		cout<<"\nСдвиг элементов вправо\n"<<endl;
	}

	int a = 2+rand()%4;
	int b = 2+rand()%4;
	while (b == a) {
		b = 2+rand()%4;
	}
	int A[a][b];

	int n = 1+rand()%20;
	cout<<"n = "<<n<<"\n"<<endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			A[i][j] = rand()%10;
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";

	int x, y;
	int B[a][b];
	int c = a*b;

	while (n >= c) {
		n %= c;
	}

	if (choice == 0) {
		if (n >= b) {
			x = n%b;
			y = trunc(n/b);
		} else {
			x = n;
			y = 0;
		}
		//cout<<"\n"<<x<<" "<<y<<" "<<n<<"\n"<<endl; //начальная точка
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (x == b) {
					x = 0;
					y++;
				}
				if (y == a) {
					y = 0;
				}
				B[y][x] = A[i][j];
				x++;
			}
		}
	} else {
		if (n >= a) {
			y = n%a;
			x = floor(n/a);
		} else {
			y = n;
			x = 0;
		}
		//cout<<"\n"<<x<<" "<<y<<" "<<n<<"\n"<<endl; //начальная точка
		for (int i = 0; i < b; i++) {
			for (int j = 0; j < a; j++) {
				if (y == a) {
					y = 0;
					x++;
				}
				if (x == b) {
					x = 0;
				}
				B[y][x] = A[j][i];
				y++;
			}
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout<<B[i][j]<<" ";
		}
		cout<<"\n";
	}
	
    return 0;
}