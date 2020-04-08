#include <iostream>
#include "golf.h"

using namespace std;


int main()
{
	Golf golfiarze[3]{ {"Robercik",23},{"asdad",31} };
	for (int i = 0; i < 3; i++)
		golfiarze[i].showgolf();

	system("PAUSE");
	return 0;
}

