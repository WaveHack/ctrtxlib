#include <tx.h>

int main() {
    txClearScreen();

    txCursor(2, 2);
    txPrint("ctrtxlib example project");

    txCursor(4, 4);
    txPrint("txCursor()");

    txPrintAt(5, 4, "txPrintAt()");

    txPrint("\n\ndone");

    return 0;
}
