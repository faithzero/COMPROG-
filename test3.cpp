#include <iostream>
#include <cstdlib>

void display_board();
bool is_finish(bool);


int main()
{
    char board[3][3] = {
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'}
    };

    int row;
    int column;

    bool is_complete = false;

    char player = 'O';


    while (!(is_complete)) {

        if (player == 'O')
            std::cout << "Player 1";
        
        else {
            std::cout << "Player 2";
        }

        std::cout << ", Enter field: ";
        std::cin >> row >> column;
        
        if (board[row][column] == 'X' || board[row][column] == 'O'){
            std::cout << "Already occupied!";
            continue;
        }

        board[row][column] = player;

        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++) {
                std::cout << board[i][j];
            }
        std::cout << std::endl;
        }

        if (player == 'O') 
            player = 'X';
        else {
            player = 'O';
        }

    }

}

void display_board()
{

}