avr-gcc -Wall -g -Os -mmcu=atmega644 -o blink.bin blink.c
avr-objcopy -j .text -j .data -O ihex blink.bin blink.hex