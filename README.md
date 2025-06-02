# libmorse

*libmorse is a c library to translate characters to morse code*
---
*Note: this only works on linux, because the build script is in bash, if you are in another system without ```gcc``` you will need to compile manually*
---



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

## Author 

- Guillermo Leira Temes (Guille-ux) <guillermoleiratemes@protonmail.com> 
