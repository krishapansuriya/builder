#include<iostream>
#include<string.h>
using namespace std;
class Hotel{
	private :
		int hotel_id;
		char name[100];
		int staff_size;
		int room_size;
		int establish_year;
		char rating_type[100];
		char hotel_address[100];
		
	public :
		void setdata(int hotel_id,char name[],int staff_size,int room_size,int establish_year,char rating_type[],char hotel_address[])
		{
			this->hotel_id = hotel_id;
			strcpy(this->name,name);
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->establish_year = establish_year;
			strcpy(this->rating_type,rating_type);
			strcpy(this->hotel_address,hotel_address);
		}
		void getdata()
		{
			cout<<"id = "<<hotel_id<<endl
			    <<"name = "<<name<<endl
			    <<"staff size = "<<staff_size<<endl
			    <<"room size = "<<room_size<<endl
			    <<"establish year = "<<establish_year<<endl
			    <<"rating = "<<rating_type<<endl
			    <<"hotel_address = "<<hotel_address<<endl;
		}
};
int main()
{
	Hotel h;
	h.setdata(1,"taj",150,300,1999,"5star","mumbai");
	h.getdata();
}
