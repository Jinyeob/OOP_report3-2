#pragma once
#include <iostream>
using namespace std;

class Shape { //�߻�Ŭ����
	Shape* next;
protected:
	virtual void draw() = 0; //���������Լ�
public:
	Shape() { next = NULL; } //������
	virtual ~Shape() { } //����Ҹ���
	void paint() { draw(); } //show�Լ����� ���
	Shape* add(Shape* p) { this->next = p; return p; } //�ش簴ü�� next�� p ����, p����
	Shape* getNext() { return next; } //next ����
	void setNext(Shape *p) { this->next = p->next; }//�ش簴ü�� next�� p�� next ����
};
