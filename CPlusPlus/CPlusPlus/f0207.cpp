#include "stdafx.h"
using namespace std;
int main() {
	cout << "请输入一个数:";
	int m;
	cin >> m;
	for (int i = 2; i < m; i++) {
		if (m%i == 0) {
			cout << "它不是一个素数";
			return 1;
		}
	}
	cout << m << "是一个素数";
	getchar();
	getchar();
	getchar();

}