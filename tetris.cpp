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

//	Tetrominos();
//	~Tetrominos();

	// Line Tetromino
	int tetrominoLine1[5] ={00100,
							00100,
							00100,
							00100,
							00000};

	int tetrominoLine2[5] ={00000,
							00000,
						    01111,
						    00000,
							00000};
	
	int tetrominoLine3[5] ={00100,
							00100,
							00100,
							00100,
							00000};

	int tetrominoLine4[5] ={00000,
							00000,
							01111,
							00000,
							00000};
							
	// Square Tetromino
	
	int tetrominoSqar1[5] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};

    int tetrominoSqar2[5] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};
    
    int tetrominoSqar3[5] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};

    int tetrominoSqar4[5] ={00000,
                            00000,
                            00110,
                            00110,
                            00000};
	// Z Tetromino					
	
	int tetrominoZTet1[5] ={00000,
                            00000,
                            01100,
                            00110,
                            00000};

    int tetrominoZTet2[5] ={00000,
                            00100,
                            01100,
                            01000,
                            00000};

    int tetrominoZTet3[5] ={00000,
                            00000,
                            01100,
                            00110,
                            00000};

    int tetrominoZTet4[5] ={00000,
                            00100,
                            01100,
                            01000,
                            00000};
	// S Tetromino					
	
	int tetrominoSTet1[5] ={00000,
                            01000,
                            01100,
                            00100,
                            00000};

    int tetrominoSTet2[5] ={00000,
                            00110,
                            01100,
                            00000,
                            00000};

    int tetrominoSTet3[5] ={00000,
                            00100,
                            00110,
                            00010,
                            00000};

    int tetrominoSTet4[5] ={00000,
                            00110,
                            01100,
                            00000,
                            00000};
	// T Tetromino
	
	int tetrominoTTet1[5] ={00000,
                            00100,
                            01110,
                            00000,
                            00000};

    int tetrominoTTet2[5] ={00000,
                            00100,
                            00110,
                            00100,
                            00000};

    int tetrominoTTet3[5] ={00000,
                            00000,
                            01110,
                            00100,
                            00000};

    int tetrominoTTet4[5] ={00000,
                            00100,
                            01100,
                            00100,
                            00000};
	// L Tetromino				
	
	int tetrominoLTet1[5] ={00000,
                            00100,
                            00100,
                            00110,
                            00000};

    int tetrominoLTet2[5] ={00000,
                            00000,
                            01110,
                            01000,
                            00000};

    int tetrominoLTet3[5] ={00000,
                            01100,
                            00100,
                            00100,
                            00000};

    int tetrominoLTet4[5] ={00000,
                            00010,
                            01110,
                            00000,
                            00000};
	// Reverse L Tetromino
	
	int tetromino7Tet1[5] ={00000,
                            00100,
                            00100,
                            01100,
                            00000};

    int tetromino7Tet2[5] ={00000,
                            01000,
                            01110,
                            00000,
                            00000};
    
    int tetromino7Tet3[5] ={00000,
                            00110,
                            00100,
                            00100,
                            00000};

    int tetromino7Tet4[5] ={00000,
                            00000,
                            01110,
                            00010,
                            00000};
		
					
};

//Tetrominos::Tetrominos(int tet)
//{
//	for(int i=0;i<4;i++)
//		{
//			tetromino[tet]	
//		}
//}
int

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
	GameLoop();

};
