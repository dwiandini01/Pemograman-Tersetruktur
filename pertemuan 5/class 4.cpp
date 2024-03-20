#include <iostream>
using namespace std;

class Mahasiswa {
	public:
	   string nama,npm;
	   
	   Mahasiswa(string nama, string b){
	   	this->nama = nama;
	   	 this->npm = b;
	   }
	   
			
};

int main(){
	Mahasiswa Mhs( "andini","2317051025");
	
	cout << "Nama:" << Mhs.nama << endl;
	cout << "Npm:" << Mhs.npm<< endl;
	
}
