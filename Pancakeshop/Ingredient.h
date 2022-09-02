#pragma once
#include<iostream>
#include<stdlib.h>
#include<string>
#include <stdio.h>
#include <fstream>
#include <string>
#include <stdlib.h> 
#include <iostream>
#include <cassert>
using namespace std;
class Ing
{
public:
	 double price;
	string name;
	double cost;
public:
	void Data(string name_val, double price_val,double cost_val);
};//ingredient配料类，价格、名称
class  Necessary :public Ing//煎饼必须要的配料
{
public:
	Necessary();
};
class Free :public Ing//免费配料
{public:
	void Fr();
};
class Huotui :public Ing {
public:
	Huotui();
};
class Youtiao :public Ing {
public:
	Youtiao();
};
class Cuibing :public Ing {
public:
	Cuibing();
};
class Tudousi :public Ing {
public:
	Tudousi();
};
class Haidaisi :public Ing {
public:
	Haidaisi();
};
class Huluobosi :public Ing {
public:
	 Huluobosi();
};
class Douya :public Ing {
public:
	Douya();
};
class Liji :public Ing {
public:
	Liji();
};
class Jiang :public Free {
public:
	Jiang();
};
class Xiangcai :public Free {
public:
	Xiangcai();
};
class Cong :public Free {
public:
	Cong();
};
class Lajiao :public Free {public:
	Lajiao();
};
double IngC(string C);
double IngS(string C);
