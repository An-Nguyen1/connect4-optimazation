#include <iostream>
#include <string>

using namespace std;

class Board {
	//Cool thing about C++, you can declare an entire section of code private using "private:" rather than manually typing it out for every line.
	private:
	//You will probably want other instance variables.
	const string RED = "\u001b[31m"; //Turns any text after it red.
	const string CYAN = "\u001b[36m"; //Turns any text after it cyan.
	const string RESET = "\u001b[0m"; //When you print this it returns the console text to the original color.
	
	public:
	Board() { //Constructor, default should create an empty game (i.e. no moves yet)
		
	}
	
	//Member method prototypes.
	int getWinner();
	bool isOver();
	bool isValidMove(int position);
	bool operator==(const Board& other) const;
	void move(int position);
	void undo();
	void print();
	bool getTurn();
	
	friend std::hash<Board>; //Allows the std::hash structure to access private variables.
};

//Member function definitions
//Notice the syntax of declaring a class's functions outside of the class definition: returnType Class::method()
int Board::getWinner() { //Returns -1 if player 1 won, 0 if the game ended in a tie, and 1 if player 2 won. Guaranteed to be called only when the game is over.
	
}

bool Board::isOver() { //Returns true if the game is over, false otherwise.
	
}

bool Board::isValidMove(int position) { //Check if a move at a certain position is valid. (i.e. not illegal)

}

void Board::move(int position) {  //Actually place a checker in the desired position. Guaranteed to be a legal move. Guaranteed for game to not be over.
	
}

void Board::undo() { //Undo last move.

}

void Board::print() { //Print board in specified format.
	/* Format:
	    Unused slots represented by an asterisk (*) in the default color.
	    Player 1's checkers are represented by CYAN Os (the letter O)
	    Player 2's checkers are represented by RED Xs.
	    Each column should be seperated one space ' '
	    The bottom most row of the print output should label each column [0, 6] in the default color.
		Example (I can't add color here):
		* * * * * * * 
		* * * * * * * 
		* * O * * * * 
		* * O X * * * 
		* * O X * * * 
		* * O X * * * 
		0 1 2 3 4 5 6
	*/
}

bool Board::getTurn() { //False if it is player 1's turn and true if it is player 2's turn.

}

/*
	For a custom class to be usable as a key in an unordered_map or unordered_set, we must define two things:
	1. How to check for equality (the == operator)
	2. A hash structure (std::hash<Class>), that contains a hash function (the () operator)
*/

bool Board::operator==(const Board& other) const { //Equality operator
	
}

//This is how you create custom hash functions for user defined classes.
namespace std {
	template<>
	struct hash<Board> {
		//size_t is a numerical type that is an alias for an unsigned (non-negative) integer.
		size_t operator()(const Board& b) const { //Hash function for the board.
			
		}	
	};
}

