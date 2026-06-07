# C Programming: A Modern Approach

This repository contains my personal solutions to the exercises and programming projects from K.N. King's *C Programming: A Modern Approach* (2nd Edition).

## Purpose

The goal of this repository is to track my progress in mastering standard C. By working through this book, I am building a rigorous foundation in fundamental computer science concepts, including manual memory management, pointers, and low-level system architecture.

## Repository Structure

The repository is structured sequentially by chapter. Each chapter directory is divided into two sections:

* **`/exercises`**: Solutions to the end-of-chapter conceptual questions and short code snippets.
* **`/projects`**: Complete, runnable programs addressing the end-of-chapter programming projects.

## Compilation Standard

All code in this repository is written and tested on Windows using the GCC compiler. To ensure memory safety and strict adherence to ISO C standards, all programs are compiled with the following strict warning flags:

```bash
gcc -Wall -Wextra -pedantic filename.c -o filename.exe
```
