#include "stdafx.h"
using namespace std;
int main() {
	cout << "������һ����:";
	int m;
	cin >> m;
	for (int i = 2; i < m; i++) {
		if (m%i == 0) {
			cout << "������һ������";
			return 1;
		}
	}
	cout << m << "��һ������";
	getchar();
	getchar();
	getchar();

}