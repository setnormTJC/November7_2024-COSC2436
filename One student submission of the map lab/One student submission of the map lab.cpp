#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    // Prompt the user to input a Morse code message
    string morseCode;
    cout << "Enter a Morse code message: ";
    getline(cin, morseCode);

    map<string, char> morseMap = {
        {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'}, {".", 'E'},
        {"..-.", 'F'}, {"--.", 'G'}, {"....", 'H'}, {"..", 'I'}, {".---", 'J'},
        {"-.-", 'K'}, {".-..", 'L'}, {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
        {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'}, {"...", 'S'}, {"-", 'T'},
        {"..-", 'U'}, {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'}, {"-.--", 'Y'},
        {"--..", 'Z'}, {".----", '1'}, {"..---", '2'}, {"...--", '3'}, {"....-", '4'},
        {".....", '5'}, {"-....", '6'}, {"--...", '7'}, {"---..", '8'}, {"----.", '9'},
        {"-----", '0'}, {"/", ' '}
    };

    // Decode the Morse code message
    stringstream ss(morseCode);
    string morseChar;
    string decodedMessage = "";

    while (ss >> morseChar) {
        decodedMessage += morseMap[morseChar];
    }

    // Output the decoded message
    cout << "Decoded message: " << decodedMessage << endl;

    return 0;
}