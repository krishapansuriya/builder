#include <iostream>
using namespace std;

class Employee {
  private:
    int id;
    char name[100];
    char role[100];
    int salary;
    char experience[100];
    char address[100];
    char email[100];
    int contact;

  public:
    void setdata(int id,char name[],char role[],int salary,char experience[],char address[],char email[],int contact)
	{
        this->id = id;
        strcpy(this->name,name);
        strcpy(this->role,role);
        this->salary = salary;
        strcpy(this->experience,experience);
        strcpy(this->address,address);
        strcpy(this->email,email);
        this->contact = contact;
    }
    
    int getdata() 
	{
        cout<<"id ="<<id<<endl
            <<"name ="<<name<<endl
            <<"role ="<<role<<endl
            <<"salary ="<<salary<<endl
            <<"experience ="<<experience<<endl
            <<"address ="<<address<<endl
            <<"email ="<<email<<endl
            <<"contact ="<<contact<<endl;
    }
    
};

int main()
{
       Employee e[5];
       for(int i=0;i<=5;i++)
	   {
            e[i].setdata();
       }
       for(int i=0;i<=5;i++)
       {
       	 e[i].getdata();
	   }
       return 0;
}
