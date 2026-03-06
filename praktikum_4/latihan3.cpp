//Nama          : Andhika Narawangsa Susilo
//NIM           : 13222036

#include <iostream>
#include <vector>

int main() {  
    std::vector<int> data = {10, 20, 30, 40};  

    for(int i = 0; i < data.size(); i++) {  
        int total = 0;   // dipindahkan ke dalam loop
        total = total + data[i];   
        std::cout << "Total Akumulasi: " << total << std::endl;
    }

    return 0;  
}