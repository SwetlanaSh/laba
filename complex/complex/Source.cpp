#include <iostream>
#include "complex.h"

using namespace std;

int main() {

	complex c1 = complex(); //����������� ��� ����������
	complex c2(c1); //����������� �����������
	//������������� set �������
	c2.setRe(14);
	c2.setIm(-4);
	c1.setRe(11);
	c1.setIm(4);
	//��������� � ����� � ������������� ������������� ����������
	cout << c1;
	auto c3 = c2 + c1;
	cout << c3;
	//������� ���� ����������� ����� ������� � �������
	c2.Mya();
	c1.Gav();
	//����� ������������ ������
	complex::showInfoAboutClass();
	
	//����� �����������
	c1.~complex();
	return 0;
}