#include <iostream>
#include <new>

using namespace std;

static char bufor[50];

struct chaff {
	char dross[20];
	int slag;
};

int main() {
	chaff * tab = new (bufor) chaff[2];
	tab[0] = { "asdads", 42 };
	tab[1] = { "asdasdaweqet",12 };
	for (int i = 0; i < 2; i++)
		cout << "Nazwa: " << tab[i].dross << ", slag: " << tab[i].slag << endl;
	system("PAUSE");
	return 0;
}