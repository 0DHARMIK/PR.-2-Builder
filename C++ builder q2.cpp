#include<iostream>
using namespace std;

class Supermarket
{
	public:
	int number,quantity,price;
	char name[100],discount[100];
};

main()
{
	Supermarket e[5];

	for(int i=0;i<5;i++)
	{
		cout<<"Enter Item number = ";
		cin>>e[i].number;
		cout<<"Enter Item name = ";
		cin>>e[i].name;
		cout<<"Enter Quantity = ";
		cin>>e[i].quantity;
		cout<<"Enter Price = ";
		cin>>e[i].price;
		cout<<"Enter Discount = ";
		cin>>e[i].discount;
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Number = "<<e[i].number<<endl;
		cout<<"Name = "<<e[i].name<<endl;
		cout<<"Quantity = "<<e[i].quantity<<endl;
		cout<<"Price = "<<e[i].price<<endl;
		cout<<"Discount = "<<e[i].discount<<endl;
		
	}
}