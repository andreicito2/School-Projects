SRCS = imdb_graph.cpp menu.cpp imdb_graph_test.cpp
EXE = a.out
BRIDGES_CXXFLAGS = -I.

ifeq ($(BRIDGES),)
	# Code.CS student settings (default)
	BRIDGES_LDFLAGS = -L../../include/curl/lib
	BRIDGES_CXXFLAGS = -I. -I../../include/curl/include -I../../include/bridges/include
else
	# Override BRIDGES include path
	BRIDGES_LDFLAGS = -L$(BRIDGES)curl/lib
	BRIDGES_CXXFLAGS = -I. -I$(BRIDGES)curl/include -I$(BRIDGES)bridges/include
endif

ifeq ($(DRIVER),)
	# Code.CS student settings (default)
	SRCS += test_driver.cpp
else
	# Alternate driver supplied (likely for Submitty testing)
	SRCS += $(DRIVER)
endif

# Everything below that should not have to change ever.
CXX = g++

TARGET = all

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -g -std=c++14 -Wall $(BRIDGES_CXXFLAGS)

LDFLAGS = -g $(BRIDGES_LDFLAGS) -pthread
LIBS = -lcurl

$(EXE): $(OBJS)
	$(CXX) -o $(EXE) $(OBJS) $(LDFLAGS) $(LIBS)

.SUFFIXES: .cpp

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(EXE)

clean:
	-rm -f $(OBJS)
	-rm -f *.o
	-rm -f $(EXE)
	-rm -f log.txt
	-rm -f solutions.txt
