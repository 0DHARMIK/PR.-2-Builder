#include<iostream>
using namespace std;

class Train
{
	public:
	int number,time;
	char name[100],destination[100],source[100];
};

main()
{
	Train e[5];

	for(int i=0;i<5;i++)
	{
		cout<<"Enter Train number = ";
		cin>>e[i].number;
		cout<<"Enter Train name = ";
		cin>>e[i].name;
		cout<<"Enter starting point = ";
		cin>>e[i].source;
		cout<<"Enter ending point = ";
		cin>>e[i].destination;
		cout<<"Enter train time = ";
		cin>>e[i].time;
		
	}
	for(int i=0;i<5;i++)
	{
		cout<<"Number = "<<e[i].number<<endl;
		cout<<"Name = "<<e[i].name<<endl;
		cout<<"Source = "<<e[i].source<<endl;
		cout<<"Destination = "<<e[i].destination<<endl;
		cout<<"Time = "<<e[i].time<<endl;
		
	}
}