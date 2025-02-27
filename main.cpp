#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    cout << "Your kitten now has zoomies" << endl;
    this_thread::sleep_for(chrono::seconds(5));
    cout << "Your kitten is now tired" << endl;
}
// Output: Your kitten now has zoomies
//         Your kitten is now tired
// cat has zoomies for 5 seconds and then is tired
