# 0x18-dynamic_libraries

  `Dynamic libraries` or `Shared libraries` are C source code that compiled by a specific options, the `Shared libraries` have the extension `.so` in `Linux` systems and `.dll` on windows.

  In more technical point of view `Shared libraries` are libraries that are loadedby programs at the run time.

  The main deffrence between `Dynamic` and `Static` libraries are the `Dynamic` ones are seprated from the executable program that uses them and they get loaded to main memory at the run time and program can aaccess them from there.

  In this project we will see how to generate a `Shared library` and how to use it in our code.

## source

   A dirictory that contians all the sourc codes that had been used to build `libdynamic.so` `Dynamic library`.

## 1-create_dynamic_lib.sh

   A Shell script to build a`Dynamic library` from all the `.c` files in the current dirictory

## 100-operations.so

   A 'Dynamic library` which preforms basic math oprations (`+`, `-`, `*`, `/`, and `%`) for two numbers that can be called on Python.

## 101-make_me_win.sh

