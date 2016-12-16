#include <stdarg.h>
#include <stdio.h>
#include <tx/cursor.h>
#include <tx/print.h>

void txPrint(const char *format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);

    va_end(args);
}

void txPrintAt(unsigned int row, unsigned int col, const char *format, ...) {
    va_list args;
    va_start(args, format);

    txCursor(row, col);
    vprintf(format, args);

    va_end(args);
}
