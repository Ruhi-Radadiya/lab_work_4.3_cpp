//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)
#include<iostream>
#include<string.h>
using namespace std;

class daimonds{
	private :
		int id;
		char name[100];
		int staff_quantity;
		int revenue;
		int import_raw_diamonds;
		int export_diamonds;
		char ceo[100];
	public :
	daimonds(int id,char name,int staff_quantity,int revenue,int import_raw_diamonds,int export_diamonds,char ceo){
		this->id=id;
		this->name[100]=name;
		this->staff_quantity=staff_quantity;
		this->revenue=revenue;
		this->import_raw_diamonds=import_raw_diamonds;
		this->export_diamonds=export_diamonds ;
		this->ceo[100]=ceo;
		
		cout<<"____________HERE IT IS____________"<<endl;
		cout<<"Enter company's id:"<<id<<endl;
		cout<<"Enter company's name:"<<name<<endl;
		cout<<"Enter company's staff count:"<<staff_quantity<<endl;
		cout<<"Enter company's revenue per year:"<<revenue<<endl;
		cout<<"Enter import raw diamonds count:"<<import_raw_diamonds<<endl;
		cout<<"Enter company's Exported daoimonds:"<<export_diamonds<<endl;
		cout<<"Enter name of ceo:"<<ceo<<endl;

		}
		
};
int main(){
	int i,n;

	cout << "Enter N number:";
	cin>>n;

for(i=0;i<n;i++){
   	int id;
	char name[100];
	int staff_quantity;
	int revenue;
	int import_raw_diamonds;
	int export_diamonds;
	char ceo[100];

	cout<<"Enter company's id:"<<endl;
	cin>>id;
	cout<<"Enter company's name:"<<endl;
	cin>>name;
	cout<<"Enter company's staff count:"<< endl;
	cin>>staff_quantity;
	cout<<"Enter company's revenue per year:"<<endl;
	cin>>revenue;
	cout<<"Enter import raw diamonds count:"<<endl;
	cin>>import_raw_diamonds;
	cout<<"Enter company's Exported daoimonds:"<<endl;
	cin>>export_diamonds;
	cout<<"Enter name of ceo:"<<endl;
	cin>>ceo;
	cout<<"____________________________________________________"<<endl;
	daimonds d(id,name[100],staff_quantity,revenue,import_raw_diamonds,export_diamonds,ceo[100]);
}

return 0;

}