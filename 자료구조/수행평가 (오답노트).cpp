#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<int> v;
void convert(int inp)
{
	if (inp == 0)
		v.push_back(0);
	else if (inp == 1)
		v.push_back(1);
	else
	{
		v.push_back(inp % 2);
		convert(inp / 2);
	}
}

int main()
{
#pragma region 3번
	vector<int> v1{ 1,3,4,5,6 };

	v1.insert(v1.begin() + 1, 2);
	v1.erase(v1.begin() + 1, v1.begin() + 3);
#pragma endregion

#pragma region 4번
	int arr[8] = { 0 };

	fill(arr, arr + 4, 1);

	int* ptr = arr;

	cout << ptr[2] << endl;
#pragma endregion
#pragma region 6번
	int inp;
	cout << "10진수 값을 입력하세요: ";
	cin >> inp;

	convert(inp);

	cout << "2진수로 변환한 값: ";
	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i];
	}
#pragma endregion
}