#ifndef king
#define king

#include <stdbool.h>
#include "../gameManager.h"

extern bool whiteKingMoved;
extern bool blackKingMoved;

bool legalMoveKing(Position, Position);

#endif