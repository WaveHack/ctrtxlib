#include <tx.h>

int main() {
    txCursor(10, 10);
    txPrint("Hello, world!\n");

    txPrintAt(11, 10, "txPrintAt()");

    return 0;
}
