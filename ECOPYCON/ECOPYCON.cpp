#include <iostream>

using namespace std;

class Distance
{
public:
	Distance() : feet(0), inches(0.0)
	{

	}

	Distance(int ft, float in) : feet(ft), inches(in)
	{

	}

	void getdist()
	{
		cout << "Enter number of feet: ";
		cin >> feet;
		cout << "Enter number of inches: ";
		cin >> inches;
	}

	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}

private:
	int feet;
	float inches;
};



int main()
{
	Distance dist1(11, 6.25);
	Distance dist2(dist1);
	Distance dist3 = dist1;


	cout << "dist1 = ";
	dist1.showdist();
	cout << "\ndist2 = ";
	dist2.showdist();
	cout << "\ndist3 = ";
	dist3.showdist();
	cout << endl;

	system("pause");
	return 0;
}
