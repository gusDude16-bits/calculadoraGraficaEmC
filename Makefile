TARGET = calculadoraGrafica

CC = gcc

CFLAGS = -Wall -g

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)

clean
	rm -f $(TARGET) *.o