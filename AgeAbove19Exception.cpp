#include<iostream>

using namespace std;

class Student 
{
	int age;
	char name[10],address[20];
	public:
	void getInput()
	{
		cout<<"\nEnter the name : ";
		cin>>name;
		cout<<"\nEnter the age: ";
		cin>>age;
		cout<<"\nEnter the address :";
		cin>>address;
		try
		{
			if(age<19)
			{
				throw age;
			}
			else
			{
				cout<<"\nYou are qualified for college !";
			}
		}
		catch(int age)
		{
			cout<<"\nAge above 19! EXCEPTION !";
		}
	}
};

int main()
{
	Student a;
	a.getInput();
}
