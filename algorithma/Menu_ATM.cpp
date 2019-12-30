#include<iostream>
using namespace std;
int main()
{
	cout<<"pilih dana"<<endl;
	cout<<"1. tarik dana"<<endl;
	cout<<"2. tranfer dana"<<endl;
	cout<<"3. cek dana"<<endl;
	
	int menu;
	cout<<"Pilih Menu = "; cin>>menu;
	if (menu==1) {
		cout<<"tarik dana";
	} 
	else if (menu==2) {
		cout<<"transfer dana";
	} 
	else if (menu==3) {
		cout<<"cek dana";
	} 
	else {
		cout<<"menu tidak ada";	
	}
	return 0;
	}
