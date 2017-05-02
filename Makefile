CXXFLAGS = -w -std=c++11
LDFLAGS = -L/usr/local/lib -lXext -lm -Wl,-Bsymbolic-functions -lfltk_images -lfltk -lX11
all: gui

debug: CXXFLAGS += -g
debug: gui

rebuild: clean gui



gui: hw7.cpp
	$(CXX) $(CXXFLAGS) $(fltk-config --cxxflags) -o gui hw7.cpp
cli: hw7.cpp
	$(CXX) $(CXXFLAGS) -o cli hw7.7

clean:
	-rm -f *.o gui cli
