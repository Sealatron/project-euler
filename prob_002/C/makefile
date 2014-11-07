CXX = gcc
CXXFLAGS = -c -Wall
LDFLAGS =
SOURCES = *.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = even-fibonacci-sum

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CXX) $(CXXFLAGS) $< -o $@
	
clean:
	rm *.o && rm $(EXECUTABLE)
