#include <iostream>
using namespace std;

struct Srgb
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
};

union UColor
{
	unsigned int val;
	Srgb components;
	unsigned char tabCol[3];
};

void main()
{
	cout << "PROGRAMME RGB" << endl;

	UColor colorVal;
	colorVal.val = 100 * 256 * 256 + 15 * 256 + 130;
	colorVal.components.g = 200;
	cout << sizeof(colorVal) << endl;
}