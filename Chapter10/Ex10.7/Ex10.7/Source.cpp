#include <iostream>
#include "Plorg.h"

int main() {
	using namespace std;
	Plorg pet;
	cout << "Wprowadz nazwe i wsp sytosci plorga:\n";
	string name;
	int fullness;
	cin >> name >> fullness;
	Plorg pet2(name, fullness);
	pet.Introduce();
	pet.Refill(30);
	pet.Introduce();
	pet2.Introduce();


	system("PAUSE");
	return 0;
}