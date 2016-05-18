CC	 	= gcc
CFLAGS		= -c -Wall -D_GNU_SOURCE
LDFLAGS		= -lpcap
SOURCES		= sniff.c
INCLUDES	= -I.
OBJECTS		= $(SOURCES:.c=.o)
TARGET		= sniff

all: $(SOURCES) $(TARGET)

$(TARGET): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

clean:
	rm -rf $(OBJECTS) $(TARGET)
