#ifndef MOTHER_H
#define MOTHER_H

class Mother
{
private: // Only Class can access
	int privatev;

public: // All can access
	int publicv;
	Mother();

protected: // Only Class + friend + inherit can access
	int protectedv;
};
#endif