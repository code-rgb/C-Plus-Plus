#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "Birthday.hpp"
#include "People.hpp"

class People
{
private:
	string name;
	Birthday dateOfBirth;

public:
	People(string x, Birthday bo);
	void printInfo();
};
#endif