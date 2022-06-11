#include <iostream>
#include <list>
#include <ctime>

using namespace std;

void create(list<int>& list, int n)
{
	for (int i = 0; i < n; i++)
		list.push_back(rand() % 100 - 50);
}

void print(list<int> list, int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = list.front();
		list.pop_front();
		cout << k << " ";
		list.push_back(k);
	}
	cout << endl;
}

void remove(list<int> list, int n, int element)
{
	for (int i = element + 1; i < n; i++)
	{
		list.pop_back();
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int n;
	cout << "n : "; cin >> n;

	list<int> arr;

	create(arr, n);
	print(arr, n);

	int element;
	cout << "Enter index : "; cin >> element;

	remove(arr, n, element);

	print(arr, element+1);

	return 0;
}
