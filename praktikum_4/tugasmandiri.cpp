//Nama          : Andhika Narawangsa Susilo
//NIM           : 13222036

#include <iostream>
#include <vector>
#include <fstream>

int main() {

    // 1. Inisialisasi Struktur Data
    std::vector<double> sensor;

    // 2. Pengisian Data Awal
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    // 3. Proses Kalibrasi (kenaikan 10%)
    for (size_t i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;  // Kalibrasi +10%
    }

    // 4. Membuka File Output
    std::ofstream fileOutput("hasil_kalibrasi.txt");

    if (fileOutput.is_open()) {

        // 5. Menulis Hasil ke File
        for (size_t i = 0; i < sensor.size(); i++) {
            fileOutput << sensor[i] << std::endl;
        }

        fileOutput.close();
        std::cout << "Kalibrasi selesai. Data tersimpan di file hasil_kalibrasi.txt" << std::endl;

    } else {
        std::cout << "Gagal membuka file hasil_kalibrasi.txt" << std::endl;
    }

    return 0;
}