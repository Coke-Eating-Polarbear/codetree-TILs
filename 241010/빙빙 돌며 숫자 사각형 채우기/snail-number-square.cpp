#include <iostream>
#include <vector>
using namespace std;


int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int n,m;
bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> n >> m;
    int index =0;
    vector<vector<int>> arr(n, vector<int>(n,0));
    int x=0,y=0;
    int nx,ny;

    arr[x][y] = 1;

    for(int i=1;i<n*m;i++)
    {
        nx = x+dx[index];
        ny = y+dy[index];
        if(!InRange(nx, ny) || arr[nx][ny] != 0)
            {
                index = (index+1);
                if(index >3)
                    index = 0;
            }
        x = x+dx[index];
        y = y+dy[index];
        arr[x][y] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}