#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


void OpenFile(ifstream& grades);
void Grades(ifstream &, float&, float&, float&, float&, float &);
int main()
{
	ifstream grades;
	float grade1, grade2, gradesum, finalgrade, gradepercentage;
	grades.open("grades.dat");

	Grades(grades, grade1, grade2, gradesum, finalgrade, gradepercentage);
	return 0;
}

void OpenFile(ifstream& grades)
{
	ifstream grades;
	grades.open("grades.dat");
	string name;
	getline(grades, name);
}

void Grades(ifstream& grades, float& grade1, float& grade2, float& gradesum, float& finalgrade, float& gradepercentage)
{
	int x;
	x = 0;
	ifstream grades;
	grades.open("grades.dat");
	string name;
	while (x<6)
	{
		cin >> name >> grade1 >> grade2;
		gradesum = grade1 + 2;
		finalgrade = gradesum / 120;
		gradepercentage = finalgrade * 100;
		cout << name << " " << gradepercentage << "% " << finalgrade;
		x++;
	}
	system("pause");
}