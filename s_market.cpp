#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>
#include<dirent.h>

using namespace std;
 
class shop 
{
	public:

		char name[20] , ep[30] , c_id[20] , add[20];
		string spass, ar[10];
		int i;

		

		
	public :
	void read();
	void write();
	void customer_ac();
	void search();
	void style();
	void directory();
	void syspass();
	void th();


	
	
};



void shop :: th()
{
	cout<<"\t\t\t\nThings Name\n";
	for(i=1; i<5; i++)
	{
		cin>>ar[i];
	}
	
	
}



void shop :: directory()
{
	DIR *dir;
	dirent *pdir;
//	cout<<"press any key to view all  files in directory...  ";
//	getch();
	dir=opendir(".");
		
	while (pdir = readdir(dir))
	{
		
	cout<<"\n\t"<<pdir->d_name<<endl;
			
	}
	
	//int remove("./aj123");
	
	closedir(dir);
	
	
	
}




void shop :: style()
{
	cout<<"---------------------------------------------------------------------------------"<<endl;
}

void shop :: read()
{
	ifstream file;
	file.open(c_id);

	 while (file.good())
	 {
	 	string line;
	 	getline(file , line);
	 	cout<<line<<endl;
	 	
	 }
file.close();
	
}



void shop :: write()
{
	ofstream file(c_id); 
	file<<"customer id : "<<c_id;
	file<<"\ncustomer Name : "<<name;
	file<<"\nE-mail / phone no. : "<<ep;
	file<<"\nAddress : "<<add;
	file<<"\t\t\tThings name\n";
	for(int i=1; i<5; i++)
	{
		file<<endl<<ar[i];
	}
	
	file.close();
	
}

void shop :: search()
{
	cout<<"\nsearching : ";
	cin>>c_id;
}

void shop :: customer_ac()
{
	cout<<"create customer ID : ";
	cin.ignore();
	cin.getline(c_id ,20); 
	cout<<"\nEnter your name : ";
//	cin.ignore();
	cin.getline(name , 20);
	cout<<"\nEnter Your Address : ";
	//cin.ignore();
	cin.getline(add,20); 
	cout<<"\nE-mail / phone no. : ";
	cin.ignore();
	cin.getline(ep,30);
	
	
	
}


int main()
{
	int no;
	char ch,agn;
	shop obj;
		string apass="admin"; 
		string spass;
		
		cout<<"\n\t\t\tE-MART\n\t\tBhopal,newmarket,t-road\n\n";
		obj.style();

	
	for(int i=1; i<=3; i++)
		{	
	
	cout<<"enter your system password "<<endl<<"--->";
	getline(cin,spass);
	
	
	
	if(apass == spass)
{



	
do
{
	obj.style();
	cout<<"\t\t(1) CREATE ACCOUNT "<<endl;
	cout<<"\n\t\t(2) SHOW ALL CUSTOMER ID "<<endl;
	cout<<"\n\t\t(3) SEARCH CUSTOMER ID "<<endl;
	cout<<"\n\t\t(4) EXIT "<<endl;
	obj.style();
	cout<<"choose the options : ";
	cin>>no; 
	
	
	switch(no) 
	{
		case 1 :
			obj.style();
			cout<<"\t\tCREATE ACCOUNT \n"<<endl;
			obj.style();
			obj.customer_ac();
			obj.th();
			obj.write();
			obj.style();
			break;
			
		case 2 :
			obj.style();
			cout<<"\t\tSHOW ALL CUSTOMER ID "<<endl;
			obj.directory();
			obj.style();
			cout<<"\n\t\tsearch "<<endl;
			obj.style();
			
			do
			{
			obj.search();
			obj.read();
			obj.style();
			cout<<"do you want search again then press 's' ,for main menu press'm' .....\n";
			cin>>agn;
			obj.style();
			}
			while(agn=='s' || agn=='S');
		
		
			break;
			
		case 3 :
			obj.style();
			cout<<"\t\tSEARCH CUSTOMER ID "<<endl;
			obj.search();
			obj.read();
			cout<<"\n";      
			obj.style();
			break;
			
		case 4 :
			obj.style();
			cout<<"\t\tThanku for using......"<<endl;
			exit(0);
			break;
		
		default :
			obj.style();
			cout<<"\t\tInvalid Choice \nPlease try again "<<endl;
			obj.style();
			break;
			
	}
		
	cout<<"do you want to select next option if yes then press 'y' if not press'n' \n";
	cin>>ch;


}
while( ch=='y' || ch== 'Y');	
	if (ch == 'n' || ch == 'N')
	{
		obj.style();
		cout<<"\t\tThanku for using......";
		exit(2);
	}
}
else 
{
	


	
	cout<<"try again...."<<(3-i)<<endl;
	
}
	

}
	

	getch();

}		
	






