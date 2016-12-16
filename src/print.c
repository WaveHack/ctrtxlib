#include <stdarg.h>
#include <stdio.h>
#include <tx/cursor.h>
#include <tx/print.h>

int txPrint(const char *format, ...) {
    int ret;
    va_list args;

    va_start(args, format);
    ret = vprintf(format, args);
    va_end(args);

    return ret;
}

int txPrintAt(unsigned int row, unsigned int col, const char *format, ...) {
    int ret;
    va_list args;

    va_start(args, format);
    txCursor(row, col);
    ret = vprintf(format, args);
    va_end(args);

    return ret;
}
