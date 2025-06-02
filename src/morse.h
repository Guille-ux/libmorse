// LibMorse def's
// MIT license
// 2025 Copyright Guillermo Leira Temes

#ifndef MORSE_H
#define MORSE_H

#ifndef STDINT_H
#define STDINT_H

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
typedef unsigned long int size_t;

typedef unsigned char bool;

#define FALSE 0
#define TRUE 1

#define NULL (void *)0

#endif

typedef enum {
  MorseA,
  MorseB,
  MorseC,
  MorseD,
  MorseE,
  MorseF,
  MorseG,
  MorseH,
  MorseI,
  MorseJ,
  MorseK,
  MorseL,
  MorseM,
  MorseN,
  MorseO,
  MorseP,
  MorseQ,
  MorseR,
  MorseS,
  MorseT,
  MorseU,
  MorseV,
  MorseW,
  MorseX,
  MorseY,
  MorseZ,
  // Numbers
  Morse0,
  Morse1,
  Morse2,
  Morse3,
  Morse4,
  Morse5,
  Morse6,
  Morse7,
  Morse8,
  Morse9,
  MorseError,
} Character;

typedef struct {
 size_t len;
 char *chars;
} String;

void libmorse_memcpy(uint8_t *src, uint8_t *dest, size_t len);

Character ascii2character(char asciiCode);

void character2morse(Character chara, char *buffer);

#endif
