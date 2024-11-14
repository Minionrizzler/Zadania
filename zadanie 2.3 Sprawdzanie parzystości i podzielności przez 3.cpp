#include <iostream>
using namespace std;

int main() {
    int liczba;

    // Wczytanie liczby całkowitej
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    // Sprawdzenie, czy liczba jest parzysta
    if (liczba % 2 == 0) {
        cout << "Liczba " << liczba << " jest parzysta." << endl;
    } else {
        cout << "Liczba " << liczba << " nie jest parzysta." << endl;
    }

    // Sprawdzenie, czy liczba jest podzielna przez 3
    if (liczba % 3 == 0) {
        cout << "Liczba " << liczba << " jest podzielna przez 3." << endl;
    } else {
        cout << "Liczba " << liczba << " nie jest podzielna przez 3." << endl;
    }

    return 0;
}
