<!-- MED-007 -->

# Number Guessing Game

This is a simple C++ program that implements a number guessing game. The program generates a random number between 1 and 100, and the player has up to 5 attempts to guess the number correctly.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)

## Features

- Random number generation between 1 and 100.
- Provides feedback on whether the guess is too high or too low.
- Limits the player to 5 attempts.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., GCC, Clang, or MSVC).

### Building the Program

1. Clone the repository:
    ```bash
    git clone https://github.com/MED-007/Games.git
    cd Games
    ```

2. Compile the program:
    ```bash
    g++ -o guessgame.cpp
    ```

3. Run the program:
    ```bash
    ./guessgame
    ```

## Usage

1. Run the program.
2. Enter your guess (a number between 1 and 100) when prompted.
3. The program will provide feedback on whether your guess is too high, too low, or correct.
4. You have 5 attempts to guess the number correctly.

Example output:
```
***** Number Guessing Game *****

Enter a guess between 1 to 100: 50
Too high

Enter a guess between 1 to 100: 25
Too low

Enter a guess between 1 to 100: 37
Too high

Enter a guess between 1 to 100: 31
Correct! | number of tries is: 4
**********************************
```
