/*
�ۼ��ڸ�: �Ǽҿ�
������Ʈ ��: ���丮��(���)
�ۼ���: 2021.02.05
*/
#include"iostream"
using namespace std;
int fact(int num);

int main() {
	int num;
	int sum;
	
	cin >> num; //���� �Է�

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