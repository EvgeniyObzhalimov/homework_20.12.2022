#include<iostream>
#include"arifmetica.h"
#include"Void_arifmetica.h"




int main() {
	int a{};
	int b{};

	std::cout << "input parameters" << std::endl;
	std::cout << "input a= ";
	std::cin >> a;
	std::cout << "\n";
	std::cout << "input b= ";
	std::cin >> b;
	std::cout << "using arifmetica header\n";
	std::cout << "summ = " << sum(a, b) << std::endl;
	std::cout << "difference = " << diff(a, b) << std::endl;
	std::cout << "multiply = " << multiply(a, b) << std::endl;
	std::cout << "divide = " << divide(a, b) << std::endl;
	std::cout << "using Void header file\n";
	summa(a, b);
	std::cout << "\n";
	difference(a, b);
	std::cout << "\n";
	multiplying(a, b);
	std::cout << "\n";
	dividing(a, b);








	return 0;
}

/*�������� ������������ (.h) � .cpp ����� ��� ���� ������� �������. 
��������, ���� ����� - �����-�� �������������� �������� ��� ����� �����������: 
sum(int a, int b) � �.�., ������ ����� - ������� ������ �� �����. �������� �� ���,
����� ������� ������������ ���� �������� �������, �� ��� �������� ��� .h � .cpp �����. 
��������� ���������� � ����������� ������� ���, ��� ��� ��������. ������� ����� ���� 3-4 � 
������ �����. �������� ��������� �������������, ������� ���� ��� ������, ��� ������ ���� 
����� �������� ���� ���� ��� (����� ������������ ������� �� ��������� ����, 
��� ��� ���������� �������� ���� ����� ���). �������� main.cpp, 
� ������� �������� �� ���� ������� �� ������� ������.*/
