#include <iostream>
using namespace std;

class drob
{
private:
	double _FirstNum;
	double _SecondNum;
	double result;
public:
	drob(double num1, double num2) : _FirstNum(num1), _SecondNum(num2){}

	void SetNum()
	{
		cout << "First num: " << endl;
		cin >> _FirstNum;
		cout << "First num: " << endl;
		cin >> _SecondNum;
	}

	void Add()
	{
		cout << _FirstNum + _SecondNum;
	}

	void Minus()
	{
		cout << _FirstNum - _SecondNum;
	}

	void Multyply()
	{
		cout << _FirstNum * _SecondNum;
	}

	void Delenie()
	{
		if (_SecondNum != 0)
		{
			cout << _FirstNum / _SecondNum;
		}
		else
		{
			cout << "No no no";
		}
	}
};


int main()
{
	drob num(5, 67);
	num.SetNum();
	num.Multyply();
}