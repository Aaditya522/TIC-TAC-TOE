# Tic Tac Toe Game in C++
This repository contains a complete implementation of the timeless Tic Tac Toe game in C++. It's a two-player game where participants take turns placing their markers (X or O) on a 3x3 grid, aiming to align three of their markers in a row, column, or diagonal.

# Features
Interactive gameplay for two players.

Text-based grid for visualizing moves.

Automatic checks for a winner or a tie.

Handles invalid inputs gracefully.

Simple and easy-to-follow structure.

# How to Play
Player X goes first, followed by Player O.

Players enter the number (1-9) corresponding to the grid position where they want to place their marker.

The game automatically determines if a player has won or if it's a tie.

If an invalid move is entered, players are prompted to try again.

# Rules
Players take turns placing their markers (X or O) on the grid.

The first player to align three markers in a row, column, or diagonal wins.

If all positions are filled without a winner, the game ends in a tie.

# Compilation and Execution
Follow these steps to compile and run the program:

* Clone this repository:

bash
git clone https://github.com/Aaditya522/TIC-TAC-TOE.git
cd TIC-TAC-TOE
Compile the program using a C++ compiler:

bash
g++ -o tic_tac_toe tic_tac_toe.cpp
Run the compiled program:

bash
./tic_tac_toe
Program Structure
Classes
tic_tac_toe:

Contains the game grid and methods to manage gameplay.

# Key Functions
-> void tictactoe(): Displays the initial tic-tac-toe grid.

-> void print(): Prints the updated grid after each turn and checks for a tie.

-> void set_values(char input, char value): Updates the grid based on player input.

-> bool check(): Evaluates the current state of the grid to determine a winner or tie.

# Example Gameplay
Upon execution, the program displays the initial grid, prompts players for their moves, and updates the grid accordingly. Below is an example of gameplay in action:

-> plaintext:

###############################
          TIC-TAC-TOE         
###############################


1   |  2  |   3
----|-----|----
4   |  5  |   6
----|-----|----
7   |  8  |   9

Player X
Provide place: 5

1   |  2  |   3
----|-----|----
4   |  X  |   6
----|-----|----
7   |  8  |   9

# Future Enhancements:
Here are some potential updates for the game:

-> Add a single-player mode with AI as the opponent.

-> Improve grid visualization with a graphical user interface (GUI).

-> Implement a scoring system to track multiple rounds.

# License
This project is licensed under the MIT License. Feel free to use, modify, and share it as you like!
