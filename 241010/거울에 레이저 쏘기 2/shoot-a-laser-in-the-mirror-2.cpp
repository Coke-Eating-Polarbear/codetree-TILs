#include <iostream>
#include <vector>
using namespace std;

int dx[4] ={-1, 0, 1, 0}; // W S E N 
int dy[4] ={0, -1, 0, 1}; // W S E N

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<vector<char>>arr(n,vector<char>(n));
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    }
    int input;
    cin >> input;
    int x, y, index;
    if (1 <= input && input <= n) {  // 윗면에서 들어오는 경우
        x = 0;
        y = input - 1;
        index = 2;  // 아래로 진행 (South)
    } else if (n < input && input <= 2 * n) {  // 오른쪽에서 들어오는 경우
        x = input - n - 1;
        y = n - 1;
        index = 0;  // 왼쪽으로 진행 (West)
    } else if (2 * n < input && input <= 3 * n) {  // 아랫면에서 들어오는 경우
        x = n - 1;
        y = 3 * n - input;
        index = 3;  // 위쪽으로 진행 (North)
    } else {  // 왼쪽에서 들어오는 경우
        x = 4 * n - input;
        y = 0;
        index = 1;  // 오른쪽으로 진행 (East)
    }

    int count = 1;  // 반사 횟수 카운트

    // 레이저가 격자 밖으로 나갈 때까지 반복
    while (true) {
        int nx = x + dx[index];
        int ny = y + dy[index];

        // 격자 밖으로 나가면 종료
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
            break;
        }

        // 거울을 만나면 방향 전환 (가정: / 또는 \ 모양의 거울)
        if (arr[nx][ny] == 1) {  // '\' 거울
            if (index == 0) index = 3;
            else if (index == 1) index = 2;
            else if (index == 2) index = 1;
            else if (index == 3) index = 0;
        } else if (arr[nx][ny] == 2) {  // '/' 거울
            if (index == 0) index = 2;
            else if (index == 1) index = 3;
            else if (index == 2) index = 0;
            else if (index == 3) index = 1;
        }

        // 위치 갱신
        x = nx;
        y = ny;
        count++;  // 반사 횟수 증가
    }

    // 반사 횟수 출력
    cout << count << endl;
}