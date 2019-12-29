// 백준 3052 - 나머지
#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

int main()
{
	int rest[42]={};	// [0]~[41] 생성, 0으로 초기화
	for(int i=0; i<10; i++)
	{	// 10개의 숫자를 입력 받고, 42로 나눈 나머지에 해당하는 인덱스 원소 증가
		int num;
		cin >> num;
		rest[num%42]++;	// 42로 나눈 나머지에 해당하는 인덱스에 접근
	}

	sort(rest, rest+42, desc);	// 나머지를 저장한 배열을 내림차순으로 정렬
	int count=0;
	for(; count<10; count++)
	{	// 내림차순으로 정렬했는데 0을 만난 경우, 해당 인덱스==나머지 종류 개수
		if(rest[count]==0)
			break;
	}
	cout << count;

	return 0;
}
