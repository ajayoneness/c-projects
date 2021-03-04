#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <dirent.h>
using namespace std;
class bank
{
  protected:
	char name[100], add[100], y, email[50], no[50], pno[15];
	string nation;
	//string indian = "indian" ;
	//string nepali = "nepali" ;

	int d, w;
	float balance;

  public:
	void create_account();
	void cash_deposite();
	void cash_withdraw();
	void write();
	void search();
	void read();
	void style();
	void pattern();
	void all_id();
};
void bank :: all_id()
{
	DIR *dir;
	dirent *pdir;
	dir = opendir(".");
	while (pdir = readdir(dir))
	{
		cout<<"\t\n"<<pdir->d_name<<endl;
		
	}
	
	closedir(dir);
}

void bank ::pattern()
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			cout << "  ";
		}
		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 2; j++)
		{
			cout << "  ";
		}
		for (int k = 1; k <= 7; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

void bank ::style()
{
	cout << "---------------------------------------------------------" << endl;
}

void bank ::search()
{
	cout << "A/c no. : ";
	cin >> no;
}
void bank ::read()
{
	ifstream file;
	file.open(no);

	while (file.good())
	{
		string line;
		getline(file, line);
		cout << line << endl;
	}
	//file.close();
}

void bank ::write()
{
	string indian = "indian" ;
	string nepali = "nepali" ;

	ofstream file(no);
	file << "Account no. : " << no;
	file << "\nName : " << name;
	file << "\nAddress : " << add;
	file << "\nE-mail ID : " << email;

	file << "\nNationality : ";
	if (nation == nepali)
	{
		file << "nepali\n";
		file << "Phone no. : +977 " << pno;
	}
	if (nation == indian)
	{
		file << "indian\n";
		file << "Phone no. : +91 " << pno;
	}

	file << "\nAccount type : ";
	if (y == 's' || y == 'S')
	{
		file << "saving account";
	}
	if (y == 'c' || y == 'C')
	{
		file << "current account";
	}

	file << "\nTotal Balance : " << balance << endl;
	cout << endl;
}

void bank ::create_account()
{
	string indian = "indian" ;
	string nepali = "nepali" ;
	
	cout << "create your Account no. : ";
	cin.ignore();
	cin.getline(no, 50);

	cout << "\nFull name : ";
	cin.getline(name, 100);

	cout << "\nFull address : ";
	cin.getline(add, 100);

	cout << "\nE-mail : ";
	cin.getline(email, 50);

	do
	{
		cout << "\nNationality  : '\n indian \n OR \n nepali : ";
		cin >> nation;

		if (nation == nepali || nation == indian)
		{
			if (nation == nepali)
			{
				cout << "you are nepali " << endl;
				cout << "\nphone no. : +977 ";
				cin.ignore();
				cin.getline(pno, 15);
				break;
			}
			if (nation == indian)
			{
				cout << "you are indian " << endl;
				cout << "\nphone no. : +91 ";
				cin.ignore();
				cin.getline(pno, 15);
				break;
			}
		}

		cout << "\nsorry, entered country name  is incorrect.... \nplz try again......" << endl;
	} while (nation != nepali || nation != indian);

	do
	{
		cout << "\nAccount type : \nPress 's' to Saving Account(s)\nPress 'c' to Current Account(c) : ";
		cin >> y;
		if (y == 's' || y == 'S' || y == 'c' || y == 'C')
		{
			if (y == 's' || y == 'S')
			{
				cout << "Saving Account";
				break;
			}
			if (y == 'c' || y == 'C')
			{
				cout << "Current Account ";
				break;
			}
		}
		cout << "\nsorry, Entered value is incorrect ....\nplz try again \n";
	} while (y != 'c' || y != 'C' || y != 's' || y != 'S');

	cout << "\n\nEnter amount to deposite : ";
	cin >> balance;

	cout << endl
		 << "\tYour account has been created !!!\n ";
}

void bank ::cash_deposite()
{
	cout << "\nEnter amount to deposite : ";
	cin >> d;
	balance += d;
	cout << "\n Your total amount is : " << balance << endl;
	
}

void bank ::cash_withdraw()
{
	cout << "\nEnter amount to withdraw : ";
	cin >> w;
	if (balance >= w)
	{
		balance -= w;
		cout << "\n Your remaining balance is : " << balance << endl;
	}
	else if (balance < w)
	{
		cout << "\nsorry,you have insufficent balance  !!!!!!" << endl;
		cout << "your present balance is : " << balance << " only" << endl;
	}
}

int main()
{
	system("color  0");
	bank obj;
	int ch;
	char x,s1;

	string epass = "admin";
	string pass = "2263262";
	string syspass;
//	obj.pattern();
//	cout << endl;
	obj.style();
	cout << "\npassword for everyone : admin\n";
	obj.style();
	cout << "Enter system password : ";
	cin >> syspass;
	if (syspass == pass || syspass == epass)
	{
		obj.style();
		system("color 0");
		cout << "\n\tWelcom to my project\t\n\n";

		do
		{
			obj.style();
			cout << "\n\t1) create account";
			cout << "\n\t2) show all accounts";
			cout << "\n\t3) cash deposite ";
			cout << "\n\t4) cash withdraw";
			cout << "\n\t5) search account";
			cout << "\n\t6) account details";
			cout << "\n\t7) exist " << endl
				 << endl;
			obj.style();
			cout << "\nselect the option from above \n";
			cin >> ch;

			switch (ch)
			{
			case 1:
				cout << "\t1) create account \n";
				obj.style();
				obj.create_account();
				obj.write();
				obj.style();
				break;
				
			case 2:
				cout<<"\t2) show all accounts \n";
				obj.style();
				obj.all_id();
				obj.style();
			do
			{
				cout<<"\t\ndo you want to search if yes then press 'Y' ";
				cout<<"if no then press 'N' ";
				cin>>s1;
				if (s1 =='y' || s1 == 'Y')
				{
				obj.search();
				obj.read();
				obj.style();
				}
				
				else 
				{
					break;
				}
			}
			while (s1 != 'n' || s1 != 'N' );
			
				break;
				

			case 3:
				cout << "\t3) cash deposite \n";
				obj.style();
				obj.cash_deposite();
				obj.write();
				obj.style();
				break;

			case 4:
				cout << "\t4) cash withdrawn \n";
				obj.style();
				obj.cash_withdraw();
				obj.write();
				obj.style();
				break;

			case 5:
				cout << "\t5) searching....\n";
				obj.style();
				obj.search();
				obj.read();

				obj.style();

				break;

			case 6:

				cout << "\t6) Account_details\n";
				obj.style();
			//	obj.write();
				obj.read();
				obj.style();
				break;

			case 7:
				if (ch == 7)
				{
					system("color c");
					obj.style();
					cout << "\t\n Thankyou  for using !!!";
					exit(1);
				}

			default:
				obj.style();
				cout << "this is not exist plz try again \n";
				obj.style();
			}

			cout << "\n do you want to select next option then press :: Y \n";
			cout << "if you want to exist then press :: N   \n";
			cin >> x;

			if (x == 'n' || x == 'N')
			{
				system("color c");
				obj.style();
				cout << "thank you for using...";

				exit(0);
			}
		
		} while (x == 'y' || x == 'Y');
	}

	else
	{
		system("color c");
		obj.style();
		cout << " sorry , your password is incorrect !!!!! \n please try next time !!!!!";
		exit(0);
	}

	getch();
	return 0;
}

