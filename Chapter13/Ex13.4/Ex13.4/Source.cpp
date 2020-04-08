#include  "port.h"

using namespace std;

int main() {
	Port winko("Carlo Rossi", "Czerwone", 6);
	VintagePort* wino=new VintagePort("Maryjka", "Biala", 8,"Szlachetna", 2017);
	winko.Show();
	wino->Show();

	system("PAUSE");
	return 0;
}