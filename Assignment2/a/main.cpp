/*
*Anastasia Cherkasova
*st140594@student.spbu.ru
*Assignment2a
*/
#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    //open file
    std::ifstream infile;
    infile.open("source.pdf",std::ios::binary|std::ios::in);

    //size file
    size_t sizef = std::filesystem::file_size("source.pdf");
    std::cout << "File size: " << sizef << "\n";

    // Allocate memory
    char* buffer = new char[sizef];

    // read file
    infile.read(buffer, sizef);
    infile.close();

    //reverse
    for (size_t i=0; i < sizef / 2; i++) {
        char temp = buffer[i];
        buffer[i] = buffer[sizef - i - 1];
        buffer[sizef - i - 1] = temp;
}
    //new file
    std::ofstream outfile;
    outfile.open("temppdf.pdf", std::ios::binary);
    outfile.write(buffer, sizef);
    outfile.close();

    //clear
    delete[] buffer;

    return 0;
}
