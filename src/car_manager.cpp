#include "../include/car_manager.h"

void CarManager::addCar(const string brand,const string model, const int year, int totalkilometers, const string fueltype,
                        const string transmission, const float consumption, const string color, 
                        const bool electric, string licenseplate, const string vin, bool isavailable) 
{
    Car newCar(brand, model, year, totalkilometers, fueltype, transmission, consumption, color, electric,
               licenseplate, vin, isavailable);
    cars.push_back(newCar);
};