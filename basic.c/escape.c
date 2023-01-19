// Escape sequence:
// -An escape sequence in C programming language is a sequence of character.
// -It doesn't represent itself when used inside strind literal or character.
// -It is composed of two or more character starting with backlash\.For example:\n represent new line.

// some of escape sequence in C are:
// \a      Alarm or beep
// \b      backspace
// \f      From feed
// \n      new line
// \r      carriage return
// \t      tab(horizontal)
// \v      vertical tab
// \\      backslash
// \'      single quote
// \"      double quote
// \?      question mark
// \nnn    octal number
// \xhh    hexadecimal number
// \0      null
#include <stdio.h>
int main(){
    printf("1hello\nworld\n");
    printf("2hello\\world\n");
    printf("3hello\aworld\n");
    printf("4hello\bworld\n");
    printf("5hello\tworld\n");
    printf("6hello\vworld\n");
    printf("7hello\rworld\n");
    printf("8hello\?world\n");
    printf("9hello\'world\n");
    printf("10hello\"world\n");
}
