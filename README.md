A game called Tic-Tac-Toe Inception

This project is intended to provide the backend for a Tic-Tac-Toe game for which a GUI will need to be created.
We are including functions to play the game from the command line, however they only function in a basic way, so that the project
can be tested.
<!-- more -->
We believe this project implements the Unix design philosophy in the sense that we are taking a simple game and attempting to make it more engaging and open source.
Using a simple base for a complex project is a core element of the Unx design philosophy. This project is based off of other implementations of simple tic-tac-toe games,
and combines them so that they are easily understood and clear in their implementation. This project makes use of Object-Oriented design, which incorporates many of the
key elements of Unix design, which is that the sum of a project is more than it's parts. 
The game does not have a function which will reset it when someone wins, this is a feature we plan to add. The main function uses an infinite loop to play the game continuously. 
When the reset functionality is added this will allow multiple games to be played without restarting the program. 

dirtymop is gdl's github username.

In order to run the game, compile the all files, and execute the main.cpp. This contains the function which plays the game.
Because this is designed as a backend for a GUI based program, the gameplay function is incredibly simple, and the outputs are designed so that they could be
used to determine the feasability of playing while using s GUI. There is error checking in the individual class functions, however the game class lacks some error checking which would be required
for the fully implemented game.
