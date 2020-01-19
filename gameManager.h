#ifndef gameManager
#define gameManager

#include <stdbool.h>

typedef struct Position{
    int x; 
    int y;
} Position;

extern int pieces[8][8];
extern int turn; // 1 if white, -1 if black
extern int selectedPiece;
Position selectedPiecePos;

bool sameSign();
bool opposeSign();
void printBoard();
void makeMove(Position);
void movePiece(Position, Position);
void handleClick(Position);

#endif