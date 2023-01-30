#include <iostream>

using namespace std;

int arr[128][128]; //처음 주어지는 종이
int ans[2]; // 색종이 개수별 카운트

void recu(int x, int y, int s)
{
	bool check = true; // s*s 사이즈의 색종이 인가?
	for (int i = 0; i < s; i++) // 세로 사이즈 만큼 반복
	{
		for (int j = 0; j < s; j++)//가로 사이즈 만큼 반복
		{
			if (arr[x + i][y + j] != arr[x][y]) // 만약 s*s 사이즈 안에 서로 다른 색이 존재하는 경우
			{
				check = false; // s*s 사이즈의 색종이가 아니다
				break;// 반복 탈충
			}
			if (!check)// 체크가 false 인경우
				break; // 모든 반복 탈출
		}
	}
	if (check)//만약 체크가 true인 경우
		ans[arr[x][y]]++;//색종이 개수 +1
	else
	{
		int new_size = s / 2; //탐색할 색종이의 크키를 4개로 나눈다
		for (int i = 0; i < 2; i++)//나눠진 4개의 색종이를 순서대로 탐색
		{
			for (int j = 0; j < 2; j++)
			{
				recu(x + i * new_size, y + j * new_size, new_size);
				//해당 색종이의 가장 왼쪽 위 좌표와 현재 탐색한는 색종이의 크기로 함수 재귀
			}
			
		}
	}
		
}



int main() {
	int a;//사이즈
	cin >> a;
	for (int i = 0; i < a; i++) // 입력
	{
		for (int j = 0; j < a; j++)
		{
			cin >> arr[i][j];
		}
	}
	recu(0, 0, a);//첫 색종이의 가장 왼쪽위 좌표는 0,0이다.
	cout << ans[0] << endl;//흰색종이 개수 출력
	cout << ans[1] << endl;//파란색종이 개수 출력

	
	return 0;
}
