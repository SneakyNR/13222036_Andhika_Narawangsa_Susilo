//Nama          : Andhika Narawangsa Susilo
//NIM           : 13222036

#include <iostream>

class Titik2D {  
private:  
    double x, y;

public:  
    // Constructor
    Titik2D(double nilai_x, double nilai_y) {   
        x = nilai_x;  
        y = nilai_y;  
    }  
      
    void cetak() {   
        std::cout << "X: " << x << " | Y: " << y << std::endl;   
    }  
};

int main() {  
    // Objek dibuat tanpa argumen
    Titik2D titikA;   
    titikA.cetak();  
      
    return 0;  
}