IDIR = ../170129306_Alicia
CC = g++ 
CFLAGS = -I$(IDIR)
LIBS = -lm

ODIR=obj
LDIR =../lib

_DEPS = romano.hpp 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

ODIR=obj

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)
	
run: $(OBJ)
	./romano
	
verificar: all
	valgrind --leak-check=full $(ODIR) /%.o
	cppcheck --enable=warning .
		
clean:
	rm -f $(ODIR)/*.o 