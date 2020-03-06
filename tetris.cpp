//#include<iostream>
#include <ncurses.h>
#include <string>

//Game Settings

//Game Status

//Game Loop


//Game Pieces
//
class Tetrominos
{
public:

	Tetrominos();
	~Tetrominos();

	// Line Tetromino
	int tetrominoLine1[4] ={00100,
							00100,
							00100,
							00100,
							00000};

	int tetrominoLine2[4] ={00000,
							00000,
						    01111,
						    00000,
							00000};
	
	int tetrominoLine3[4] ={00000,
							00100,
							00100,
							00100,
							00100};

	int tetrominoLine4[4] ={00000,
							00000,
							11110,
							00000,
							00000};
							
	// Square Tetromino
	
	int tetrominoSqar1[4] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};

    int tetrominoSqar2[4] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};
    
    int tetrominoSqar3[4] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};

    int tetrominoSqar4[4] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};
	// Z Tetromino					
	
	int tetrominoLine1[4] ={00100,
                            00100,
                            00100,
                            00100,
                            00000};

    int tetrominoLine2[4] ={00000,
                            00000,
                            01111,
                            00000,
                            00000};

    int tetrominoLine3[4] ={00000,
                            00100,
                            00100,
                            00100,
                            00100};

    int tetrominoLine4[4] ={00000,
                            00000,
                            11110,
                            00000,
                            00000};
	// S Tetromino					
	
	int tetrominoLine1[4] ={00100,
                            00100,
                            00100,
                            00100,
                            00000};

    int tetrominoLine2[4] ={00000,
                            00000,
                            01111,
                            00000,
                            00000};

    int tetrominoLine3[4] ={00000,
                            00100,
                            00100,
                            00100,
                            00100};

    int tetrominoLine4[4] ={00000,
                            00000,
                            11110,
                            00000,
                            00000};
	// T Tetromino
	
	int tetrominoLine1[4] ={00100,
                            00100,
                            00100,
                            00100,
                            00000};

    int tetrominoLine2[4] ={00000,
                            00000,
                            01111,
                            00000,
                            00000};

    int tetrominoLine3[4] ={00000,
                            00100,
                            00100,
                            00100,
                            00100};

    int tetrominoLine4[4] ={00000,
                            00000,
                            11110,
                            00000,
                            00000};
	// L Tetromino				
	
	int tetrominoLine1[4] ={00100,
                            00100,
                            00100,
                            00100,
                            00000};

    int tetrominoLine2[4] ={00000,
                            00000,
                            01111,
                            00000,
                            00000};

    int tetrominoLine3[4] ={00000,
                            00100,
                            00100,
                            00100,
                            00100};

    int tetrominoLine4[4] ={00000,
                            00000,
                            11110,
                            00000,
                            00000};
	// Reverse L Tetromino
	
	int tetrominoLine1[4] ={00100,
                            00100,
                            00100,
                            00100,
                            00000};

    int tetrominoLine2[4] ={00000,
                            00000,
                            01111,
                            00000,
                            00000};
    
    int tetrominoLine3[4] ={00000,
                            00100,
                            00100,
                            00100,
                            00100};

    int tetrominoLine4[4] ={00000,
                            00000,
                            11110,
                            00000,
                            00000};
		
					
};

Tetrominos::Tetrominos(int tet)
{
	for(int i=0;i<15;i++)
		{
			tetromino[tet]	
		}
}

void piece1()
{
	string tet1[]
	tet1[15] = "..X." 
			..X.,
			..X.,
}

//Game Movement
//
//Game Scoring
//
//Game Scoreboard (top ten scores by players)
int GameLoop()
{
	initscr();
	cbreak();
	noecho();
	scrollok(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	while (true) 
	{
		
		if (getch() == 'q')
		{
			printw("Goodbye!\n");
			return 0;
		}
		napms(500);
		printw("Running\n");
		endwin();
	}
}

int main(int argc, char **argv)
{
	printw("Tetrominos %c", tet[15]);
	GameLoop();

};
