#include<iostream>;
using namespace std;
struct nasabah{
int status;
char namaLengkap[50],alamatRumah [100], noHP[13];
};

int main(){
nasabah nab;
cout<<"status= ";cin>>nab.status;
cout<<"masukan nama= ";cin>>nab.namaLengkap;
cout<<"alamat rumah= ";cin>>nab.alamatRumah;
cout<<"No hp= ";cin>>nab.noHP;
cout<<endl;
return 0;

}
