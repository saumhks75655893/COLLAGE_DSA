#include <bits/stdc++.h>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int choice;
int row;
int column;
char turn = 'X';
string n1;
string n2;
bool draw;

// board for the tic tac toe game
void display_board()
{
    system("cls");
    cout << endl
         << endl;
    cout << "     |    |    " << endl;
    cout << "  " << space[0][0] << "  |  " << space[0][1] << " |  " << space[0][2] << endl;
    cout << "_____|____|____" << endl;
    cout << "     |    |    " << endl;
    cout << "  " << space[1][0] << "  |  " << space[1][1] << " |  " << space[1][2] << endl;
    cout << "_____|____|____" << endl;
    cout << "     |    |    " << endl;
    cout << "  " << space[2][0] << "  |  " << space[2][1] << " |  " << space[2][2] << endl;
    cout << "     |    |    " << endl;
    cout << endl;
}
// taking name
void input_name()
{

    // taking input from players of their names.
    cout << "Enter the name of the first player : ";
    getline(cin, n1);
    cout << "Enter the name of the second player : ";
    getline(cin, n2);
    cout << endl;
    cout << n1 << " is the first player so he/she will play first.\n";
    cout << n2 << " is the second player so he/she will play second. \n\n";
    cout << "Lets begin the match ............  \n";
}

// function for playing the game for players
void player_turn()
{

    // Players turn : -----

    if (turn == 'X')
    {
        cout << "Player 1 [ " << n1 << "] turn (Choose the number [1 : 9 ]) : ";
    }
    if (turn == 'O')
    {
        cout << "Player 2 [ " << n2 << " ] turn (Choose the number [1 : 9 ]) : ";
    }

    // Players choice to play the game and where to fill their "O" or "X".

    cin >> choice;
    cout << endl;

    // choice based filling code

    switch (choice)
    {
    case 1:
        row = 0;
        column = 0;
        break;
    case 2:
        row = 0;
        column = 1;
        break;
    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 1;
        column = 0;
        break;
    case 5:
        row = 1;
        column = 1;
        break;
    case 6:
        row = 1;
        column = 2;
        break;
    case 7:
        row = 2;
        column = 0;
        break;
    case 8:
        row = 2;
        column = 1;
        break;
    case 9:
        row = 2;
        column = 2;
        break;

    default:
        break;
    }

    // according to the players turn filling the choices.
    if (turn == 'X' && space[row][column] != 'X' && space[row][column] != 'O')
    {
        space[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && space[row][column] != 'X' && space[row][column] != 'O')
    {
        space[row][column] = 'O';
        turn = 'X';
    }
    else
    {
        cout << "This BOX is already fille ! \nPlease ! try another number ! ! \n\n";
        player_turn();
    }
    display_board();
}

bool game_over()
{
    // first condition
    // in win situation row or columns wise
    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {
            return false;
        }
    }
    // in win situation by diagonal 

    for(int i=0; i<3; i++)
    {
        if(space[0][0] == space[1][1] && space[0][0] == space[2][2] || space[0][2] == space[1][1] && space[0][2] == space[2][0])
        {
            return false ; 
        }
    }
    // Is game is running
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'X' && space[i][j] != 'O')
            {
                return true;
            }
        }
    }

    // game draw condition

    draw = true;
    return false;
}

int main()
{
    input_name();
    cout << "Initial state :" << endl;
    display_board();

    cout << "In playing stage : " << endl;
    while (game_over())
    {

        player_turn();

        display_board();

        game_over();
    }

    cout << "Game complete .. " << endl;
    display_board();

    cout << " ";
    if (turn == 'X' && draw == false)
    {
        cout <<"Congratuations ! Player2 [ " << n2 << " ] \nYou won the match !!! " << endl;
    }
    else if (turn == 'O' && draw == false)
    {
        cout <<"Congratuations ! Player1 [ " << n1 << " ] \nYou won the match !!! " << endl;
    }
    else
    {
        cout << "Match Draw !!! \n" << endl;
    }
}