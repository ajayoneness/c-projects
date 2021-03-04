#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=100;
	int *p;
	int *q;
	q=&a;
	p=&a;
	cout<<"the value of A is : "<<a<<endl;
	cout<<"the address of A is "<<&a;
	cout<<"\nthe address of p  : "<<p;
	cout<<"\nthe value of p : "<<*p;
	cout<<"\nthe address of *p  : "<<&*p;
	cout<<"\naddress of q :"<<q;
	cout<<"\nvalue of q : "<<*q;
	getch();
	system("color c ");
	
}
