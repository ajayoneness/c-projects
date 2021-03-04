#include<iostream>
#include <conio.h>
using namespace std;

template <class aj>
aj big_val(aj x , aj y)
{
	if (x>y)
	{
		return (x);
	}
	else
	{
		return (y);
	}
}

int main()
{
	cout<<big_val(10,20)<<"\n";
	cout<<big_val(3.4444,44444.5)<<"\n";
	cout<<big_val(0.55555555555555,.1111111111111);
	getch();
}
