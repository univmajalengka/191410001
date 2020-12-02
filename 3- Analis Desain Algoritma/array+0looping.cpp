#include <iostream>
using namespace std;
int main()
{
	int angka[100] = {};
	int  a, i, j, n, p;
    cout<<"panjang = ";
	cin>>p;
	for(int i=0; i<p;i++)
	{
     cout<<"nilai indeks ["<<i<<"] = ";
	 cin>>angka[i];
    }
    cout << "\n";
    n = p-2;
      for (i = n; i >= 1; i--)
      {
      	for(int a; a < p ;a++)
		{
      		cout<< angka[a];
      	
            for (j = a; j <= i; j++)
            {
            		
				  cout <<"0";
            }
            cout << "\n";
        }
  	  }
      return 0;
}
