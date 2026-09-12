# Snake, Water, Gun Game

A command-line implementation of Snake-Water-Gun (similar to Rock-Paper-Scissors) in C, played against the computer.

## Features
- Random computer choice using `rand()` and `srand(time(0))`
- Best-of-N match modes: choose 1, 3, 5, or 7 rounds
- Live score tracking after every round
- Automatic match-winner detection once a player reaches the target score
- Replay option — play multiple matches in a single run without restarting the program

## How the game works
- **0** = Snake, **1** = Water, **2** = Gun
- Snake drinks Water, Water drowns Gun, Gun kills Snake
- First to reach the majority of chosen rounds wins the match (e.g., Best of 5 → first to 3 wins)

## Concepts used
- Nested loops (`do-while` for match replay, `while` for round-by-round play)
- Random number generation
- Score tracking with counters
- Conditional logic (if-else chains for win/lose/draw outcomes)

## How to run
```bash
gcc main_2.c -o game
./game

Choose Best of 1, 3, 5, or 7: 3
You chose Best of 3

Choose '0' for Snake, '1' for Water, '2' for Gun
0
The computer's chosen number is 1
You Win!! Snake drinks Water
Score -> You: 1 | Computer: 0
...
=== Match Over ===
You won the match 2-0!

Want to play again? 0 for yes, 1 for no: 1

Thank you for your cooperation!
