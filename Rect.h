#pragma once
#include "Shape.h"

class Rect :public Shape { //�簢��
protected:
	virtual void draw() { cout << "Rectangle" << endl; }//���������Լ� �������̵�
};