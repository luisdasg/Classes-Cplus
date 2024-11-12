#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n;
	vector<vector<int>> numbers; //3 rows by 4 colums
	vector<int> temp1;

	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 4; c++)
		{
			cout << "Enter row # " << (r + 1) << " colums # " << (c + 1) << " ==> ";
			cin >> n;
			temp1.push_back(n);
		}
		numbers.push_back(temp1);
		temp1.clear();
		cout << endl;
	}
	for (int r = 0; r < numbers.size(); r++)
	{
		for (int c = 0; c < numbers[r].size(); c++)
		{
			cout << numbers[r][c] << "\t";
		}
		cout << endl;
	}

}
