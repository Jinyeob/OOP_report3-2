#pragma once
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "Triangle.h"
#include "Shape.h"
#include "UI.h"

class GraphicEditor {
	Shape* pStart; //ó�� ��ü ����Ŵ
	Shape* pLast; //������ ��ü ����Ŵ
	Shape* p;
	Shape *q;
	int cnt;
public:
	GraphicEditor() { pStart = NULL; cnt = 0; }
	void figure(int receive) { //�׸��� �Լ�
		if (receive == 1) {
			if (cnt == 0) { //ó�� �׸���
				pStart = new Line(); //ó�� �κп� �� ���� pStart�� line ����Ŵ
				pLast = pStart;
			}
			else { //ó�� �׸��°� �ƴҶ�
				pLast = pLast->add(new Line()); //�� ��ü����
			}
			cnt++; //�׸������� cnt 1������
		}
		//���� ����
		else if (receive == 2) {
			if (cnt == 0) {
				pStart = new Circle();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Circle());
			}
			cnt++;
		}
		else if (receive == 3) {
			if (cnt == 0) {
				pStart = new Rect();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Rect());
			}
			cnt++;
		}
		else if (receive == 4) {
			if (cnt == 0) {
				pStart = new Triangle();
				pLast = pStart;
			}
			else {
				pLast = pLast->add(new Triangle());
			}
			cnt++;
		}
		else cout << "�߸� �Է��Ͽ����ϴ�.\n";
	}
	void del(int receive) {  //�����Լ�
		p = pStart;
		q = pStart;
		if (receive < cnt) { //�����Ϸ��� ��ȣ�� ������ �Է��� �������� �۾ƾߵ�
			for (int i = 0; i<receive; i++) {  //�����Ϸ��� ��ȣ��ŭ ����
				p = q; //p�� ó�� ��ü ����Ŵ
				q = q->getNext();  //q�� ���� ���� �ּ� ����
			}
			if (receive == 0) pStart = p->getNext(); //ó�� ������ �����Ҷ��� pStart�� �������� ����Ŵ
			else p->setNext(q);  //ó�� �̿��� ������ �����Ҷ��� p��ü�� q next����

			cnt--; //�������� 1 ����

			if (cnt == 1) pLast = pStart; //���� �Ѱ� ���������� pLast�� pStart�ּ� ����
		}
		else cout << "�߸� �Է��Ͽ����ϴ�.\n" << endl;
	}
	void show() {
		p = pStart; //ó������
		for (int i = 0; i < cnt; i++) { //���� �湮
			cout << i << ": ";
			p->paint(); //���
			p = p->getNext(); //���� ��������
		}
	}
	void first() { //main���� ó���� �ҷ��� �Լ�
		UI::print();
		while (1) {
			int select = UI::choice0(); //�Լ�ȣ���ϰ� ���ð� select�� ����
			if (select == 1) figure(UI::choice1()); //�����׸���
			else if (select == 2) del(UI::choice2()); //����
			else if (select == 3) show(); //�׸� �Լ� ���
			else if (select == 4) break; //����
			else cout << "�߸� �Է��Ͽ����ϴ�.\n";
		}
	}
};
