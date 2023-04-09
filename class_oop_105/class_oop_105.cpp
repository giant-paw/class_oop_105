#include <iostream>
using namespace std;

class mahasiswa {
public :
	string nim, nama;

public: 
		void input() {
			cout << "\nMasukkan Nama Mahasiswa : ";
			cin >> nama;
			cout << "\nMasukkan NIM : ";
			cin >> nim;
		}

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
		cout << "\nMasukkan Nama Matkul : ";
		cin >> namaM;

		cout << "\nMasukkan kode Matkul : ";
		cin >> kode;
		cout << "\nJumlah SKS : ";
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

	mhs1.input();
	mhs1.cetak();

	mk.input();
	mk.tampil();
}