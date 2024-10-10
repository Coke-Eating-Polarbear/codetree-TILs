#include <iostream>
#include <vector>

int dx[4] = {0, 0, -1, 1}; // 상하좌우
int dy[4] = {1, -1 ,0, 0}; //
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    vector<vector<int>> arr (n, vector<int>(n,0));
    for(int i =0;i<m;i++)
    {
        int count =0;
        int a,b;
        cin >> a >>b;
        a--;
        b--;
        arr[a][b] = 1;
        for(int j=0;j<4;j++)
        {
            int nx,ny;
            nx = a +dx[j];
            ny = b+dy[j];
            if(nx <0 || nx >= n || ny<0 || ny >= n)
                continue;
            if(arr[nx][ny]==1)
                count++;
        }
        if(count==3)
            cout << 1 << endl;
        else
            cout << 0 <<endl;
    }
    return 0;
}