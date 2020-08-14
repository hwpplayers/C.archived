# Chapter 1
## The basic syntax principles of [C](https://en.wikipedia.org/wiki/C_(programming_language)), notion of function


### History of the C language

The C language was invented to rewrite UNIX in a more readable and easier form
to maintain for a programmer. In that sense, it's a language with high-level 
instructions and structures, unlike assembly language, while still being able to
strongly limiting the hardware abstraction, as it is intended to design an
operating system and thus manipulate the computer hardware. 

The syntax of the C language inherits very strongly from the B and BCPL 
languages, respective inventions of Ken Thompson and Martin Richards. 
The B language being the PDP-clean version of the BCPL. 

The BCPL language, created in 1967, was an innovative invention in programming : 
a system language that was one of the first so-called "portable" languages. This 
portability was due to a revolutionary idea: byte-code, or rather named _O-code_
at this time (for Object) and a virtual machine.
This principle was used in 1995 with Java and then C#. 

C didn't keep this specificity, being intended to generate the UNIX system for 
a single machine: the PDP-11. However, when the GCC compiler arrived and the 
architectures intended to use the C language became more diversified, 
the well-known compiler brought this idea into the design of its system and 
implemented the principle of a virtual instruction set in which the sources 
are compiled for then be projected to any architecture, i.e. from a temporary
byte code.

A source file written in C language contains various expressions. They are 
distinguished between three types: preprocessor directives, instructions and 
comments.


### Comments in C language

A comment, as its name indicates, allows you to comment on a line, a code block
or an entire code file. Its purpose is to document, explain the operations of 
a program and the reason for the choices that are made during an implementation. 

To create a C comment, here are some examples.

```C
// This is a comment

/* This is a comment as well */

/* This is a 
    multiline comment ! */
```

### C language instructions

The C language has a globally imperative syntax, i.e. describing the 
operations in instruction sequences executed by the computer to modify 
the status of the program. 

There are usually five types of instructions in such a language.

#### Instruction sequences

An instruction sequence, also called an instruction block, is the result of 
temporal prioritization of the execution of several instructions in a row, 
in other words, creating a list of instructions (the basis of what is called
a program).

In C there are several ways to create sequences, the most well known being the 
famous semicolon. 

For example, here is a sequence of instructions in C language. 

```C
instruction0;
instruction1;
instruction2;
```

But, in a more subtle way, you can also make a sequence with brackets.

```C
instruction0 {
    instruction1;
    instruction2;
}
```

Please note that this second example is by no means equivalent to the first. But 
the _instruction0_ is here an instruction of the sequence, not signalled by a
semicolon.

It is also possible to create block sequences, which can be used by the compiler
to improve program optimization. 
This is usually done to indicate that this sequence should not be 
exploded. It's done with brackets. 

```C
{
    instruction0;
    instruction1;
    instruction2;
}

{
    instruction3;
    instruction4;
    instruction5;
}
```

#### Assignment

This type of instruction represents a change operation on the information in the
computer's memory. 
 
The C language generally abstracts from the memory boxes by the variable bias.
Assignment also requires you to define the type of the variable (the type being
the reference indicating the data structure at to which this variable belongs: 
integer, floating, array, character...).

For example, here we assign the number 14 in a variable named _number_ and which
type is _int_ (for Integer, i.e. integer).

```C
int number = 14;
```

It is also possible to assign the value of one variable to another.

```C
int number = 14;
int number2 = number;
```

#### Conditions

First category of so-called _control_ instructions, these instructions are not 
intended to process the information (unlike the assignment for example). 

Conditions are instructions for changing the behavior of the program flow 
depending on values of conditions. 

For example, let's imagine a naive program of a safe door at combination. This 
type of program must therefore verify that the vault user typed in the right 
code to open the door. If the code is right, then the door can open.

In C this is what it looks like. 

```C
int door_code = 1234;           // The registered door code
int code_seized_by_user = 6666; // The code that the user enters
int door_open = 0;              // A 1 if the door is open, 0 otherwise

if (door_code == user_selected_code) {
    open_door = 1;              // The door opens!
}
```

More generally. 

```C
if (condition) {
    instruction;
}
```

It is also possible to provide for a second case when the condition is not
respected.

```C
if (condition) {
    instruction_if_respected;
} else {
    instruction_else;
}
```
