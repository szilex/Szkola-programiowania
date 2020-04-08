#pragma once

using std::ostream;
using std::istream;

class String {
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char * s);
	String();
	String(const String & s);
	~String();
	int length() const { return len; }
	void stringlow();
	void stringup();
	int amount(const char c);
	String & operator=(const String& st);
	String & operator=(const char * c);
	friend String operator+(const String& st, const String& st2);
	char & operator[](int i);
	const char & operator[](int i) const;
	friend bool operator<(const String &st, const String &st2);
	friend bool operator>(const String &st, const String &st2);
	friend bool operator==(const String &st, const String &st2);
	friend ostream & operator<<(ostream & os, const String &st);
	friend istream & operator>>(istream & is,  String &st);
	static int HowMany();

};