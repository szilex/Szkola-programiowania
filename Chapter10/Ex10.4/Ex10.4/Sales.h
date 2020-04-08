#pragma once

namespace SALES {
	const int QUARTERS=4;
	class Sales {
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales();
		Sales(double ar[], int n);
		~Sales() {}
		void ShowSales() const ;
	};
}