#include<iostream>
#include<conio.h>
using namespace std;

class fathersday
{
	int i;
	public :
		void f_day();
		void timer();
		
};

void fathersday :: timer()
{
	for(i=1; i<100; i++)
	{
	cout<<"----------------FATHER'S DAY----------------\n\n";
		cout<<i;
		system("CLS");

	}
	
	
}

void fathersday :: f_day()
{
	
	cout<<"----------------FATHER'S DAY----------------\n\n";
}

int main()
{
	fathersday obj;
	
	
	obj.f_day();
	obj.timer();
	
	
	getch();
	return 0;
}
