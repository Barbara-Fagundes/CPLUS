
#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
	double score, total;
	ifstream infile("input.txt");
	if (!infile)
	{
		cout << "unable to open file..so exiting from program " << endl;
		return 0;
	}
	// The input to the program must come from a file containing a single line with the score and total separated by a space.
	infile >> score >> total;
	double final_s = score * 100 / total;
	int final_score = static_cast<int> (ceil(final_s));
	// The final score should be rounded up to the nearest whole values using the ceil function in the <cmath> header file.
	// You should also display the floating -point result up to 5 decimal places.
	cout << "Final Score is " << fixed << setprecision(5) << final_s << endl;
	//In addition, you should print to the console "Excellent" if the grade is greater than 90, "Well Done" if the grade is greater than 80,
	// "Good" if the grade is greater than 70, "Need Improvement" if the grade is greater than or equal to 60, and "Fail" if the grade is less than 60.
	if (final_score >= 90)
		cout << "Excellent" << endl;
	else if (final_score >= 80)
		cout << "Well Done" << endl;
	else if (final_score >= 70)
		cout << "Good" << endl;
	else if (final_score >= 60)
		cout << "Need Improvemen" << endl;
	else if (final_score <60)
		cout << "Fail" << endl;
	system("pause");
	return 0;
}
