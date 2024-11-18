#include <string>

using namespace std;

class Car {
public:
    const string brand;
    const string model;
    const int year;
    int totalkilometers;
    const string fueltype;
    const string transmission;
    const float consumption;
    const string color;
    const bool electric;
    string licenseplate;
    const string vin;
    bool isavailable;

    Car(const string brand, 
        const string model, 
        const int year, 
        int totalkilometers, 
        const string fueltype, 
        const string transmission,
        const float consumption, 
        const string color, 
        const bool electric, 
        string licenseplate,
        const string vin, 
        bool isavailable
        ): 
        brand(brand), 
        model(model), 
        year(year), 
        totalkilometers(totalkilometers), 
        fueltype(fueltype), 
        transmission(transmission),
        consumption(consumption),
        color(color),
        electric(electric),
        licenseplate(licenseplate),
        vin(vin),
        isavailable(isavailable)
        {};
    
    void updateKilometers(int kilometers) {
        totalkilometers += kilometers;
    }
    
    void changeLicensePlate(int newLicensePlate) {
        licenseplate = newLicensePlate;
    }

    void changeAvailability() {
        isavailable = !isavailable;
    }
};