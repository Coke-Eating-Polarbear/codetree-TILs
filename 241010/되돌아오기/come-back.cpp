#include <iostream>
using namespace std;

int dx[4] = {1,-1, 0 , 0}; // E W N S
int dy[4] = {0, 0, 1, -1}; // E W N S

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int x=0,y=0;
    int index = 0;
    int count = 0;
    bool flag = false;
    
    for(int i=0;i<n;i++)
    {
        char a;
        int b;
        cin >> a >>b;
        if(a=='E')
            index = 0;
        else if(a=='W')
            index = 1;
        else if(a=='N')
            index = 2;
        else
            index = 3;
        for(int j=0;j<b;j++)
        {
            int nx = x + dx[index];
            int ny = y + dy[index];
            x = nx, y= ny;
            count++;
            if(x==0 && y == 0)
            {
                flag = true;
                break;
            }
        }
        if(flag)
            break;
    }
    if(!flag)
        cout << -1;
    else
        cout << count;
    return 0;
}