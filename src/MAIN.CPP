#include "GLOBALS.H"

 int main()
 {
    std::ifstream infile;

    infile.open("infile.txt", std::ios::in);

    infile.getline();
    infile.close();
    return 0;
 }