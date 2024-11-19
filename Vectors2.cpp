#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int num;
	vector<vector<int>> numbers;
	vector<int> temp;

	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			cout << "Enter row # " << (r + 1) << " columns # " << (c + 1) << " --> ";
			cin >> num;
			temp.push_back(num);
		}
		numbers.push_back(temp);
		temp.clear();
		cout << endl;
	}
	for (int r = 0; r < numbers.size(); r++)
	{
		for (int c=0; c<numbers[r].size(); c++)
		{
			cout << numbers[r][c] << "\t";
		}
		cout << endl;
	}
}
