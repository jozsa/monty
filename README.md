### Monty 0.98 Interpreter

### DESCRIPTION

This program is a simple interpreter for the Monty stack
language. Using a monty file (usually suffixed with .m),
the interpreter will perform operations on the stack given
certain arguments. The Monty interpreter has built-in error
handling and will print an error message to standard error
on command failure.

![an example run of monty](assets/monty_example.gif)

### Quick Start

The monty interpreter can be compiled using
`gcc 4.8.4 -Wall -Werror -Wextra -pedantic *.c -o monty`
in the directory in which the files are contained

### Syntax

The Monty interpreter reads files written in the Monty language

### MONTY COMMANDS

Following is a list of commands to be included in .m files.
Commands may be issued with any number of spaces separating
commands and arguments, including at the beginning and end
of lines.

#### push
usage: push <int>
Pushes a new element to the stack with value <int>.
On error, will exit with an error message and status
EXIT_FAILURE

#### pall
Prints all elements of the stack, from top to bottom.
Will never fail.

#### pint
Prints the top element of the stack. On error, prints
an error message and exits with status EXIT_FAILURE

#### pop
Removes the top element of the stack. On error, prints
an error message and exits with status EXIT_FAILURE

#### swap
Swaps the top two elements of the stack. On error,
prints an error message and exits with status
EXIT_FAILURE

#### add
Adds the top element of the stack to the second. Result is
stored in the second top element of the stack, and the top
is removed. On error, prints an error message and exits
with status EXIT_FAILURE

#### nop
Does nothing

#### sub
Subtracts the top element of the stack from the second.
Result is stored in the second top element of the stack,
and the top element is removed. On error, prints an error
message and exits with status EXIT_FAILURE

#### div
Divides the second top element of the stack by the top element.
Result is stored in the second top element of the stack, and the
top element is removed. On error, prints an error message and
exits with status EXIT_FAILURE

#### mul
Multiplies the top two elements of the stack together. Result
is stored in the second top element of the stack, and the top
element is removed. On error, prints an error message and exits
with status EXIT_FAILURE

#### mod
Computes remainder of div. Result is stored in the second top
element of the stack, and the top element is removed. On error,
prints an error message and exits with status EXIT_FAILURE

#### pchar
Prints the top value of the stack as a character. On error,
prints an error message and exits with status EXIT_FAILURE

#### pstr
Prints all values of the stack as characters, from top to
bottom. The string stops when either the stack is over, the
value of the current element to print is 0, or when a value
to be printed is not within the range of ASCII values. Will
never fail.

#### COMMENTING

If the first non-space character of a line is a #, the line
will be treated as a comment, and will do nothing.   

### Authors

* [Jack Gindi](https://github.com/jmgindi)
* [Allison Weiner](https://github.com/josza)
