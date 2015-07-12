#include "Students.h"
#include <iostream>

int main()
{
	double d1[2] = {4, 4};
	double d2[2] = {4, 1.2};

	Student* s[2];
	s[0] = new StudentA;
	s[0]->setSubject(d1);
	s[1] = new StudentB;
	s[1]->setSubject(d2);

	std::cout << "s[0]" << std::endl;
	s[0]->Print();
	std::cout << "s[1]" << std::endl;
	s[1]->Print();

	system("pause");
	return 0;
}