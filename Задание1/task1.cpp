#include <iostream>
#include <fstream>
#include <set>

using namespace std;

int main() {
    set<char> consonants = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
                            'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x',
                            'z'};

    string filename;
    cout << "Input file name:";
    cin >> filename;

    ifstream f(filename);

    if (f.is_open()) {
        while (!f.eof()) {
            char c;

            f >> c;

            if (isalpha(c))
                consonants.erase(tolower(c));
        }
        f.close();
    } else {
        cout << "Opening file error!";
        return 1;
    }

    cout << "Consonants that do not occur in any word: ";
    for (auto &letter : consonants) {
        cout << letter << " ";
    }
}