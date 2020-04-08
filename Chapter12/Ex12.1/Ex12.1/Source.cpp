#include <iostream>
#include "cow.h"

using namespace std;

int main() {
	Cow molly, dolly("Dolly", "Tenis", 20), holly("Holly","Pila",15);
	molly = dolly;
	molly.ShowCow();
	dolly.ShowCow();
	holly.ShowCow();



	system("PAUSE");
	return 0;
}