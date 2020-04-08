#include <iostream>
#include <string>

void strcount(const std::string str);


int main() {
	using namespace std;
	string wiersz;
	getline(cin, wiersz);
	while (wiersz!="") {
		strcount(wiersz);
		getline(cin,wiersz);
	}

	system("PAUSE");
	return 0;
}

void strcount(const std::string str) {
	using namespace std;
	static int total = 0;
	int count = str.length();
	total += count;
	cout << "\"" << str << "\" zawiera " << count << " znakow\n";
	cout << "Lacznie " << total << " znakow\n";
}