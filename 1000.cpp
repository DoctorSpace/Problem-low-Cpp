#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ofstream file_out;
    file_out.open("Data.txt");
 

    for (int i = 0; i < 100; i++) {

        file_out << i << ". ТЕКСТ" << endl;

    }
}
