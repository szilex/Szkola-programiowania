#include <iostream>
#include "string2.h"

using namespace std;
int String::num_strings = 0;

String::String(const char * s) {
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
}
String::String() {
	len = 4;
	str = new char[1];
	str[0]='\0';
	num_strings++;
}
String::String(const String & s) {
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);
	num_strings++;
}
String::~String() {
	--num_strings;
	delete[] str;
}

void String::stringlow() {
	for (int i = 0; i < len; i++)
		str[i] = tolower(str[i]);
}
void String::stringup() {
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
}
int String::amount(const char c) {
	int amt = 0;
	for (int i = 0; i < len; i++)
		if (str[i] == c)
			amt++;
	return amt;

}
String & String::operator=(const String& st) {
	if (this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}
String & String::operator=(const char * c) {
	delete[] str;
	len = strlen(c);
	str = new char[len + 1];
	strcpy(str,c);
	return *this;
}

String operator+(const String& st, const String& st2) {
	String temp;
	char* help;
	temp.len = st.len + st2.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, st.str);
	help = &temp.str[st.len];
	strcpy(help, st2.str);
	return temp;
}

char & String::operator[](int i) {
	return str[i];
}
const char & String:: operator[](int i) const {
	return str[i];
}
bool operator<(const String &st, const String &st2) {
	return(strcmp(st.str, st2.str)<0);
}
bool operator>(const String &st, const String &st2) {
	return st2 < st;
}
bool operator==(const String &st, const String &st2) {
	return(strcmp(st.str, st2.str) == 0);
}
ostream & operator<<(ostream & os, const String &st) {
	os << st.str;
	return os;
}
istream & operator>>(istream & is, String &st) {
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if (is)
		st = temp;
	while (is&&is.get() != '\n')
		continue;
	return is;
}
int String::HowMany() {
	return num_strings;
}