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
	void elder(int age1, int age2)
	{
        this->age1=age1;
        this->age2=age2;
		if(this->age1>this->age2)
		cout<<" person 1 is older"<<'\n';
		else
	 cout<<"Person 2 is older";
	}
};
int main()
{
	Person p;
	p.elder(25,26);
	return 0;
}
