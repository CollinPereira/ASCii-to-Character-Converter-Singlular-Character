#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Welcome to the ASCII to character converter" << endl;
    cout << "You have up to 50 entries. (Press 'q' or 'Q' to quit at any time)" << endl << endl;
    cout << "Written by Asep1582 (RaspingWheel22)" << endl;

    char ch;
    int entryCount = 0; 

    do {
        cout << "Enter a character: ";
        ch = getch();
        
        cout << ch << " - ASCII: " << static_cast<int>(ch) << endl;

        entryCount++;
    } while (ch != 'q' && ch != 'Q' && entryCount < 50);

    cout << endl << "Thank you for using the converter!" << endl;

    return 0;
}
