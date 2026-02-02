CXXFLAGS = -Wall -Werror -O
LDLIBS = -lstdc++ -lm
RM = rm -f

Out.txt : math
	./math > Out.txt
math : math.o sfuns.o
	$(CXX) math.o sfuns.o $(LDLIBS) -o math
math.o : math.cc sfuns.h
	$(CXX) $(CXXFLAGS) -c math.cc -o math.o

sfuns.o : sfuns.cc sfuns.h
	$(CXX) $(CXXFLAGS) -c sfuns.cc -o sfuns.o

clean :
	$(RM) Out.txt math.o math sfuns.o 