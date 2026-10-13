#include <iostream>
using namespace std;

class WiFi {
public:
    void connect() {
        cout << "Connected through WiFi" << endl;
    }
};

class Bluetooth {
public:
    void connect() {
        cout << "Connected through Bluetooth" << endl;
    }
};

class SmartHub : public WiFi, public Bluetooth {
public:
    void control() {
        WiFi::connect();
        Bluetooth::connect();
    }
};

int main() {
    SmartHub hub;
    hub.control();

    return 0;
}
