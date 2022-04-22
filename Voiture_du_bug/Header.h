
#pragma once
#include <string>
#include <vector>

class Person
{
	string firstName;
	string lastName;
	string birthDate;
	string gender;
	string car;
	float money;
	Person();
	Person(string name, string lastName, string birthDate, string gender, float money, string car);
	~Person();
	string GetFirstName();
	string GetLastName();
	string GetBirthName();
	string GetGender();
	string GetCar();
	float GetMoney();

}
	
	
;