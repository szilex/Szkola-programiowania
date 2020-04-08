#include <iostream>
using std::cout;
#include "stonewt.h"

int main() {
	Stonewt incognito = 275;
	Stonewt wolfe(258.7);
	Stonewt taft(21, 8);
	cout << "Celebryta wazyl " << incognito;
	cout << "Detektyw wazyl " << wolfe;
	cout << "Prezydent wazyl " << taft;
	incognito = 319.8;
	taft = 307;
	wolfe = wolfe + taft;
	cout << "Po obiedzie Celebryta wazyl " << incognito;
	cout << "Po obiedzie Detektyw wazyl " << wolfe;
	cout << "Po obiedzie Prezydent wazyl " << taft;
	incognito = incognito - taft;
	taft = 10;
	taft = taft * incognito;
	cout << "Po kolacji Celebryta wazyl " << incognito;
	cout << "Po kolacji Detektyw wazyl " << wolfe;
	cout << "Po kolacji Prezydent wazyl " << taft;

	system("PAUSE");
	return 0;
}