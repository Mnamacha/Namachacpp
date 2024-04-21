#include <iostream>
#include <string>
using namespace std;
int main() {
    string namacha[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int size = sizeof(namacha); 
    for (int i = 0; i < size; ++i) {
        if (namacha[i][0] == 'B') {
            cout << namacha[i] <<endl;
        }
    }

    return 0;
    }
