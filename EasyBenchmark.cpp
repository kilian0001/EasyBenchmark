#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int eingabe();
int berechnung();
int ausgabe();

double g = 0;
double s = 1;
double tmp = 0;
int t = 0;
double zeit = 0;

int debug = 1; // Debug an = 1 / Debug aus = 0

int main() {
    system("title EasyBenchmark.exe");
    eingabe();
    auto start = high_resolution_clock::now();
    berechnung();
    auto stop = high_resolution_clock::now();
    ausgabe();
    auto duration =duration_cast<microseconds>(stop - start);
    zeit = duration.count() / 1000000;
    cout << "Das Programm hat " << zeit << "s gebraucht," << endl;
    system("PAUSE");
    system("cls");
    main();
}

int eingabe() {
    cout << "Geben Sie die Grenze und Schrittweite an \nGrenze: "; cin >> g; cout << "Schrittweite: "; cin >> s;
    return(0);
}

int berechnung() {
    for (int i = 0; tmp < g; i++) {
        t = i % 100;
        tmp = tmp + s;
        if (debug == 1)
            cout << tmp << endl;
        if (t == 0)
            system("cls");
    }
    return(0);
}

int ausgabe() {
    cout << "Fertig" << endl;
    return(0);
}