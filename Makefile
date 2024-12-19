TARGET = conversor

SRC_DIR = .

SRC = $(SRC_DIR)/index.c \
      $(SRC_DIR)/conv-comp/conv-comp.c \
      $(SRC_DIR)/conv-tempo/conv-tempo.c \
      $(SRC_DIR)/conv-vel/conv-vel.c \
      $(SRC_DIR)/converter-bits-bytes/converter-bits-bytes.c

CC = gcc

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $^ -o $@
