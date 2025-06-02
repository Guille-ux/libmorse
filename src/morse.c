// LibMorse implementation 
// MIT license
// 2025

#include "morse.h"

void libmorse_memcpy(uint8_t *src, uint8_t *dest, size_t len) {
  for (size_t i=0; i<len;i++) {
    dest[i]=src[i];
  }
}

Character ascii2character(char asciiCode) {
  switch (asciiCode) {
    case 'A': return MorseA;
    case 'B': return MorseB;
    case 'C': return MorseC;
    case 'D': return MorseD;
    case 'E': return MorseE;
    case 'F': return MorseF;
    case 'G': return MorseG;
    case 'H': return MorseH;
    case 'I': return MorseI;
    case 'J': return MorseJ;
    case 'K': return MorseK;
    case 'L': return MorseL;
    case 'M': return MorseM;
    case 'N': return MorseN;
    case 'O': return MorseO;
    case 'P': return MorseP;
    case 'Q': return MorseQ;
    case 'R': return MorseR;
    case 'S': return MorseS;
    case 'T': return MorseT;
    case 'U': return MorseU;
    case 'V': return MorseV;
    case 'W': return MorseW;
    case 'X': return MorseX;
    case 'Y': return MorseY;
    case 'Z': return MorseZ;
    case 'a': return MorseA;
    case 'b': return MorseB;
    case 'c': return MorseC;
    case 'd': return MorseD;
    case 'e': return MorseE;
    case 'f': return MorseF;
    case 'g': return MorseG;
    case 'h': return MorseH;
    case 'i': return MorseI;
    case 'j': return MorseJ;
    case 'k': return MorseK;
    case 'l': return MorseL;
    case 'm': return MorseM;
    case 'n': return MorseN;
    case 'o': return MorseO;
    case 'p': return MorseP;
    case 'q': return MorseQ;
    case 'r': return MorseR;
    case 's': return MorseS;
    case 't': return MorseT;
    case 'u': return MorseU;
    case 'v': return MorseV;
    case 'w': return MorseW;
    case 'x': return MorseX;
    case 'y': return MorseY;
    case 'z': return MorseZ;
    case '0': return Morse0;
    case '1': return Morse1;
    case '2': return Morse2;
    case '3': return Morse3;
    case '4': return Morse4;
    case '5': return Morse5;
    case '6': return Morse6;
    case '7': return Morse7;
    case '8': return Morse8;
    case '9': return Morse9;
    default: return MorseError;
  }
}

void character2morse(Character chara, char *buffer) {
  case MorseA: libmorse_memcpy(".-/", buffer, 3); break; // barras laterales separan simbolo
  case MorseB: libmorse_memcpy("-.../", buffer, 5); break;
  case MorseC: libmorse_memcpy("-.-./", buffer, 5); break;
  case MorseD: libmorse_memcpy("-../", buffer, 4); break;
  case MorseE: libmorse_memcpy("./", buffer, 2); break;
  case MorseF: libmorse_memcpy("..-./", buffer, 5); break;
  case MorseG: libmorse_memcpy("--./", buffer, 4); break;
  case MorseH: libmorse_memcpy("..../", buffer, 5); break;
  case MorseI: libmorse_memcpy("../", buffer, 3); break;
  case MorseJ: libmorse_memcpy(".---/", buffer, 5); break;
  case MorseK: libmorse_memcpy("-.-/", buffer, 4); break;
  case MorseL: libmorse_memcpy(".-../", buffer, 5); break;
  case MorseM: libmorse_memcpy("--/", buffer, 3); break;
  case MorseN: libmorse_memcpy("-./", buffer, 3); break;
  case MorseO: libmorse_memcpy("---/", buffer, 4); break;
  case MorseP: libmorse_memcpy(".--./", buffer, 5); break;
  case MorseQ: libmorse_memcpy("--.-/", buffer, 5); break;
  case MorseR: libmorse_memcpy(".-./", buffer, 4); break;
  case MorseS: libmorse_memcpy(".../", buffer, 4; break;
  case MorseT: libmorse_memcpy("-/", buffer, 2; break;
  case MorseU: libmorse_memcpy("..-/", buffer, 4); break;
  case MorseV: libmorse_memcpy("...-/", buffer, 5); break;
  case MorseW: libmorse_memcpy(".--/", buffer, 4); break;
  case MorseX: libmorse_memcpy("-..-/", buffer, 5); break;
  case MorseY: libmorse_memcpy("-.-/", buffer, 4); break;
  case MorseZ: libmorse_memcpy("--../", buffer, 5); break;
  case Morse0: libmorse_memcpy("-----/", buffer, 6); break;
  case Morse1: libmorse_memcpy(".----/", buffer, 6); break;
  case Morse2: libmorse_memcpy("..---/", buffer, 6); break;
  case Morse3: libmorse_memcpy("...--/", buffer, 6); break;
  case Morse4: libmorse_memcpy("....-/", buffer, 6); break;
  case Morse5: libmorse_memcpy("...../", buffer, 6); break;
  case Morse6: libmorse_memcpy("-..../", buffer, 6); break;
  case Morse7: libmorse_memcpy("--.../", buffer, 6); break;
  case Morse8: libmorse_memcpy("---../", buffer, 6); break;
  case Morse9: libmorse_memcpy("----./", buffer, 6); break;
  default: return;
  }
}
