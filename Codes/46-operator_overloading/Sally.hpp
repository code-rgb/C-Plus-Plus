#ifndef SALLY_H
#define SALLY_H

class Sally
{
private:
public:
	int num;
	Sally();
	Sally(int);
	Sally operator+(Sally);
};
#endif