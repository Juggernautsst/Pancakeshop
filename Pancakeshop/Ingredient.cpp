
#include"all.h"

class Ing
{
public:
	 double price;
	string name;
	double cost;
public:
	void Data(string name_val, double price_val,double cost_val)
	{
		name_val=name;
        cost_val=cost;
	    price_val=price;
	}
};//ingredient配料类，价格、名称
class  Necessary :public Ing//煎饼必须要的配料
{
public:
	Necessary()
	{
		 name = "煎饼鸡蛋";
		  price = 5;
		  cost = 2;
	}

};
class Free :public Ing//免费配料
{public:
	void Fr()
	{
		 price = 0;
	}
};
class Huotui :public Ing {
public:
	Huotui()
	{
		  name = "火腿";
		  price = 2;
		  cost= 1;
	}
};
class Youtiao :public Ing {
public:
	Youtiao()
	{
		  name = "油条";
		 price = 1;
		 cost = 0.5;
	}
};
class Cuibing :public Ing {
public:
	Cuibing()
	{
		 name = "脆饼";
		 price = 1.5;
		 cost = 0.5;
	}
};
class Tudousi :public Ing {
public:
	Tudousi()
	{
		 name = "土豆丝";
		 price = 1;
		  cost= 0.5;
	}
};
class Haidaisi :public Ing {
public:
	Haidaisi()
	{
		  name = "海带丝";
		  price = 1;
		  cost = 0.5;
	};
};
class Huluobosi :public Ing {
public:
	 Huluobosi()
	{
		  name= "胡萝卜丝";
		  price = 1;
		  cost = 0.5;
	};
};
class Douya :public Ing {
public:
	Douya()
	{
		  name= "豆芽";
		  price = 1;
		 cost = 0.5;
	};
};
class Liji :public Ing {
public:
	Liji()
	{
	  name = "里脊";
	 price = 3;
	 cost = 1.5;
	}
};
class Jiang :public Free {
public:
	Jiang()
	{
		 name = "酱";
	  cost = 0.1;
	}
};
class Xiangcai :public Free {
public:

	Xiangcai()
	{
		 name = "香菜";

		 cost = 0.1;

	}
};
class Cong :public Free {
public:
	Cong()
	{
		name = "葱";
		cost = 0.1;
	}

};
class Lajiao :public Free {public:
	Lajiao()
	{
		string name = "辣椒";
		double cost = 0.1;
	}
};
double IngC(string C)
{
	if (C == "火腿") {
		Huotui h;
		return h.price;
	}
	else if (C == "油条") {
		Youtiao h;
		return h.price;
	}
	else if (C == "脆饼") {
		Cuibing h;
		return h.price;
	}
	else if (C == "土豆丝") {
		Tudousi h;
		return h.price;
	}
	else if (C == "海带丝") {
		Haidaisi h;
		return h.price;
	}
	else if (C == "胡萝卜丝") {
		Huluobosi h;
		return h.price;
	}
	else if (C == "豆芽") {
		Douya h;
		return h.price;
	}
	else if (C == "里脊") {
		Huotui h;
		return h.price;

	}
	else if (C == "酱") {
		Jiang h;
		return 0;
	}
	else if (C == "香菜") {
		Xiangcai h;
		return 0;
	}
	else if (C == "葱") {
		Cong h;
		return 0;
	}
	else if (C == "辣椒") {
		Lajiao h;
		return 0;
	}
	else return 0;
}

double IngS(string C)
{
	if (C == "火腿") {
		Huotui h;
		return h.cost;
	}
	else if (C == "油条") {
		Youtiao h;
		return h.cost;
	}
	else if (C == "脆饼") {
		Cuibing h;
		return h.cost;
	}
	else if (C == "土豆丝") {
		Tudousi h;
		return h.cost;
	}
	else if (C == "海带丝") {
		Haidaisi h;
		return h.cost;
	}
	else if (C == "胡萝卜丝") {
		Huluobosi h;
		return h.cost;
	}
	else if (C == "豆芽") {
		Douya h;
		return h.cost;
	}
	else if (C == "里脊") {
		Huotui h;
		return h.cost;

	}
	else if (C == "酱") {
		Jiang h;
		return h.cost;
	}
	else if (C == "香菜") {
		Xiangcai h;
		return h.cost;
	}
	else if (C == "葱") {
		Cong h;
		return h.cost;
	}
	else if (C == "辣椒") {
		Lajiao h;
		return h.cost;
	}
	else return 0;
}