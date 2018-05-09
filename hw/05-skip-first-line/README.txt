Assignment 5 - skip-first-line


Write a program that skips the first line and then prints the rest of the file to stdout. Your program should be able to accept a file like so:
~> ./a.out skip-first-line.txt | cat -e
If you see me first, you are on the right path :)$
$
and if you see me after a new line, then I think you passed :D$
~>
If more than one argument is passed, the program should return a new line:
~> ./a.out skip-first-line.txt second-arg | cat -e
$
~>