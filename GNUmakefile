ARCH:=$(shell arch)
SOURCES:=$(wildcard *.c)
PROGRAMS:=$(patsubst %.c,%.$(ARCH),$(SOURCES))

CFLAGS+=-Wall -O2 -g
LFLAGS+=

%.$(ARCH): %.c
	$(CC) $(CFLAGS) $< -o $@ $(LFLAGS)

all: $(PROGRAMS)

clean:
	$(RM) $(PROGRAMS)

rebuild: clean all

