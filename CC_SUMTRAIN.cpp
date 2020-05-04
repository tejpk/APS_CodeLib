#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int T;
    int N;
    int a[1000][100];

    cin>>T;
    while(T--)
    {   
        cin >> N;

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j <= i; j++)
          {
            cin >> a[i][j];
          } 
        }
    
    for(int i = N - 2 ; i >= 0; i--)
    {
        for(int j = 0 ; j <= i; j++)
        {
            if(a[i + 1][j] > a[i + 1][j + 1])
                a[i][j] = a[i][j] + a[i + 1][j];
        
            else
                a[i][j] = a[i][j] + a[i + 1][j + 1];
        
        
        }
    }

    cout << a[0][0] << endl;
    }
	return 0;
}
