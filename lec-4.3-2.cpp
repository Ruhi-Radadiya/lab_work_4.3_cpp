/*
2. WAP to get and display N numbers of Fast Food cafe
information using encapsulation and use of default
constructor by including below mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity
*/
#include<iostream>
#include<string.h>

using namespace std;

class cafe
{
	
	private :
		int cafe_id;
		char cafe_name[100];
		char cafe_type [100];
		int cafe_rating;
		char cafe_location[100];
	    int cafe_establish_year;
		int cafe_staff_quantity;
		int n;
	public :
	
		cafe(int b)
		{
			this->n=b;
			int i,a,n;
		
			cout<<"Enter count of cafe :- "<<endl;
			cin>>n;
			
			for(i=0;i<n;i++)
			{
			    int cafe_id;
				char cafe_name[100];
				int cafe_type [100];
				int cafe_rating;
				char cafe_location[100];
			    int cafe_establish_year;
				int cafe_staff_quantity;
				
				cout<<"Enter id of cafe : "<<endl;
				cin>>cafe_id;
				cout<<"Enter name of cafe : "<<endl;
				cin>>cafe_name;
				cout<<"Enter type of cafe : "<<endl;
				cin>>cafe_type;
				cout<<"Enter caferating : "<<endl;
				cin>>cafe_rating;
				cout<<"Enter cafe location : "<<endl;
				cin>>cafe_location;
				cout<<"Enter cafe establish year : "<<endl;
				cin>>cafe_establish_year;
				cout<<"Enter cafe staff count : "<<endl;
				cin>>cafe_staff_quantity;
			}
		}
};

int main()
{
	int n;
	cout<<"Enter count of cafe :- "<<endl;
	cin>>n;
	cafe c(n);
	
}