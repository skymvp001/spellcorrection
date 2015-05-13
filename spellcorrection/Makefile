EXE:=./bin/main
INC_DIR:=./inc/
SRCS:=$(wildcard ./src/*.cc)
LIBS:=
CXX:=g++
CXXFLAGS:= -Wall -g $(addprefix -I,$(INC_DIR))

$(EXE):$(SRCS)
	$(CXX) -o $(EXE) $(SRCS) $(CXXFLAGS)
clean:
	rm $(EXE)


