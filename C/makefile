CXX = gcc
CXXFLAGS = -c -Wall
LDFLAGS =
SOURCES = $(notdir $(shell pwd)).c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = $(notdir $(shell pwd))

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CXX) $(CXXFLAGS) $< -o $@
	
clean:
	rm *.o && rm $(EXECUTABLE)
