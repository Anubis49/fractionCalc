OBJ += main.o
OBJ += run.o
OBJ += fractionBase.o

fractionCalc.app: $(OBJ)
	g++ -o $@ $(OBJ)

%.o:%.cpp
	g++ -c $<

clear:
	rm *.o fractionCalc.app
