#include <iostream>
#include "mytime.h"

int main() {
	using std::cout;
	using std::endl;
	Time aida(3, 36);
	Time tosca(2, 48);
	Time temp;

	cout << "Aida i Tosca:\n" << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca:\n" << temp << endl;
	temp = aida*1.17;
	cout << "Aida * 1.17:\n" << temp << endl;
	cout << "Tosca * 10:\n" << 10*tosca << endl;



	system("PAUSE");
	return 0;
}