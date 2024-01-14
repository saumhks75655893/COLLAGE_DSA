#include <bits/stdc++.h>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int choice;
int row;
int column;

void display_board()
{
    cout << endl;
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
void InputFunction()
{

    string n1;
    string n2;

    cout << "Enter the name of the first player : ";
    getline(cin, n1);
    cout << "Enter the name of the second player : ";
    getline(cin, n2);
    cout << endl;
    cout << n1 << " is the first player so he/she will play first.\n";
    cout << n2 << " is the second player so he/she will play second. \n\n";
    cout << "Lets begin the match ............  \n";

    cout << "Player 1 turn [x] .... \n"
         << endl;
    cout << "Input you choice : ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        row=0;
        column=0; 
        break;
    case 2:
        row=0;
        column=1; 
        break;
    case 3:
        row=0;
        column=2; 
        break; 
    case 4:
        row=1;
        column=0; 
        break;
    case 5:
        row=1;
        column=1; 
        break;
    case 6:
        row=1;
        column=2; 
        break; 
    case 7:
        space[2][0] = 'x';
        break;
    case 8:
        row=2;
        column=0; 
        break;
    case 9:
        space[2][2] = 'x';

    default:
        break;
    }
}

int main()
{
    cout << "\nInitial stage : \n";
    display_board();

    InputFunction();

    cout << "In playing stage : \n";
    display_board();
}