#include <iostream>
#include<conio.h>


void main()
{
	clrscr();
	int mark[5], i;
	float sum = 0;
	cout << "Enter marks obtained in Physics, Chemistry, Maths, CS, English :";
	for (i = 0; i<5; i++)
	{
		cin >> mark[i];
		sum = sum + mark[i];
	}
	float avg = sum / 5;
	float perc;
	perc = (sum / 500) * 100;
	cout << "Average Marks = " << avg;
	cout << "\nPercentage = " << perc << "%";
	getch();
}