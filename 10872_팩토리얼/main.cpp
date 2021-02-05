/*
작성자명: 권소영
프로젝트 명: 팩토리얼(재귀)
작성일: 2021.02.05
*/
#include"iostream"
using namespace std;
int fact(int num);

int main() {
	int num;
	int sum;
	
	cin >> num; //숫자 입력

	int res= fact(num);
	cout << res;
	return 0;
}
int fact(int num) {
	if (num != 0) {
		return num * fact(num - 1);
	}
	return 1;
}