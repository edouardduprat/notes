Assignment 4 - print-file

Write a program that prints an entire file to stdout. Your program should be able to accept a file like so:
~> ./a.out print-file.txt | cat -e
yo, it works,$
$
which is dope!$
$
But make sure the spacing$
is                correct.$
$
And that this stuff is right:$
!@#$%^&*()-=_+[]\;',./{}|:"<>?`~$
01234567890$
$
good luck!$ 
    :P$
~>
If more than one argument is passed, the program should return a new line:
~> ./a.out print-file.txt second-arg | cat -e
$
~>
