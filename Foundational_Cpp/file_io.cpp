#include <iostream>
#include <fstream>

int main(){
    std::ifstream file("Consultation_Paper_Telecom.txt");
    int count = 0; char c;

    while (file.get(c)) if (c != ' ' && c != '\n') count++;
    
    std::cout << "Total Characters (excluding spaces): " << count << std::endl;

}