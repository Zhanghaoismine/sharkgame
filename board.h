#include <stdio.h>
#include <stdlib.h>

#define BOARDSTATUS_OK        1
#define BOARDSTATUS_NOK       0

int board_initboard(void);

int board_printBoardStatus(void); //턴 돌 때마다 출력

int board_getBoardCoin(int pos);
 
int board_getSharkPosition(void);

int board_stepShark(void);

int board_getBoardStatus(int pos);

