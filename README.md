# Stacks, Queues - LIFO, FIFO

This project is used to demonstrate use of queues and stacks

![Make tea!](monty.png 'monty.png')

## The Monty language

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files

Files containing Monty byte codes usually have the `.m` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

## Allowed operations

`push, pall, pint, pop, swap, swap, add, nop`

## How to compile

> git clone https://github.com/joshua530/monty.git
>
> cd monty
>
> gcc -Wall -Werror -Wextra -pedantic \*.c -o monty
>
> ./monty bytecodes/000.m

## Usage

> `monty file`
>
> where `file` is the path to the file containing Monty byte code
