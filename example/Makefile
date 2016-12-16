TARGET = bin/example
CC = gcc
CFLAGS = -m32 -Wall -Wextra -I../include
LDFLAGS = -m32 -L../cmake-build-release -lctrtx
RM = rm -f

SOURCES = src/main.c
OBJECTS = $(SOURCES:src/%.c=obj/%.o)

all: $(TARGET)

$(TARGET): $(OBJECTS) bin
	$(CC) -o $@ $< $(LDFLAGS)

obj/%.o: src/%.c obj
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJECTS)

bin:
	mkdir $@

obj:
	mkdir $@
