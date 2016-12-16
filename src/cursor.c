#include <tx/cursor.h>
#include <tx/print.h>

void txCursor(unsigned int row, unsigned int col) {
    txPrint("\x1b[%d;%dH", row, col);
}

void txCursorRow(unsigned int row) {
    txPrint("\x1b[%d;H", row);
}

void txCursorCol(unsigned int col){
    txPrint("\x1b[;%dH", col);
}
