#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	string nama;
	int jumlah;
	string tipe;
	Node* next;

	Node(const string& n, int j, const string& t) {
		nama = n;
		jumlah = j;
		tipe = t;
		next = NULL;
	}
};
class ManajemenProduk {
private:
	Node* head;
public:
	ManajemenProduk() {
		head = NULL;
	}
	void tambahProduk() {
		string nama;
		int jumlah;
		string tipe;
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		Node* newNode = new Node(nama, jumlah, tipe);
		newNode->next = head;
		head = newNode;
		cout << "Produk berhasil ditambahkan!" << endl;
	}
	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = head;
			while (current != NULL)
				cout << "Nama Produk : " << current->nama << endl;
			cout << "Jumlah Produk : " << current->jumlah << endl;
			cout << "Tipe Produk : " << current->tipe << endl;
			cout << endl;
			current = current->next;
		}
	}
	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (head == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = head;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				if (current->nama == targetNama) {
					cout << "Nama Produk : " << current->nama << endl;
					cout << "Jumlah Produk : " << current->jumlah << endl;
					cout << "Tipe Produk : " << current->tipe << endl;
					cout << "Ditemukan pada posisi : " << posisi << endl;
					return;
				}
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}
	void algorithmaSortByJumlahProduk() {
		if (head == NULL || head->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current;
		Node* last = NULL;
		current = head;

		while (!isSorted) {
			isSorted = true;
			current = head;

		}
	}
};

int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			manajemenProduk.tambahProduk();
			break;
		case 2:
			manajemenProduk.tampilkanSemuaProduk();
			break;
		case 3:
			manajemenProduk.cariProdukByNama();
			break;
		case 4:
			manajemenProduk.algoritmaSortByJumlahProduk();
			cout << "Produk berhasil diurutkan berdasarkan jumlah." << endl;
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;

	


//2.Algoritma untuk menambahkan produk ke dalam linked list.
//	Algoritma untuk mencari produk berdasarkan nama.
//	Algoritma sorting berdasarkan jumlah produk menggunakan algoritma Bubble Sort.
//3.indeks front akan menunjukkan elemen depan dalam antrian.
//	indeks rear akan menunjukkan elemen belakang dalam antrian.
//4.Algoritma stack digunakan ketika kita ingin menerapkan struktur data Last - In - First - Out(LIFO).
//5.a.5
//	b.menurut saya sendiri dengan menghitung keatas / kesamping