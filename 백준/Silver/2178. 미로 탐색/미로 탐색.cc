#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    queue<int> px; //x 좌표 저장
    queue<int> py;// y좌표 저장
    int dist[101][101] = { 0, }; //이동거리 저장
    int dx[] = { 1,0,-1,0 };// x좌표 이동
    int dy[] = { 0,1,0,-1 };// y좌표 이동

    int x, y;
    char m[101][101] = { 0, };// 맵
    cin >> y >> x;

    for (int i = 1; i <= y; i++) // 맵 입력
    {
        string index;
        cin >> index;
        for (int j = 0; j < x; j++)
        {
            m[i][j + 1] = index[j];
        }
    }

    px.push(1); // 처음 x좌표를 1로 저장(1,1)
    py.push(1); // 처음 y좌표를 1로 저장

    dist[1][1] = 1;//처음 칸도 거리에 포함하므로 처음 거리를 1로 지정

    for (int i = 1; i < x * y + 1; i++)
    {
        m[py.front()][px.front()] = '0'; //처음 지나온 길을 0으로 변경


        for (int dir = 0; dir < 4; dir++) //좌우위아래를 검사하므로 4번 반복
        {
            int newy = py.front() + dy[dir];//좌우 좌표 변경
            int newx = px.front() + dx[dir];//위아래 좌표 변경

            if (newx >= 1 || newx <= 100)//x좌표가 배열의 범위를 벗어나지 않는다면
            {

                if (newy >= 1 || newy <= 100)// y좌표가 배열의 범위를 벗어나지 않는다면
                {
                    if (m[newy][newx] == '1')// 다음으로 나아갈 곳이 1이라면 
                    {
                        px.push(newx);  //새로 운 x좌표 저장(갈림길 복수 가능)
                        py.push(newy); //새로 운 y좌표 저장(갈림길 복수 가능)
                        dist[newy][newx] = dist[py.front()][px.front()] + 1;
                        // 다음에 갈 곳에 거리값을 1 증가
                        m[newy][newx] = '0'; // 새로 지나갈 길을 0으로 변경

                    }

                }
            }

        }

        px.pop();// 기존에 지나온 x좌표 제거
        py.pop();// 기존에 진나온 y좌표 제거


        if (px.front() == x && py.front() == y) // 마지막 좌표에 왔으면
        {
            break; // 반복문 탈출
        }
    }
    std::cout << dist[y][x] << endl; // 마지막 좌표의 거리값 출력



    return 0;
}
