#include <iostream>
using namespace std;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

int main() {
    // 여기에 코드를 작성해주세요.
    int n,t;
    cin >> n >> t;
    int r=1,c=1;
    char d;
    cin >> r>>c>>d;
    int index;
    if(d=='U')
        index = 2;

    else if(d == 'D')    
        index = 3;
    
    else if(d == 'R')
        index =0;
    
    else
        index = 1;
    
    for(int i = 0 ;i<t;i++)
    {
        int dr, dc;
        dr = r+dx[index];
        dc = c+dy[index];
        if(dr<1 || dr>n || dc < 1 || dc>n)
        {
            if(d=='U')
            {
                index = 3;
            }
            else if(d == 'D')
            {
                index = 2;
            }
            else if(d == 'R')
            {
                index =1;
            }
            else
            {
                index = 0;
            }
            continue;
        }
        r = dr;
        c=  dc;
        
    }
    cout << r <<" " << c ;
    return 0;
}