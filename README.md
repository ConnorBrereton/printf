# :arrows_counterclockwise: :wrench: printf()

_printf() is a rebuild of the GNU print() out of the standard C library. This build is ISO compliant due to compilation from the C90 compiler. 


## :running: Getting Started

* [Ubuntu 14.04 LTS](http://releases.ubuntu.com/14.04/) - Operating system reqd.

* [GCC 4.8.4](https://gcc.gnu.org/gcc-4.8/) - Compiler used


## :warning: Prerequisites

* Must have `git` installed

* Must have repository cloned

```
$ sudo apt-get install git
```


## :arrow_down: Installing

Clone the repository

```
$ git clone https://github.com/ConnorBrereton/printf.git
```
Include in header file

```
#include "holberton.h"
```


## :bookmark_tabs: Features

* %c : with the char argument, prints that char

* %s : with the string argument, prints that string

* %d : with the integer argument, prints that integer

* %i : with the integer argument, prints that integer

* %% : will escape the `%`, prints that character



## :clipboard: Examples

```
_printf("A char inside a sentence: %c. Did it work?\n", 'F');

output>  A char inside a sentence: F. Did it work?



_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

output> Complete the sentence: You (nil) nothing, Jon Snow.



_printf("Negative:[%d]\n", -762534);
output> Negative:[-762534]



len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

_printf("Length:[%d, %i]\n", len, len);
output> Length:[39, 39]


_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
output> Loading ... 99% Please wait
```



## :books: Coding Style Tests

Strictly followed `Betty` style guide. To install

```
$ git clone https://github.com/holbertonschool/Betty.git

$ cd Betty; ./install.sh
```


## :pencil: Version

* 0.1.0



## :blue_book: Authors

* **Connor Brereton** - [@ConnorBrereton](https://github.com/ConnorBrereton/printf)

* **Carlos Chan** - [@cchan88](https://github.com/cchan88)



## :mag: License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details



## :mega: Acknowledgments

* Carlos Chan
* Holberton School
* Stack Overflow
