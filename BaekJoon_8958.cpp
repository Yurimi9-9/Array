// 백준 8958 - OX퀴즈
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N=0;
	cin >> N;
	string ox[N]={};
	for(int i=0; i<N; i++)
		cin >> ox[i];

	for(int i=0; i<N; i++)
	{
		int sum=0;
		int len = ox[i].length();
		int score[len]={};
		if(ox[i][0]=='O')
			score[0]=1;
		for(int j=1; j<len; j++)
		{
			if(ox[i][j]=='O')
				score[j]++;
			if(ox[i][j]=='O')
				score[j] += score[j-1];
		}

		for(int j=0; j<len; j++)
			sum += score[j];

		cout << sum << '\n';
	}

	return 0;
}
