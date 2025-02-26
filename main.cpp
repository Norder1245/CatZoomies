#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Your kitten now has zoomies" << endl;
    this_thread::sleep_for(chrono::seconds(5));
    cout << "Your kitten is now tired" << endl;
}