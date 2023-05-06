#include <iostream>
#include <string>
using namespace std ;


int main()
{
    string letters{};

    cout << "Enter a number  so I can create a Pascal Pyramid from it: ";
    getline(cin, letters);

    

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = letters.length()-position; // lazm nn2soo mn el position 3ashan hna 3dd el  spaces fe kol satr kam space w de 3la 7asb 7agm el string
        while (num_spaces > 0) {
            cout << " ";
            --num_spaces; // de ms2ola 3n 3dd el space fy el stoor ya3ny eny asln ykoon fe stoor feha spaces
        }

      
        for (size_t j=0; j < position; j++) {
            cout << letters.at(j);
        }

        // Display the current 'center' character
        cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            cout << letters.at(k);
        }

        cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
}