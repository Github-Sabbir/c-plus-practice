#include <iostream>
using namespace std;

// Base class 1
class AC {
protected:
    float acUnit;
public:
    void getAC() {
        cout << "Enter AC unit: ";
        cin >> acUnit;
    }
};

// Base class 2
class Fridge {
protected:
    float frUnit;
public:
    void getFridge() {
        cout << "Enter Fridge unit: ";
        cin >> frUnit;
    }
};

// Base class 3
class TV {
protected:
    float tvUnit;
public:
    void getTV() {
        cout << "Enter TV unit: ";
        cin >> tvUnit;
    }
};

// Base class 4
class Fan {
protected:
    float fanUnit;
public:
    void getFan() {
        cout << "Enter Fan unit: ";
        cin >> fanUnit;
    }
};

// Base class 5
class Light {
protected:
    float lightUnit;
public:
    void getLight() {
        cout << "Enter Light unit: ";
        cin >> lightUnit;
    }
};

// Base class 6
class Charger {
protected:
    float chUnit;
public:
    void getCharger() {
        cout << "Enter Charger unit: ";
        cin >> chUnit;
    }
};

// Derived class (Multiple Inheritance)
class Total : public AC, public Fridge, public TV, public Fan, public Light, public Charger {
public:
    void showTotal() {
        float sum = acUnit + frUnit + tvUnit + fanUnit + lightUnit + chUnit;

        cout << "\n====================\n";
        cout << "Total Units = " << sum << " kWh";
        cout << "\n====================\n";
    }
};

int main() {
    Total obj;

    obj.getAC();
    obj.getFridge();
    obj.getTV();
    obj.getFan();
    obj.getLight();
    obj.getCharger();

    obj.showTotal();

    return 0;
}
