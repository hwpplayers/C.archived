# Chapter 0
## Presentation of C compilation interfaces


### The C compiler

Established in 1972 at Bell Laboratories by Dennis Ritchie and Ken Thompson,
the C language is intrinsically linked to the implementation of UNIX.
There are many compilers for this language, and many tools through
history. 

The first compilers are those of the so-called "classic C", which is called the 
K&R, originally designed by Dennis Ritchie and Brian Kernighan. These compilers 
had the disadvantage that they were all incompatible with each other, because 
there was no no real standard. 

From 1980, the C language stabilized in its ANSI C form, and the first 
standard compilers appeared, including the Amsterdam Compiler, the Amsterdam 
Compiler Andrew Tanenbaum's kit. It was at this time that the GNU Project was 
started by Richard M. Stallman, and that he is proposing to Andrew Tanenbaum to 
join his compiler in the GNU Project. The latter refuses the proposal, 
preferring its compiler remains proprietary software. That's how GCC was born 
and that its first version was distributed in 1987.

Today GCC (for GNU Compiler Collection) supports many languages from 
programming, and is one of the most used C compilers with Clang (LLVM). The 
difference between these two compilers is primarily a difference of license, 
GCC being distributed under the GPL and Clang being distributed under the 
BSD+Apache license, best suited for integration into licensed operating systems 
permissive.

### Compilation scripts

Very early in history, the process of compiling programs became complex and 
much longer than in the past. Projects were becoming cumbersome, and the 
separation of pieces of code in different files became a thing necessary. 
In the 1970's, most projects used scripts shell to compile their code. This had 
two drawbacks: the need to recompile the whole project at the slightest change, 
and a real puzzle for the dependencies. 

In 1977, Dr. Stuart Feldman at Bell Laboratories designed Make. This software is
based on a modified syntax of shell scripts and the concept of recipes. These
recipes are pieces of code whose purpose is to generate targets at from their 
dependencies. For example, if five C code files were needed to compile a 
project, the Make script file, called a Makefile, then contained five recipes 
for each C file to be compiled, then a sixth recipe linking the five files in an
executable. The separate compilation was born. 

### Using Makefiles

Makefiles use a syntax based on the target/dependency ratio.

```Makefile
target: dependencies
    command to generate the target

```

Let's imagine that we want to write the Makefile corresponding to the composed 
project of five code files presented earlier. Five recipes are then required 
for each target. For example, for the first target, it reads: 

```Makefile
object1: file1.c
    command to compile file 1 
```

Finally, you need a target that generates the final executable:

``Makefile
executable: object1 object2 object3 object4 object5 object5
    command to link the five objects into an executable file
```

We will then study in detail the generation of an executable file.
