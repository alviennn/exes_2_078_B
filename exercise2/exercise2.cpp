#include <iostream>
using namespace std;

int alvien[110];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array :  ";
		cin >> n;
		if ((n > 0) && (n <= 110))
			break;
		else cout << "\narray should have minimum 1 and maximum 110 element.\n\n";

	}

	cout << "\n---------------------\n";
	cout << " enter array element \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> alvien[i];
	}
}

void binarysearch()
{
	int alvien = 0;
	int ridho = n - 1;
	int item;

	do
	{
		cout << "\nenter the element you want to search: ";
		int item;
		cin >> item;
	}

	while (alvien <= ridho) {
		int mid = (alvien + rihdo) / 2;

		if (alvien[mid] == desired_element) {
			cout << "found" << endl;
			return;
		}
		if (desired_element < alvien[mid]
			 ridho = mid - 1;

	}

}

int main()
{
	input();
	void binarysearch();
	return 0;
}