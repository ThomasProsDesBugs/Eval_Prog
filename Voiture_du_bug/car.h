#pragma once
#include <iostreams>
#include <string>
#include "Color.h"

using namespace std;

class Car
{
	string brand;
	string model;
	string licensePlate;
	Color carColor;
	unsigned int km;
	float carPrice;
	
	Car();
	Car(string brand, string model, string licensePlate, unsigned int km, float carPrice, Color carColor);
	~Car();
	string GetBrand();
	string GetModel();
	string GetLicensePlate();
	unsigned int GetKm();
	float GetCarPrice();
};