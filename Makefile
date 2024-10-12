CC = clang
CFLAGS = -Wall -Iinclude -arch arm64  # Ajoute l'architecture (modifie selon ton processeur)

SRC = src/main.c src/controller.c
OBJ = $(SRC:.c=.o)

TARGET = gestionnaire_contacts

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
