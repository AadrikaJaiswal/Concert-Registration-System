#include<iostream>
using namespace std;

class bookticket
{
	int ID;
	char name[30];
	int age;
	
	public:
		void getdata();
		void putdata();
	
	/*bookticket()
	{
		getdata;
		putdata;
	}*/
	friend customers();
	friend class cancelticket;
};

void bookticket:: getdata()
{
	cout<<"Enter the ID: ";
	cin>>ID;
	cout<<"Enter the name: ";
	cin>>name;
	cout<<"Enter the age: ";
	cin>>age;
}

void bookticket:: putdata()
{
	cout<<"Entered ID: "<<ID<<endl;
	cout<<"Entered Name: "<<name<<endl;
	cout<<"Entered age: "<<age<<endl;
}


void customers(bookticket customer[])
{
	
	//bookticket customer[];
	int i;
	for(i=0; i<5; i++)
	{
		customer[i].getdata();
	}
	int choice;
	for(i=0; i<5; i++)
	{
		customer[i].putdata();
		cout<< "Choice of ticket:"<< endl;
		cin>> choice;
		switch(choice)
    	{
    		case 1: cout<<"You've chosen The Weeknd's concert"<<endl;
    				break;
    		case 2: cout<<"You've chosen Justin Bieber's concert"<<endl;
    				break;
    		case 3: cout<<"You've chosen Ariana Grande's concert"<<endl;
    				break;
    		default: cout<<"Invalid choice"<<endl;
    				break;
		}
	}
	
}

class cancelticket
{
	public:
		int i;
		cancelticket(bookticket customer[], int id)
		{
			for(i=0; i<5; i++)
			{
				if(customer[i].ID==id)
					cout<<"Your ticket with id"<<id<<" is now cancelled"<<endl;
			}
		}
};

int main()
{
	cout<< "Tickets available for the shows:"<<endl;
  	cout<< "1. The Weeknd\n2. Justin Bieber\n3. Ariana Grande"<<endl;
  	bookticket customer[10];
  	customers(customer);
  	//For cancelling the ticket
  	int id;
  	cout<<"Enter the ID to be cancelled: ";
  	cin>> id;
  	cancelticket cancel(customer, id);
  return 0;	
}



