/*
프로젝트 명: 피보나치 수
작성자명: 권소영
작성일: 2021.02.08
*/
#include<iostream>
using namespace std;
int Fibo(int& N1, int& N2,int i);
int main() {
	int num;
	cin >> num;
	int n1 = 0;
	int n2 = 1;
	int sum = 0;

	for (int i = 0; i <num; i++) {
		sum = Fibo(n1, n2,i);
	}
	cout << sum;
	return 0;
}
int Fibo(int &N1,int &N2,int i) {
	int N3 = N1 + N2;

	if (i == 1)
		N3 = 1;

	N1 = N2;
	N2 = N3;
	return N3;
}