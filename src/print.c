#include <stdarg.h>
#include <stdio.h>
#include <tx/print.h>

void txPrint(const char *format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);

    va_end(args);
}
