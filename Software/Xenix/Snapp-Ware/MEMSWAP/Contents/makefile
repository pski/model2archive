#
#	Makefile for TRS-XENIX 3.1 conf directory
#

SHELL=/bin/sh
AS=as
CC=cc
LD=ld
NM=nm

LIBROOT=lib_os
LIBIO=../io/lib_io
LIBC=-lc

DEFINES=
CFLAGS= -O -K ${DEFINES}
LDFLAGS= -v 3 -R 0 -X


OBJS = mch.o z80.o c.o swap.o $(LIBROOT) $(LIBIO)

xenix: $(OBJS)
	$(LD) $(LDFLAGS) -sr $(OBJS) $(LIBC) -o xenix
	./patch xenix from swap.p
	size xenix

c.o:    c.c

c.c:	conf master config
	./config -m master conf
