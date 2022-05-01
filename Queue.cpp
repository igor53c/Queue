// Queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>

using namespace std;

int main()
{
	int q;
	string line;
	
	getline(cin, line);

	q = stoi(line);

	queue<int> schlange;

	for (int i = 0; i < q; i++)
	{
		getline(cin, line);

		if (line.length() == 1)
		{
			int num = stoi(line);

			if (num == 2)
			{
				schlange.pop();
			}
			else 
			{
				cout << schlange.front() << endl;
			}
		}
		else
		{
			line = line.substr(2);

			int num2 = stoi(line);

			schlange.push(num2);
		}
	}

	return EXIT_SUCCESS;
}
