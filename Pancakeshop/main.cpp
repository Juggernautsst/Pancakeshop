#include"all.h"

class Pancake
{protected:
	double Price;
	double Cost;
public:	
	void CPancake()
	{
		
		string a;
		cout << "请问顾客还需要配料么？" << endl;
		cin >> a;
		if (a == "是" || "需要")
		{

			string b;
			cout << "请问顾客还需要什么" << endl;
			cin >> b;
			double p =IngC(b);
			double s = IngS(b);
			Necessary h;
			Price += p;
			Price += h.price;
			Cost += s;
			Cost += h.cost;
			cout << "这一个煎饼原价应该为" << p << endl;
			cout << "煎饼的会员价应该为" << 0.9*p << endl;
			cout << "成本共计" << s << endl;
		}

	}




	/*int cook()//制作一个煎饼
	{
		Ing n1, n2;
		Ing i[11];
		n1.Data("煎饼", 3, 1);
		n2.Data("鸡蛋", 2, 1);
		i[0].Data("火腿肠", 2, 1);
		i[1].Data("油条", 1.5, 0.5);//没有里脊我不是很认可！！！
		i[2].Data("脆饼", 1, 1.5);
		i[3].Data("土豆丝", 0.5, 1.5);
		i[4].Data("海带丝", 0.5, 1.5);
		i[5].Data("胡萝卜丝", 0.5, 1.5);
		i[6].Data("豆芽", 1, 1.5);
		i[7].Data("酱", 0, 0.01);
		i[8].Data("葱", 0, 0.05);
		i[9].Data("香菜", 10, 0.5);
		i[10].Data("辣椒", 0, 0.1);


		//i[11].Data("周导", 10000000,10000000000000);//各种配料价格

		Price = 0;
		string a[11];
		string d;
		cout << "请选择您想要的配料:火腿肠、油条、脆饼、土豆丝、海带丝、胡萝卜丝、豆芽、酱、葱、香菜、辣椒" << endl;
		cout << "您是否要添加配料？" << endl;
		cin >> d;
		if (d == "是")
		{
			int j = 0;
			int p = 0;
			cin >> a[j];
			if (strcmp(a[j].c_str(), i[p].name.c_str()) == 0)
			{
				Price += i[p].price;
			}
			else p++;

			j++;
		}
		else
		{
			Price = Price + n1.price + n2.price;
			cout << "美味的煎饼制作完成!这个煎饼一共花费" << Price << "元" << endl;
		}
	};
};
int cook()//制作一个煎饼
{
	Ing n1, n2;
	Ing i[11];
	n1.Data("煎饼", 3, 1);
	n2.Data("鸡蛋", 2, 1);
	i[0].Data("火腿肠", 2, 1);
	i[1].Data("油条", 1.5, 0.5);//没有里脊我不是很认可！！！
	i[2].Data("脆饼", 1, 1.5);
	i[3].Data("土豆丝", 0.5, 1.5);
	i[4].Data("海带丝", 0.5, 1.5);
	i[5].Data("胡萝卜丝", 0.5, 1.5);
	i[6].Data("豆芽", 1, 1.5);
	i[7].Data("酱", 0, 0.01);
	i[8].Data("葱", 0, 0.05);
	i[9].Data("香菜", 10, 0.5);
	i[10].Data("辣椒", 0, 0.1);*/


	//i[11].Data("周导", 10000000,10000000000000);//各种配料价格

	/*Price = 0;
	string a[11];
	string d;
	cout << "请选择您想要的配料:火腿肠、油条、脆饼、土豆丝、海带丝、胡萝卜丝、豆芽、酱、葱、香菜、辣椒" << endl;
	cout << "您是否要添加配料？" << endl;
	cin >> d;
	if (d == "是")
	{
		int j = 0;
		int p = 0;
		cin >> a[j];
		if (strcmp(a[j].c_str(), i[p].name.c_str()) == 0)
		{
			Price += i[p].price;
		}
		else p++;

		j++;
	}
	else
	{
		Price = Price + n1.price + n2.price;
		cout << "美味的煎饼制作完成!这个煎饼一共花费" << Price << "元" << endl;
	}*/
};
int main()
{
	cout << "请问是有顾客光临了吗？" << endl;
	string a;
	cin >> a;
	if (a == "是")
	{
		
	
		Pancake f;
		f.CPancake();

	}
	return 0;
}

 
