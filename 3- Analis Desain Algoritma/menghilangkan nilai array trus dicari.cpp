#include <iostream>
using namespace std;
int main()
{
	int i,x,nilai[100],hapus,hasil_hapus;
	cout<< ("panjang array : "); 
	cin >>x;
	     for (i =0;i<x;i++)
	     {
	         cout<<"indeks "<<i+1<<" : "; 
			 cin>> nilai[i];
	     }
	cout << "\n";
	cout<<"nilai yang akan dihapus:"; 
	cin>>hapus;
	cout << "\n";
	cout<<"nilai "<<hapus<<" berhasil dihapus!";
	cout << "\n";
	cout<<"nilai sekarang: ";
	 	{
	    for(i=0; i<x; i++)
		if(nilai[i] == hapus)
	        {
	        hasil_hapus = hasil_hapus + 1;    
	        }
	    else
	    	{
			cout<<nilai[i]<<" ";
			}
		}
	cout<<"\n";
	cout<<"nilai yang dihapus adalah: "<<hapus;
}
