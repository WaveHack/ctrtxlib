#include <stdio.h>
#include <tx/cursor.h>
#include <tx/misc.h>

void txClearScreen() {
    printf("\x1b[2J");
    txCursor(0, 0);
}
