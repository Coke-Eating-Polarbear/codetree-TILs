#include <iostream>
#include <vector>
using namespace std;

int n;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int arr[101][101];
int count;
bool dfs(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        if(arr[x+dx[i]][y+dy[i]]==1)
            count++;
    }
    if(count >= 3)
        return true;
    else
        return false;
}



int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> n;   
    int answer=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            count = 0;
            if(dfs(i,j))
                answer++;
            
        }
    }
    cout << answer;
    return 0;
}