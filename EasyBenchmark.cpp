// made with <3 by kilian.#0001

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int input();
int calculation();
int output();

double g = 0; // This is the maximum to count.
double s = 1; // This is the 0.001 for Example.
double tmp = 0; // A normal Temp
int r = 0; // The remainde for the clear in line 45
int modulo = 100; // Default 100. It clears the console while counting
double zeit = 0; // For the timer

int debug = 1; // Debug on = 1 / Debug off = 0 I Let it on. Otherwise you have to take a realy high increment or maximum to see an effect.

int main() {
    system("title EasyBenchmark.exe");
    input();
    auto start = high_resolution_clock::now();
    calculation();
    auto stop = high_resolution_clock::now();
    output();
    auto duration =duration_cast<microseconds>(stop - start);
    zeit = duration.count() / 1000000;
    cout << "The Programm has taken " << zeit << "seconds." << endl;
    system("PAUSE");
    system("cls");
    main();
}

int input() {
    cout << "Give the maximum amount to count and the increment. \nMax Amount: "; cin >> g; cout << "Increment: "; cin >> s;
    return(0);
}

int calculation() {
    for (int i = 0; tmp < g; i++) {
        r = i % 100;
        tmp = tmp + s;
        if (debug == 1)
            cout << tmp << endl;
        if (r == 0)
            system("cls");
    }
    return(0);
}

int output() {
    cout << "Done!" << endl;
    return(0);
}