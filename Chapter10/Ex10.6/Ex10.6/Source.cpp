#include <iostream>
#include "Move.h"

int main() {
	using namespace std;
	Move test;
	double wspx, wspy;
	cout << "Wprowadz x i y:\n";
	cin >> wspx >> wspy;
	test.reset(wspx, wspy);
	test.showmove();
	Move test2(10.3, 12.3);
	Move test3 = test.add(test2);
	test2.showmove();
	test3.showmove();


	system("PAUSE");
	return 0;
}