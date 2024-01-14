#include <bits/stdc++.h>
using namespace std;

char space[3][3] = {{'0', '1', '2'}, {'3', '4', '5'}, {'6', '7', '8'}};
int choice;
int row;
int column;
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
    cout << n2 << " is the second player so he/she will play second. \n";
    cout << "Lets begin the match ............  ";
    cout << endl
         << endl
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

    cout << "Player 1 turn [x] .... "<<endl;
    cout<<"Input you choice : "; 
    cin >> choice;
    cout<<endl; 

    switch (choice)
    {
    case 0:
        space[0][0] = 'x';
        break;
    case 1:
        space[0][1] = 'x';
        break;
    case 2:
        space[0][2] = 'x';
    case 3:
        space[1][0] = 'x';
        break;
    case 4:
        space[1][1] = 'x';
        break;
    case 5:
        space[1][2] = 'x';
    case 6:
        space[2][0] = 'x';
        break;
    case 7:
        space[2][1] = 'x';
        break;
    case 8:
        space[2][2] = 'x';

    default:
        break;
    }

    cout << endl
         << endl
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

int main()
{
    InputFunction(); 
}