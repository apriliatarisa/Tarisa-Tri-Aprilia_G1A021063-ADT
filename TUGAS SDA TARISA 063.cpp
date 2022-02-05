#include <iostream>
using namespace std;

int main (){
	int r,t;
	float phi=3.14;
	float volume;
	
cout<<"===VOLUME KERUCUT==="<<endl<<endl<<endl;
cout<<"PHI = 3.14" <<endl<<endl;
cout<<"MASUKKAN NILAI JARI-JARI : ";
cin>>r;

cout<<"MASUKKAN NILAI TINGGI : ";
cin>>t;

volume= (phi*r*r*t)/3;
cout<<"VOLUME : " <<volume;

return 0;
}
