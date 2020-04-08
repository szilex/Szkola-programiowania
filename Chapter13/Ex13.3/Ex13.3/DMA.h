#pragma once
#include <iostream>

class DMA {
	char* label;
	int rating;
public:
	DMA(const char *l = "brak", int r = 0);
	DMA(const DMA& rs);
	virtual ~DMA();
	virtual void View() const=0;
	DMA & operator=(const DMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const DMA &rs);
};

class baseDMA: public DMA {
public:
	baseDMA(const char *l = "brak", int r = 0) :DMA(l, r) { }
	baseDMA(const baseDMA& rs);
	virtual void View() const;
	baseDMA& operator=(const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const baseDMA &rs);
};

class lacksDMA :public DMA {
	enum {COL_LEN=40};
	char color[COL_LEN];
public:
	lacksDMA(const char *c = "brak",const char *l = "brak", int r = 0) :DMA(l, r) { strcpy(color,c); }
	lacksDMA(const char* c, const DMA& rs);
	virtual void View() const;
	/*baseDMA& operator=(const baseDMA & rs) {
		DMA::operator=(rs);
	}*/
	friend std::ostream & operator<<(std::ostream & os, const lacksDMA &rs);
};

class hasDMA : public DMA {
	char* style;
public:
	hasDMA(const char *s = "brak", const char *l = "brak", int r = 0) :DMA(l, r) {
		style = new char[strlen(s) + 1];
		strcpy(style, s);
	}
	hasDMA(const hasDMA& hs);
	virtual ~hasDMA();
	virtual void View() const;
	friend std::ostream & operator<<(std::ostream & os, const hasDMA &hs);
};