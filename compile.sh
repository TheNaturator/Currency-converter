g++ -c -m64 -pipe -O2 -Wall -W -I. -o main.o main.cpp
g++ -c -m64 -pipe -O2 -Wall -W -I. -o cconv.o cconv.cpp
g++ -m64 -Wl,-O1 -o konwerter main.o cconv.o
