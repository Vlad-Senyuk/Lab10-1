#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	//1
	list<long> lst;
	int n;
	cout << "Input size massiv:" << endl;
	cin >> n;
	long *mas = new long[n];
	cout << endl;
	cout << "Input massiv: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> mas[i];
	}

	for (int i = 0; i < n; i++)
	{
		lst.push_back(mas[i]);
	}

	cout << endl;
	cout << "List: " << endl;

	copy(lst.begin(), lst.end(), ostream_iterator<long>(cout, " "));

	//2
	lst.clear();
	cout << endl;

	long *mas2 = new long[n];
	cout << endl;
	cout << "Input massiv: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> mas2[i];
	}

	for (int i = 0; i < n; i++)
	{
		lst.push_back(mas2[i]);
	}

	cout << endl;
	cout << "List: " << endl;

	copy(lst.begin(), lst.end(), ostream_iterator<long>(cout, " "));
	cout << endl;

	//3
	cout << endl;
	cout << "Iterator/output" << endl;
	list<long>::iterator p = lst.begin();
	cout << "List: " << endl;
	while (p != lst.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;

	//4
	cout << endl;
	list<long> lst2;
	int n2;
	cout << "Input size massiv:" << endl;
	cin >> n2;
	long *mas3 = new long[n2];
	cout << endl;
	cout << "Input massiv: " << endl;
	for (int i = 0; i < n2; i++)
	{
		cin >> mas3[i];
	}

	for (int i = 0; i < n2; i++)
	{
		lst2.push_back(mas3[i]);
	}

	cout << endl;
	cout << "List: " << endl;

	copy(lst2.begin(), lst2.end(), ostream_iterator<long>(cout, " "));
	cout << endl;

	//5
	int m;
	cout << "Input m: " << endl;
	cin >> m;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i >= m)
		{
			lst.pop_back();
		}
	}

	lst.splice(lst.end(), lst2); // функция для вставки в один контейнер элементов другого контейнера (1-ый параметр - итератор места вставки, 2-ой параметр - всавл. элем)
	cout << endl;
	cout << "List 1:" << endl;
	copy(lst.begin(), lst.end(), ostream_iterator<long>(cout, " "));
	cout << endl;
	cout << "List 2:" << endl;
	copy(lst2.begin(), lst2.end(), ostream_iterator<long>(cout, " "));
	cout << endl;

	return 0;
}
