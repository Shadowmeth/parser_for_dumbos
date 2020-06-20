#include <string>
#include <iostream>
using namespace std;
string id;
int i = 0;

/*
<expr> ::= <term> <op> <term>
<operator> ::= + | -
<term> = 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
*/

// helper function
bool match(int t)
{
    if (t == id[i]) {
        i++;
        return true;
    } else {
        return false;
    }
}

void term()
{
    if (match('0') || match('1') || match('2') || match('3') || match('4') || match('5') ||
        match('6') || match('7') || match('8') || match('9')) {
            return; // do nothing
        }
}

void expr()
{
    term();
    op();
    term();
}


