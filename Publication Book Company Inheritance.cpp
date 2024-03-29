//Problem Statement:-

/*Imagine a publishing company which does marketing for book and audio cassette versions.
Create a class publication that stores the title (a string) and price (type float) of publications.
From this class derive two classes: book which adds a page count (type int) and tape which adds a playing time in minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter data and displays the data members.
If an exception is caught, replace all the data member values with zero values.*/

//Code:-

#include<iostream>
#include<string>
#include<limits>
using namespace std;
class publication
{
private:
	string title;
	float price;
public:
	void getdata()
	{
		cout<<"Enter Title:";
		cin>>title;
		cout<<"Enter Price:";
		cin>>price;
	}
	void putdata()
	{
		cout<<"\nName Is:"<<title<<"\nPrice Is:"<<price<<endl;

	}

};

class Book:public publication
{
private:
	int pages;
public:
	void getdata()
	{
		publication::getdata();
	try
	{
		cout<<"Enter Number Of Pages Of Book"<<endl;
		cin>>pages;
		while (1)
		{
			if(cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(),'\n');
				throw 1;
			}
			if(!cin.fail())
			{
				break;
			}
		}
	}
	catch(int e)
	{
		cout<<"Exception Catched...! You Entered A Wrong Input! Try Again"<<endl;
		cout<<"Enter Number Of Pages Of Book Again:"<<endl;
		cin>>pages;
	}
	}
	void putdata()
	{
		publication::putdata();
		cout<<"Pages Of Books:"<<pages<<endl;
	}
};

class tape:public publication
{
private:
	float minutes;
public:
	void getdata()
	{
		publication::getdata();
		cout<<"Enter Minutes:"<<endl;
		cin>>minutes;
	}
	void putdata()
	{
		publication::putdata();
		cout<<"\nMinutes Of Tape:"<<minutes<<endl;
	}
};
int main()
{
	Book b;
	tape t;
	cout<<"Enter Book Data Details:"<<endl;
	b.getdata();
	cout<<"Enter The Tape Data Details:"<<endl;
	t.getdata();
	
	cout<<"\n"<<endl;
	cout<<"\nBook Data Details Is:"<<endl;
	b.putdata();
	cout<<"\nTape Data Details Is:"<<endl;
	t.putdata();
	cout<<"Thanks For Using!"<<endl;
	return 0;
}
