#include <stdio.h>
#include <tx/cursor.h>
#include <tx/misc.h>
#include <tx/print.h>

void txClearScreen() {
    txPrint("\x1b[2J");
    txCursor(0, 0);
}
