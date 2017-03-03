// Author : zhang
// Date   : 2017-03-03

/**********************************************************************************
*
* Given an array of integers, find two numbers such that they add up to a specific target number.
*
* The function twoSum should return indices of the two numbers such that they add up to the target,
* where index1 must be less than index2. Please note that your returned answers (both index1 and index2)
* are not zero-based.
*
* You may assume that each input would have exactly one solution.
*
* Input: numbers={2, 7, 11, 15}, target=9
* Output: index1=1, index2=2
*
*
**********************************************************************************/

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//************************************
// Method:    twoSum
// FullName:  twoSum
// Access:    public 
// Returns:   std::vector<int>
// Qualifier:
// Parameter: vector<int> & numbers
// Parameter: int target
//************************************
vector<int> twoSum(vector<int> &numbers, int target)
{
	unordered_map<int, int> m;
	vector<int> result;
	for (int i=0;i<numbers.size();i++)
	{
		if (m.find(numbers[i])==m.end())
		{
			m[target - numbers[i]] = i;
		}
		else
		{
			result.push_back(m[numbers[i]] + 1);
			result.push_back(i + 1);
			break;
		}
	}
	return result;
}

int main()
{
	int a[4] = { 2,7,11,15 };
	vector<int> numbers;
	numbers.push_back(a[0]);
	numbers.push_back(a[1]);
	numbers.push_back(a[2]);
	numbers.push_back(a[3]);
	vector<int> result = twoSum(numbers, 17);
	for each (auto var in result)
	{
		cout << "Output Value is : " << var << endl;
	}
	system("PAUSE");
    return 0;
}

