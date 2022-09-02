#include "Ingredient.h"

	void Ing::Data(string name_val, double price_val,double cost_val)
	{
		name_val=name;
        cost_val=cost;
	    price_val=price;
	}
	Necessary::Necessary()
	{
		 name = "煎饼鸡蛋";
		  price = 5;
		  cost = 2;
	}

	void Free:: Fr()
	{
		 price = 0;
	}
	Huotui::Huotui()
	{
		  name = "火腿";
		  price = 2;
		  cost= 1;
	}
	Youtiao::Youtiao()
	{
		  name = "油条";
		 price = 1;
		 cost = 0.5;
	}
	Cuibing::Cuibing()
	{
		 name = "脆饼";
		 price = 1.5;
		 cost = 0.5;
	}
	Tudousi::Tudousi()
	{
		 name = "土豆丝";
		 price = 1;
		  cost= 0.5;
	}
	Haidaisi::Haidaisi()
	{
		  name = "海带丝";
		  price = 1;
		  cost = 0.5;
	};
	Huluobosi:: Huluobosi()
	{
		  name= "胡萝卜丝";
		  price = 1;
		  cost = 0.5;
	};
	Douya::Douya()
	{
		  name= "豆芽";
		  price = 1;
		 cost = 0.5;
	};
	Liji::Liji()
	{
	  name = "里脊";
	 price = 3;
	 cost = 1.5;
	}
	Jiang::Jiang()
	{
		 name = "酱";
	  cost = 0.1;
	}
	Xiangcai::Xiangcai()
	{
		 name = "香菜";

		 cost = 0.1;

	}
	Cong::Cong()
	{
		name = "葱";
		cost = 0.1;
	}

		Lajiao::Lajiao()
	{
		string name = "辣椒";
		double cost = 0.1;
	}
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
