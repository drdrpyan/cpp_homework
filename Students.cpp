#include "Students.h"
#include <iostream>
using std::cout;
using std::endl;

Student::Student(void)
{
	Basic = 3;
}
void Student::getSubject(double* score)
{
}
void Student::setSubject(double score[])
{
}
double Student::sumOfScore()
{
	return Basic;
}
void Student::Print()
{
}
Student::~Student(void)
{
}

void StudentA::getSubject(double* score)
{
	score[0] = Basic;
	score[1] = A;
}
void StudentA::setSubject(double score[])
{
	Basic = score[0];
	A = score[1];
}

double StudentA::sumOfScore()
{
	double total;
	total = Basic + A;
	return total;
}
void StudentA::Print()
{
	double total = sumOfScore();
	cout << "Basic : " << Basic << endl;
	cout << "A : " << A << endl;
	cout << "total : " << total << endl;
}


void StudentB::getSubject(double* score)
{
	score[0] = Basic;
	score[1] = B;
}
void StudentB::setSubject(double score[])
{
	Basic = score[0];
	B = score[1];
}

double StudentB::sumOfScore()
{
	double total;
	total = Basic + B;
	return total;
}
void StudentB::Print()
{
	double total = sumOfScore();
	cout << "Basic : " << Basic << endl;
	cout << "B : " << B << endl;
	cout << "total : " << total << endl;
}