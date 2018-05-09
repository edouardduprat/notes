Assignment 6 - valid-square
Write a program that will check if the file has a valid square. Your program should be able to accept a file like so:
~> ./a.out valid.txt | cat -e
This is a valid square!$
~>
A valid square is simply a 4x4 grid of dots.  Below is an example of a valid square:
....$
....$
....$
....$
**Notice that there a 4 new lines and 4 dots per line!

ERRORS:
If you are given too few or too many dots in a row, print "error: improper column size" followed by a new line:
~> ./a.out error-cols-01.txt
error: improper column size$
~>
If you are given too few or too many rows, print "error: improper row size" followed by a new line:
~> ./a.out error-rows-01.txt
error: improper row size$
~>
If you are given a character that is NOT a dot, print "error: improper character" followed by a new line:
~> ./a.out error-char-01.txt
error: improper character$
~>
If more than one argument is passed, the program should return a new line:
~> ./a.out valid.txt second-arg
$
~>

Bonus
- Instead of a.out, name your program the assignment name - ie 'print-file'.
- If file is opened successfully, before outputting your results, print this out with proper spacing:
-------------------------
CREATED BY: <your-name>
ASSIGNMENT: <assignment>
FILE:       <arg-passed>
-------------------------