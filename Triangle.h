#pragma once
#include "Shape.h"

class Triangle :public Shape { //�ﰢ��
protected:
	virtual void draw() { cout << "Triangle" << endl; }//���������Լ� �������̵�
};