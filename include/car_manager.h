#include <vector>
#include <string>
#include "car.h"

using namespace std;

class CarManager {
private:
    vector<Car> cars;

public:
    void addCar(const string brand, const string model, const int year, int totalkilometers,
                const string fueltype, const string transmission, const float consumption,
                const string color, const bool electric, string licenseplate, const string vin,
                bool isavailable);
};