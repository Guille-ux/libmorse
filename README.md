# libmorse

*libmorse is a c library to translate characters to morse code*

***Note**: this only works on linux, because the build script is in bash, if you are in another system without ```gcc``` you will need to compile manually*

---

## Features

- **With Batteries Included**: works in every system because it has def's for everything that it needs.
- ****


## Installing
---
### Requirements

- ```git``` : 
  ```bash
    sudo apt install git
  ```
- ```ConduitPkg```:
  ```bash
    pip install conduitpkg
  ```
---
### Install from ConduitPkg

1. Add Repository:
  ```bash
    cpkg repo add https://guille-ux.github.io/pkg_list.json
  ```
2. Download Package:
  ```bash
    cpkg get pkg libmorse
  ```
3. Build Lib
  ```bash
    cpkg run libmorse-build
  ```
---

## Functions

*Note: obviously i'm going to improve this*

### Libmorse User Oriented Functions

|Function|Purpose|
|-|-|
|```Character ascii2character(char asciiCode);```|Translates an ASCII character to the middle representation|
|```void character2morse(Character chara, char *buffer);```|Writes to a buffer the morse representation in ASCII|

### Libmorse Internal Functions

|Function|Purpose|
|-|-|
|```void libmorse_memcpy(uint8_t *src, uint8_t *dest, size_t len);```|A function to copy and paste data between arrays|

## Structures & Enums

## License

- MIT license : <https://mit-license.org>

## Author 

- Guillermo Leira Temes (Guille-ux) <guillermoleiratemes@protonmail.com> 
