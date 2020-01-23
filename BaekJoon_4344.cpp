// 백준 4344 - 평균은 넘겠지
#include <iostream>

using namespace std;

int main()
{
	int C=0;	// 테스트케이스의 개수
	cin >> C;
	double avg[C]={};	// 평균 저장
	for(int i=0; i<C; i++)
	{
		int N=0;
		cin >> N;	// 학생 수 입력 받기

		int student[N]={};	// 학생들의 점수
		for(int j=0; j<N; j++)	// 학생 점수 입력 받기
			cin >> student[j];

		// 학생들의 점수 평균 구하기
		int sum=0;
		for(int j=0; j<N; j++)
			sum += student[j];
		int average = sum/N;

		// 평균을 넘는 학생 비율 구하기
		int count=0;
		for(int j=0; j<N; j++)
			if(student[j] > average)
				count++;	// 평균을 넘는 학생 수 세기
		avg[i] = (double)count/N*100;
	}

	cout << fixed;
	cout.precision(3);
	for(int i=0; i<C; i++)
		cout << avg[i] << "%" << '\n';

	return 0;
}
