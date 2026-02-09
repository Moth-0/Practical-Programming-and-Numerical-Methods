# Default Makefile
# Variables
CXXFLAGS = -Wall -Werror -O -std=c++23
CXX = c++
LDLIBS = -lstdc++ -lm
RM = rm -f

TARGETS = main1 main2 main3

OBJECTS = $(TARGETS): %.o

all: $(TARGETS)

$(TARGETS): %: %.cc
	$(CXX) $(CXXFLAGS) $< $(LDLIBS) -o $@

%.o : %.cc
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	$(RM) Out.txt $(TARGETS) *.o