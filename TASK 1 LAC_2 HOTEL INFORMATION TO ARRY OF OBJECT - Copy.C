
#include<iostream>
using namespace std;
class customers {  

     private:
      	int hotel_id;
      	char hotel_name[34];
      	char hotel_type[10];
      	int hotel_rating;
      	string hotel_location;
      	int hotel_established_year;
      	int hotel_staff_quantity;
      	int hotel_room_quantity;
    public:
        void setdata ();
        void getdata ();
};

void customers :: setdata(){
	cout<<"enter the hotel_id :";
	cin>>hotel_id;
	cout<<"enter the hotel_name :";
	cin>>hotel_name;	
	cout<<"enter the hotel_type:";
	cin>>hotel_type;
	cout<<"enter the hotel_rating:";
	cin>>hotel_rating;
	cout<<"enter the hotel_location:";
	cin>>hotel_location;
	cout<<"enter the hotel_established_year:";
	cin>>hotel_established_year;
	cout<<"enter the hotel_staff_quantity :";
	cin>>hotel_staff_quantity;
	cout<<"enter the hotel_room_quantity :";
	cin>>hotel_room_quantity;
	
}

void customers ::getdata(){
	cout<<hotel_id<<endl;
	cout<<hotel_name<<endl;
	cout<<hotel_type<<endl;
	cout<<hotel_rating<<endl;
	cout<<hotel_location<<endl;
	cout<<hotel_established_year<<endl;
	cout<<hotel_staff_quantity<<endl;
	cout<<hotel_room_quantity<<endl;
	
	
	
}

 int main(){
	customers obj[100];
	int i,n;
	for (i=0;i<5;i++){
	obj[i].setdata();
	}
	cout<<"\n\ngive the information hear :";
   
	for (i=0;i<5;i++){
	obj[i].getdata();
	}
	
 }
