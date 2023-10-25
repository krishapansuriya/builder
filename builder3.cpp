#include<iostream>
#include<string.h>
using namespace std;
class Highschool{
	public :
		int id;
		char name[100];
		int roll_no;
		int standard;
		int age;
		int contact;
		char edu_institute_name[100];
		char address[100];
	};
class College{
	public :
		int id;
		char name[100];
		int roll_no;
		int standard;
		int age;
		int contact;
		char edu_institute_name[100];
		char address[100];
};
char edu_institute_name[] = "S V Ptel";
int main()
{
	Highschool h;
	College c;
	
	cout<<"id = "<<h.id<<endl;
	cout<<"name = "<<h.name<<endl;
	cout<<"roll_no = "<<h.roll_no<<endl;
	cout<<"standard = "<<h.standard<<endl;
	cout<<"age = "<<h.age<<endl;
	cout<<"contsct = "<<h.contact<<endl;
	cout<<"edu_institute_name = "<<h.edu_institute_name<<endl;
	cout<<"address = "<<h.address<<endl;
	
	
	cout<<"id = "<<c.id<<endl;
	cout<<"name = "<<c.name<<endl;
	cout<<"roll_no = "<<c.roll_no<<endl;
	cout<<"standard = "<<c.standard<<endl;
	cout<<"age = "<<c.age<<endl;
	cout<<"contsct = "<<c.contact<<endl;
	cout<<"edu_institute_name = "<<c.edu_institute_name<<endl;
	cout<<"address = "<<c.address<<endl;
}
