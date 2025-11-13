# hw8q17.s
# CS120 - Homework 8, Question 17
# This program loads values into registers, adds them, and stores the result to memory.

        .text
        .globl main

main:
        # Load 52 into $t0
        li   $t0, 52           # decimal 52

        # Load 0x32 into $t1
        li   $t1, 0x32         # hexadecimal 0x32 (decimal 50)

        # Load 0x1234abcd into $t2
        li   $t2, 0x1234abcd

        # Add $t0 + $t1 + $t2, save result in $s0
        add   $s0, $t0, $t1
        add   $s0, $s0, $t2

        # Store the result from $s0 into memory address 0x10000008
        li   $t3, 0x10000008   # load target memory address
        sw   $s0, 0($t3)       # store the result

        # Exit the program
        li   $v0, 10
        syscall
