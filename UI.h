#pragma once
#include <iostream>
using namespace std;

class UI {
public:
	static void print() {
		cout << "�׷��� �������Դϴ�.\n";
	}
	static int choice0() {
		cout << "1:����, 2:����, 3:��� �׸���, 4:���� >> ";
		int a;
		cin >> a;
		return a;
	}
	static int choice1() {
		cout << "1:��, 2:��, 3:�簢��, 4:�ﰢ�� >> ";
		int b;
		cin >> b;
		return b;
	}
	static int choice2() {
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		int c;
		cin >> c;
		return c;
	}
};