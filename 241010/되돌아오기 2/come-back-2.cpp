#include <iostream>
#include <string>
using namespace std;

int dx[4] = {-1, 0, 1, 0}; // W N E S 
int dy[4] = {0, 1, 0, -1}; // W N E S 

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    getline(cin, input);
    int len = input.size();
    int index = 1;
    int x=0,y=0;
    int nx,ny;
    int count = 0;
    bool flag = false;
    for(int i = 0; i < len;i++)
    {
        if(input[i] == 'F')
        {
            nx = x + dx[index];
            ny = y + dy[index];
            count ++;
        }
        else if(input[i] == 'L')
        {
            index--;
            count ++;
            if(index <0)
                index = 3;
        }
        else 
        {
            index++;
            count ++;
            if(index > 3)
                index = 0;
        }
        
        x = nx, y = ny;
        if(x==0 && y==0)
            {
                flag = true;
                break;
            }
    }
    if(flag)
        cout << count;
    else
        cout << -1
    return 0;
}