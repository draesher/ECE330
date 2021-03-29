IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = HeartRates.h
DEPS = $(patsubst %,$(ODIR)/%,$(_DEPS))

_OBJ = HeartRates.cpp HealthInfo.cpp
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
$(OBJ): $(ODIR)/%.o: src/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~



