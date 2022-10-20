// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define collection cin.tie(NULL);ios_base::sync_with_stdio(false);
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
	collection;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		stack<bool> PSs;
		string PS;
		cin >> PS;
		for (int j = 0; j < PS.size(); j++)
		{
			if (PS[j] == '(')
			{
				PSs.push(true);
			}
			else
			{
				if (PSs.size() > 0)
				{
					PSs.pop();
				}
				else
				{
					PSs.push(true);
					break;
				}
			}
		}
		if (PSs.size() == 0)
		{
			cout << "YES"<<'\n';
		}
		else
		{
			cout << "NO" << '\n';
		}

	}
}

