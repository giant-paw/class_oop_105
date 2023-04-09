#include <iostream>
using namespace std;

class mahasiswa {
public :
	string nim, nama;

public :
	void cetak() {
		cout << "\nNIM : " << nim;
		cout << "\nNama : " << nama;
		cout << endl;
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
	mahasiswa mhs1;
	matakuliah mk;

	cout << "Masukkan Nama Mahasiswa : ";
	cin >> mhs1.nama;
	cout << "Masukkan NIM Mahasiswa : ";
	cin >> mhs1.nim;
	mhs1.cetak();

	mk.input();
	mk.tampil();
}