CXXFLAGS = -std=c++11
LDFLAGS = -L/usr/local/lib -lfltk -lXext -lX11 -lm

all: cli

debug: CXXFLAGS += -g
debug: cli

rebuild: clean cli



cli: hw7.cpp
	$(CXX) $(CXXFLAGS) $(fltk-config --cxxflags) -o cli hw7.cpp

clean:
	-rm -f *.o  cli

