#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
    queue<int> px;
    queue<int> py;
    int dist[101][101] = { 0, };
    int dx[] = { 1,0,-1,0 };
    int dy[] = { 0,1,0,-1 };

    int x, y;
    char m[101][101] = { 0, };
    cin >> y >> x;

    for (int i = 1; i <= y; i++)
    {
        string index;
        cin >> index;
        for (int j = 0; j < x; j++)
        {
            m[i][j + 1] = index[j];
        }
    }

    px.push(1);
    py.push(1);

    dist[1][1] = 1;

    for (int i = 1; i < x * y + 1; i++)
    {
        m[py.front()][px.front()] = '0';
     

        for (int dir = 0; dir < 4; dir++)
        {
            int newy = py.front() + dy[dir];
            int newx = px.front() + dx[dir];

            if (newx >= 1 || newx <= 100)
            {

                if (newy >= 1 || newy <= 100)
                {
                    if (m[newy][newx] == '1')
                    {
                        px.push(newx);
                        py.push(newy);
                        dist[newy][newx] = dist[py.front()][px.front()] + 1;
                        m[newy][newx] = '0';
                       
                    }

                }
            }

        }
        
        px.pop();
        py.pop();
       

        if (px.front() == x && py.front() == y)
        {
            break;
        }
    }
    std::cout << dist[y][x] << endl;
    


    return 0;
}