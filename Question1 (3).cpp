#include <iostream>
using namespace std;

class Person
{
	int age1;
	int age2;
	public:
	Person()
	{
		age1=0;
		age2=0;
	}
	Person(int a1, int a2)
	{
		age1=a1;
		age2=a2;
	}
	void elder()
	{
		if(age1>age2)
		cout<<" person 1 is older"<<'\n';
		else
	 cout<<"Person 2 is older";
	}
};
int main()
{
	Person p(24,25);
	p.elder();
	return 0;
}
