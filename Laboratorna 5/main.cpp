#include <iostream>
#include "..\Static\Triangle.h";
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triangle ABC(3, 3, 3);
	ABC.Perymetr();
	ABC.Display();
	return 0;
}
