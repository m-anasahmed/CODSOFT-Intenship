#include <iostream>
using namespace std;

// Define the game board as a 3x3 grid
char board[3][3] = {{' ', ' ', ' '},
                    {' ', ' ', ' '},
                    {' ', ' ', ' '}};

// Define the players as X and O
char players[2] = {'X', 'O'};

// Define a function to display the current state of the board
void display_board() {
    cout << "\n";
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---------\n";
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---------\n";
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "\n";
}

// Define a function to check if the game has a winner
bool check_winner(char player) {
    // Check rows, columns, and diagonals for a win
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true; // Row win
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; // Column win
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; // Diagonal win (top-right to bottom-left)
    }
    return false; // No win
}

// Define a function to check if the game is a draw
bool check_draw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; // An empty cell is found, game is not a draw
            }
        }
    }
    return true; // All cells are filled, game is a draw
}

// Define a function to prompt the current player to enter their move
void player_input(char player) {
    // Declare variables to store the row and column of the move
    int row, col;

    // Loop until a valid move is entered
    while (true) {
        // Display a message to prompt the current player to enter their move
        cout << "Player " << player << ", enter your move (row[1-3] and column[1-3]): ";
        
        // Read the input from the standard input stream
        cin >> row >> col;

        // Adjust the row and column values to match the board index
        row--;
        col--;

        // Check if the input is valid
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            // Update the board with the player's move
            board[row][col] = player;
            break;
        }
        else {
            // Display an error message and ask for another input
            cout << "Invalid move. Try again.\n";
        }
    }
}

int main() {
    char play_again;
    
    do {
        int total_moves = 0;
        int current_player = 0; // 0 for 'X', 1 for 'O'
        bool game_over = false;

        cout << "Welcome to Tic-Tac-Toe!" << endl;

        while (!game_over) {
            // Display the current state of the board
            display_board();

            // Prompt the current player to enter their move
            player_input(players[current_player]);

            // Increment the total number of moves
            total_moves++;

            // Check if the current player has won
            if (check_winner(players[current_player])) {
                display_board();
                cout << "Player " << players[current_player] << " wins! Congratulations!" << endl;
                game_over = true;
            }
            // Check if the game is a draw
            else if (total_moves == 9) {
                display_board();
                cout << "The game is a draw. Well played!" << endl;
                game_over = true;
            }
            // Switch players
            current_player = (current_player + 1) % 2;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> play_again;
        
        if (play_again == 'n' || play_again == 'N') {
            cout << "Thank you for playing Tic-Tac-Toe! Goodbye." << endl;
        }
        else if (play_again == 'y' || play_again == 'Y') {
            // Reset the game board for a new game
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    board[i][j] = ' ';
                }
            }
        }
        else {
            cout << "Invalid input. Exiting the game." << endl;
        }
    } while (play_again == 'y' || play_again == 'Y');
    
    return 0;
}
