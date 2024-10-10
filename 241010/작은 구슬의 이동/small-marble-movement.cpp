#include <iostream>
using namespace std;

int dx[4] = {0, 0, -1, 1}; // L, R, U, D
int dy[4] = {-1, 1, 0, 0}; // L, R, U, D

int main() {
    int n, t;
    cin >> n >> t;
    int r, c;
    char d;
    cin >> r >> c >> d;

    int index;
    // 방향 설정: L = 0, R = 1, U = 2, D = 3
    if (d == 'L') {
        index = 0;
    } else if (d == 'R') {
        index = 1;
    } else if (d == 'U') {
        index = 2;
    } else {
        index = 3;
    }

    for (int i = 0; i < t; i++) {
        int dr = r + dx[index];
        int dc = c + dy[index];

        // 경계 체크: 배열 범위를 벗어나면 반대 방향으로 전환하고 계속 진행
        if (dr < 1 || dr > n || dc < 1 || dc > n) {
            // 반대 방향으로 전환
            if (index == 0) {
                index = 1; // L -> R
            } else if (index == 1) {
                index = 0; // R -> L
            } else if (index == 2) {
                index = 3; // U -> D
            } else if (index == 3) {
                index = 2; // D -> U
            }
            continue; // 전환 후 다시 시도
        }

        // 이동 좌표 업데이트
        r = dr;
        c = dc;
    }

    cout << r << " " << c;
    return 0;
}