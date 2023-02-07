# Head First Design Patterns in C++

## ✨ Introduction

---

This repository contains my solutions in C++ to the problems of each chapter presented in the book [Head First Design Patterns](https://www.amazon.com.br/Head-First-Design-Patterns-Object-Oriented/dp/149207800X/ref=pd_lpo_2?pd_rd_i=149207800X&psc=1) by Eric Freeman & Elisabeth Robson [(better pricing here)](https://libgen.li/edition.php?id=138628923).

**Note**: these solutions are *not!* necessarily the most efficient or most precise way of handling the translations to C++.

They are merely a practise exercise of a humble knowledge seeking young apprentice in C++'s OO tools and design.

## 📁 File Organization

---

- **c1_DuckSim**
- **c2_WeatherStation**
- **c3_StarBuzzCoffee**
- .gitignore
- README.md

Each chapter folder is structured in the following way:

- **inc** - Folder containing the header files.
- **src** - Folder containing the .cpp files.
- **build**
- CMakeLists.txt
- README.md
- main.cpp - The main test file.

## 🚀 Execution

---

This project used CMake to it's compilation.

To compile, go to the chapter directory build folder and run:

```console
cmake ..
make
```

After compiling, to run the file:

```console
./main
```
