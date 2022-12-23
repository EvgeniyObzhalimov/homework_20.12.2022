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

/*Создайте заголовочные (.h) и .cpp файлы для двух наборов функций. 
Например, один набор - какие-то математические операции над двумя аргументами: 
sum(int a, int b) и т.д., второй набор - функции вывода на экран. Назовите их так,
чтобы другому программисту было примерно понятно, за что отвечают эти .h и .cpp файлы. 
Разделите объявление и определения функций так, как это положено. Функций может быть 3-4 в 
каждом файле. Напишите директиву препроцессору, которая даст ему понять, что каждый файл 
нужно включить лишь один раз (чтобы впоследствии никогда не произошло того, 
что они рекурсивно включают себя много раз). Создайте main.cpp, 
в котором вызовите по паре функций из каждого набора.*/
