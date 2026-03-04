//Nama          : Andhika Narawangsa Susilo
//NIM           : 13222036

#include <iostream>
using namespace std;

class RekeningBank {
private:
    double saldo;  // saldo private

public:
    // Constructor dengan saldo awal 0
    RekeningBank() {
        saldo = 0;
    }

    // Method setor
    void setor(double jumlah) {
        saldo += jumlah;
        cout << "Setoran berhasil. Saldo sekarang: " << saldo << endl;
    }

    // Method tarik
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            cout << "Penarikan Gagal. Saldo tidak cukup." << endl;
        } else {
            saldo -= jumlah;
            cout << "Penarikan berhasil. Sisa saldo: " << saldo << endl;
        }
    }

    // Method untuk menampilkan saldo saat ini
    void tampilSaldo() {
        cout << "Saldo saat ini: " << saldo << endl;
    }
};

int main() {
    RekeningBank rekening;  // saldo awal 0
    int pilihan;
    double jumlah;

    do {
        cout << "\n=== Menu Rekening Bank ===" << endl;
        cout << "1. Setor" << endl;
        cout << "2. Tarik" << endl;
        cout << "3. Cek Saldo" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan jumlah setoran: ";
                cin >> jumlah;
                rekening.setor(jumlah);
                break;
            case 2:
                cout << "Masukkan jumlah penarikan: ";
                cin >> jumlah;
                rekening.tarik(jumlah);
                break;
            case 3:
                rekening.tampilSaldo();
                break;
            case 0:
                cout << "Terima kasih telah menggunakan layanan kami!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 0);

    return 0;
}