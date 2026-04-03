#include <iostream>
using namespace std;

int main()
{
    char x[10][10];
    int msg =0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            x[i][j] = '-';
        }
    }
    char player;
    for (;;)
    {
        int row = -1, col;

        cout << "Enter player (R or B): ";
        cin >> player;

        cout << "Choose column (0-9): ";
        cin >> col;
        for (int i = 9; i >= 0; i--)
        {
            if (x[i][col] == '-')
            {
                row = i;
                x[row][col] = player;
                break;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++) 
            {
                cout << x[i][j] << " " << " | ";
            }
            cout << endl;
        }

        for (int j = 0; j <= 6; j++)
        {
            if (x[row][j] == player && x[row][j + 1] == player &&  x[row][j + 2] == player && x[row][j + 3] == player)
            {
                cout << player << " is the winner"<<endl;
                msg = 1;
                break;
            
            }
        }
        for (int i = 0; i <= 6; i++)
        {
            if (x[i][col] == player && x[i + 1][col] == player &&x[i + 2][col] == player && x[i + 3][col] == player)
            {
                cout << player << " is the winner"<<endl;
                msg = 1;
                break;
                
            }
        }
        for (int i = 0; i <= 6; i++)
        {
            for (int j = 0; j <= 6; j++)
            {
                if (x[i][j] == player && x[i + 1][j + 1] == player &&x[i + 2][j + 2] == player &&x[i + 3][j + 3] == player)
                {
                    cout << player << " is the winner" << endl;
                    msg = 1;
                    break;
                }
            }
            break;
        }
        for (int i = 3; i < 10; i++)
        {
            for (int j = 0; j <= 6; j++)
            {
                if (x[i][j] == player && x[i - 1][j + 1] == player &&x[i - 2][j + 2] == player &&x[i - 3][j + 3] == player)
                {
                    cout << player << " is the winner" << endl;
                    msg = 1;
                    break;
        
                }
            }
            break;
        }
        if (msg == 1)
        {
            break;
        }
    }

    return 0;
}
                    