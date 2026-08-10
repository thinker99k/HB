#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	char * name;
	int age;
public:
	Person(char * myname, int myage)
	{
		int len=strlen(myname)+1;
		name=new char[len];
		strcpy(name, myname);
		age=myage;
	}

	Person& operator=(const Person& ref)
	{
        cout << "delete " << name << " at " << &name << endl;
        delete []name;

		int len=strlen(ref.name)+1;
		name= new char[len];
		strcpy(name, ref.name);
		age=ref.age;
		return *this;
	}


	void ShowPersonInfo() const
	{
		cout<<"이름: "<<name<<endl;
		cout<<"나이: "<<age<<endl;
	}
	
	~Person()
	{
        cout << "delete " << name << " at " << &name << endl;
		delete []name;
		cout<<"called destructor!"<<endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Yoon ji yul", 22);
	man2=man1; // <- "Yoon ji yul" 메모리 누수됨
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}