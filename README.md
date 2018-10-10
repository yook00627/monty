# Monty Bytecode Interpreter

### Documentation

## Installation
- You can compile the code with the following:
  - git pull the repository
  - gcc *.c -o monty
  - usage: ./monty <filename>
    - filename is the name of the file with operators
    - the operator should have one operator per line

## Monty Language
Monty bytecode is a language to use a simle memory stack and push and pop in and out of it.

## main functions
- monty.h - inlclude all function prototypes and header
- main.c - main fucntion file

## Operator Instruction
- push.c - pushes value to stack
  - usage: push 123
- pall.c - prints everything on the stack LIFO
  - usage: pall
- pint.c - prints the top value of the stack
  - usage: pint
- add.c - adds the top two elements of the stack
  - usage: add
- sub.c - subtracts the top element of the stack from the second top element of the stack
  - usage: sub
- swap.c - swaps the top two elements of the stack
  - usage: swap
- pop.c - removes the top element of the stack
  - usage: pop
- nop.c - doesn't do anything
  - usage: nop
- div.c - divides the second top element of the stack by the top element of the stack
  - usage: div
- mul.c - multiplies the second top element of the stack with the top element of the stack
  - usage: mul
- mod.c - computes the rest of the division of the second top element of the stack by the top element of the stack
  - usage: mod
- pchar.c - prints the char at the top of the stack, followed by a new line
  - usage: pchar
- pstr.c - prints the string starting at the top of the stack, followed by a new line.
  - usage: pstr
- rotl.c - rotates the stack to the top. The top element of the stack becomes the last one, and the second top element of the stack becomes the first one
  - usage: rotl
- rotr - rotates the stack to the bottom. The last element of the stack becomes the top element of the stack
  - usage: rotr

### Authors
Kevin Yook, Andrew Suh
