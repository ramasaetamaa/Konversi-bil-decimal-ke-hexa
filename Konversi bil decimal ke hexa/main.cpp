#include <iostream>
#include <string>

using namespace std;

string konversi(int dec);


int main() {
    int Decimal;
    cout << "\tProgram mengkonversi nilai Decimal ke Hexa\n\n ";
    cout << "Input bilangan Desimal : ";
    cin >> Decimal;

    string Hexa = konversi(Decimal);
    cout << "Hasil konversi ke Hexa : " << Hexa << endl;

    system("pause");
    return 0;
}



string konversi(int dec)
{
    string hex = "";
    while (dec > 0)
    {
        int sisa = dec % 16;
        char x;

        if (sisa >= 10) {
            x = sisa - 10 + 'A';
        }
        else {
            x = sisa + '0';
        }

        hex = x + hex;

        dec /= 16;
    }
    return hex;
}