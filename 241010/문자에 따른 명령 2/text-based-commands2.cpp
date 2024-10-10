#include <iostream>
#include <string>
using namespace std;

int dx[4] ={1, 0, -1, 0};
int dy[4] ={0, 1, 0 ,-1};
int main() {
    int x=0, y=0;
    string input;
    getline(cin, input);
    int len = input.size();
    int index = 1;
    for(int i =0;i<len;i++)
    {
        if(input[i]=='L')
        {
            index++;
            if(index>=4)
                index = 0;
        }
        else if(input[i] == 'R')
        {
            index--;
            if(index <0)
                index = 3;
        }
        else
        {
            x = x+dx[index];
            y = y+dy[index];
        }
    }
    cout << x <<" " << y;
    // 여기에 코드를 작성해주세요.
    return 0;
}