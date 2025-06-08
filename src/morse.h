// LibMorse def's
// MIT license
// 2025 Copyright Guillermo Leira Temes

#ifndef MORSE_H
#define MORSE_H

typedef unsigned char Bool;

#define false 0
#define true 1

#define null (void *)0


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
 unsigned long int len;
 char *chars;
} String;

void libmorse_memcpy(char *src, char *dest, unsigned long int len);

Character ascii2character(char asciiCode);

void character2morse(Character chara, char *buffer);

#endif
