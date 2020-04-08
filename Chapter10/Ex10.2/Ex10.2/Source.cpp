#include <iostream>
#include "Person.h"

int main() {
	using std::cout; 
	using std::endl;
	Person one, two("Staszek"), three("Jacek", "Placek");
	one.Show();
	one.FormalShow();
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();


	system("PAUSE");
	return 0;
}