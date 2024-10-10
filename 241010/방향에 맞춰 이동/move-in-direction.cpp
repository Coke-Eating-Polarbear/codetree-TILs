#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[2] ={0,0};
    for(int i = 0 ; i<n;i++)
    {
        char fir;
        int sec;
        cin >> fir >> sec;
        if(fir=='N')
        {
            int temp = arr[1];
            temp = temp + sec;
            arr[1] = temp;
        }
        else if(fir=='E')
        {
            int temp = arr[0];
            temp = temp + sec;
            arr[0] = temp;
        }
        else if(fir=='W')
        {
            int temp = arr[0];
            temp = temp - sec;
            arr[0] = temp;
        }
        else
        {
            int temp = arr[1];
            temp = temp - sec;
            arr[1] = temp;
        }
    }
    cout << arr[0]<< " " <<arr[1];
    return 0;
}