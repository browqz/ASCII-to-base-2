#include <iostream>
#include <bitset>

using namespace std;

string asciiToBinary(const string& asciiString) {
    string binaryString = "";
    for (char c : asciiString) {
        binaryString += bitset<8>(c).to_string() + " "; 
    }
    return binaryString;
}

int main() {
    string input;
    cout << "Entrez une chaine de caracteres ASCII : ";
    cin >> input;

    string binary = asciiToBinary(input);
    cout << "La representation binaire de la chaine ASCII est : " << binary << endl;

    return 0;
}