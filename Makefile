CC = gcc
EXE = https
CFLAGS = -Wall
LDFLAGS = -lssl

$(EXE): main.o socket.o url.o http.o https.o
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

main.o: main.c https.h
socket.o: socket.c socket.h
url.o: url.c url.h
http.o: http.c http.c
https.o: https.c https.h http.h

clean:
	rm -f *.o $(EXE)
