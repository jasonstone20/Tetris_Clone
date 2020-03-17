#include <string>
#include <sstream>
#include <ncurses.h>
#include <unistd.h>



#define DELAY 30000
//#include <cstdio>
//#include <iostream>
//Game Settings

//Game Status

//Game Loop


//Game Pieces
//
//int tet1()
//{
//	printw(	00100
//			00100
//			00100
//			00100
//			00100);
//}

class Tetrominos
{
public:
	

//	Tetrominos();
//	~Tetrominos();

	// Line Tetromino


//	void display()
//{
//	for (int i = 0;i < 25;i++)
//	
//	{
//		 printf("%d", tetrominoLine1[i]);	
//	}
//		
//}
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
							};

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

//Tetrominos::Tetrominos
//{
//	for(int i=0;i<4;i++)
//		{
//			tetromino[i]	
//		}
//jj
//int PrintTertomino()
//{
//Tetrominos tet;


//	int tetOutput;
//	int temp1Output;
//	int temp2Output;
//	char tetChar [25] = {0};
//	char temp2Char [25] = {0};
////	std::string temp3Output;
//	char temp3Output[25] = {0};
//for (int i = 0 ; i < 25 ; i++)
//
//	if (i % 5  == 0)
//	{
//		//temp1Output = printf("\n");
//		printf("\n");
//	}
//	else	
//{
//	 printf("%s", tet.tetLine1[i]);	
	
//j}
//tetOutput = tetOutput + temp2Output;
//std::sprintf(tetChar, "%d", tetOutput);
//std::sprintf(temp2Char,"%d", temp2Output);
//char temp3Output[2] = {tetChar + temp2Char};
//strcpy(temp3Output, tetChar);
//strcat(temp3Output, temp2Char);
//			printf("%s", temp3Output);
	
	
//}
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
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; y < 10; x++)
		{
		clear();
		mvprintw(y, x, "00100\n"); 
		mvprintw(y, x, "00100\n");
		mvprintw(y, x, "00100\n");
		mvprintw(y, x, "00100\n");
		mvprintw(y, x, "00000\n");
		refresh();
	}	
 	endwin();
 }
}
}

int GameMovement(int width_x, int height_y)
{
	int aa;
	int bb;
	int y;
	int x;
	height_y = y;
	width_x = x;
	printw("%d", height_y);
	printw("%d", width_x);
    clear();
	mvprintw(y, x, "o");
	mvprintw(y+1, x, "o");
	mvprintw(y+2, x, "o");
	mvprintw(y+3, x, "o");
	refresh();



// usleep(500);

	
}




int main(int argc, char **argv)
{

//	GameLoop();
//int x = 0, y = 0;

// initscr();
// noecho();
// curs_set(FALSE);
//
// while(1) {
// clear(); // Clear the screen of all
// // previously-printed characters
// mvprintw(y, x, "o"); // Print our "ball" at the current xy position
// refresh();
//
// usleep(50000); // Shorter delay between movements
// x++; // Advance the ball to the right
// }
//
// endwin();
 initscr();
 cbreak();
 noecho();
 scrollok(stdscr, TRUE);
 nodelay(stdscr, TRUE);
 keypad(stdscr, TRUE);

 int x = 0, y = 0;
 int max_y = 0, max_x = 0;
 int next_x = 0;
 int next_y = 0;
 int direction = 1;
 int xx = 0;
 int yy = 0;

 curs_set(FALSE);
	GameMovement(10, 10);
 // Global var `stdscr` is created by the call to `initscr()`
 getmaxyx(stdscr, max_y, max_x);

 while(1) {
 
int mov=getch();

	switch(mov)

	{
//		case 'h':
		case KEY_LEFT:
  		x = x - 1;
			clear();
			mvprintw(y, x, "o");
			mvprintw(y+1, x, "o");
			mvprintw(y+2, x, "o");
			mvprintw(y+3, x, "o");
			refresh();
//			GameMovement(y, x);
  		break;
		case KEY_RIGHT:
  //	case 'l':
  		x = x + 1;
			clear();
			mvprintw(y, x, "o");
			mvprintw(y+1, x, "o");
			mvprintw(y+2, x, "o");
			mvprintw(y+3, x, "o");
			refresh();
//			GameMovement(y, x); 
  		break;
		case KEY_UP:
  //	case 'k':
  		y = y - 1;
			clear();
			mvprintw(y, x, "o");
			mvprintw(y+1, x, "o");
			mvprintw(y+2, x, "o");
			mvprintw(y+3, x, "o");
			refresh();
//			GameMovement(y, x);
  		break;
		case KEY_DOWN:
//  	case 'j':
  		y = y + 1;
			clear();
			mvprintw(y, x, "o");
			mvprintw(y+1, x, "o");
			mvprintw(y+2, x, "o");
			mvprintw(y+3, x, "o");
			refresh();
//			//
	//		GameMovement(y, x);
			break;
		case 'q':
			printw("Goodbye!");
			return 0;

		
	}
 //next_x = x + direction;
//	next_y = y + direction;
// if (next_y >= max_y-3 || next_y < 0) {
// direction *= -1;
// } else {
// y+= direction;
// }
 }

endwin();
curs_set(true);




};
