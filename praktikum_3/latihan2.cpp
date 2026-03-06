//Nama          : Andhika Narawangsa Susilo
//NIM           : 13222036

#include <iostream>

class Partikel {  
public:  
    // Atribut sekarang public
    double posisi_x, posisi_y;

    void aturPosisi(double x, double y) {  
        posisi_x = x;  
        posisi_y = y;  
    }  
      
    void bergerak(double geser_x, double geser_y) {  
        posisi_x += geser_x;  
        posisi_y += geser_y;  
    }  
      
    void tampilkanPosisi() {  
        std::cout << "Posisi: (" << posisi_x << ", " << posisi_y << ")" << std::endl;  
    }  
};

int main() {  
    Partikel p1;
      
    p1.aturPosisi(0.0, 0.0);  
    p1.bergerak(2.5, 3.0);  
    p1.tampilkanPosisi();  

    p1.posisi_x = 100.0;  
      
    return 0;  
}