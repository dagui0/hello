CFLAGS		= -m64 -O3
CXXFLAGS	= -m64 -O3
LDFLAGS		= -m64

HELLO_DEPS	= main.o hello.o
HELLO_OUT	= hello

.PHONEY: clean
.SUFFIXES: .o .c .cxx

.cxx.o:
	$(CXX) $(CXXFLAGS) -o $@ -c $<
.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

$(HELLO_OUT): $(HELLO_DEPS)
	$(CXX) $(LDFLAGS) -o $@ $(HELLO_DEPS)

main.o: main.cxx hello.h
hello.o: hello.c hello.h

clean:
	rm -f $(HELLO_OUT) $(HELLO_DEPS)
