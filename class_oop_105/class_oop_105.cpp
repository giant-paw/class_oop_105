#include <iostream>
using namespace std;

class mahasiswa {
public :
	string nim, nama;

public :
	void cetak() {
		cout << "NIM : " << nim;
		cout << "Nama : " << nama;
	}
};

class matakuliah {
private:
	string namaM, kode, sks;

public:
	void input() {
		cout << "Masukkan Nama Matkul : ";
		cin >> namaM;

		cout << "Masukkan kode Matkul : ";
		cin >> kode;
		cout << "Jumlah SKS : ";
		cin >> sks;
	}

	void tampil() {
		cout << "Nama Matkul : " << namaM;
		cout << "Kode " << kode;
		cout << "Jumlah SKS : " << sks;
	}
};

int main() {
	cout << "Hello World"
}