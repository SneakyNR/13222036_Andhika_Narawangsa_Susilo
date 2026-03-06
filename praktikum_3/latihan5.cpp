//Nama          : Andhika Narawangsa Susilo
//NIM           : 13222036

#include <iostream>

// Class Induk (Base Class)  
class SensorDasar {  
private:   // diubah dari protected menjadi private
    int id_sensor;  
    double nilai_bacaan;

public:  
    SensorDasar(int id) {  
        id_sensor = id;  
        nilai_bacaan = 0.0;  
    }  

    void rekam(double data) {   
        nilai_bacaan = data;   
    }  
};

// Class Anak (Derived Class)
class SensorSuhu : public SensorDasar {  
public:  
    SensorSuhu(int id) : SensorDasar(id) {}

    void kalibrasiDanCetak() {  
        double kalibrasi = nilai_bacaan + 1.5;   
        std::cout << "Sensor Suhu ID " << id_sensor
                  << " | Kalibrasi: " << kalibrasi << " C\n";  
    }  
};

int main() {  
    SensorSuhu s1(99);  
    s1.rekam(35.0);  
    s1.kalibrasiDanCetak();  
      
    return 0;  
}