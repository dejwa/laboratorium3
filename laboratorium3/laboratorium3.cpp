// laboratorium3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>

using namespace std;

void zadanie1() {
    float a, b;
    cout << "Podaj pierwsza liczbe: ";
        cin >> a;
    cout << "Podaj druga liczbe: ";
        cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Roznica: " << a - b << endl;
    cout << "Iloczyn: " << round(a*b*100)/100 << endl;
    cout << "Iloraz: " << round(a/b*100)/100 << endl;
}
void zadanie2() {
    char znak;
    cout << "Zacznij petle naciskajac jakis klawisz" << endl;
        cin >> znak;
    while (znak!='t') {
        cout << znak << endl;
        cin >> znak;
    }
    cout << "Mamy to! Koniec programu...." << endl;
}
void zadanie3() {
    int A, B, C;
    float delta, x1, x2;
    cout << "Ax^2 + Bx + C" << endl;
    cout << "Podaj kolejno A,B i C:" << endl;
    cin >> A;
    cin >> B;
    cin >> C;

    cout << endl << A << "x^2 + " << B << "x + " << C << endl;

    delta = (B * B) - (4 * A * C);
    
    if (delta > 0) {
        x1 = (B*-1 + sqrt(delta)) / (2 * A);
        x2 = (B*-1 - sqrt(delta)) / (2 * A);
        cout << x1 << ' ' << x2 << endl;
    }else
        if (delta == 0) {
            x1 = B * -1 / 2 * A;
            cout << x1 << endl;
        }
        else {
            cout << "Delta ujemna!" << endl;
        }
}
//zadanie4
int silnia(int x) {
    int iSilnia = 1;
    for (int i = x;i > 1;i--) {
        iSilnia *= i;
    }
    return iSilnia;
}
int NpoK(int n, int k) {
    return silnia(n) / (silnia(k) * silnia(n - k));
}
void zadanie4() {
    int ilosc;
    cout << "Podaj ilosc wierszy do trojkata Pascala" << endl;
    cin >> ilosc;

    for (int iRow = 0;iRow <= ilosc;iRow++) {
        for (int iCol = 0; iCol <= iRow;iCol++) {
            cout << NpoK(iRow,iCol) << ' ';
        }
        cout << endl;
    }
}


int main()
{

    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();
}

