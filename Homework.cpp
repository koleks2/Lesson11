#include <iostream>

using namespace std;

void removeChar(char str[], int pos);
void removeAll(char str[], char ch);
void insertChar(char str[], int pos, char ch);

int main() {
    // task 1
    /*
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    int pos;
    cout << "Enter position to remove: ";
    cin >> pos;

    removeChar(str, pos);

    cout << "Result: " << str << endl;
    */
    
    // task 2
    /*
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    char ch;
    cout << "Enter character to remove: ";
    cin >> ch;

    removeAll(str, ch);

    cout << "Result: " << str << endl;
    */
    // task 3
    /*
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    int pos;
    cout << "Enter position: ";
    cin >> pos;

    char ch;
    cout << "Enter character to insert: ";
    cin >> ch;

    insertChar(str, pos, ch);

    cout << "Result: " << str << endl;
    */
    // task 4
    /*
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
            str[i] = '!';
    }

    cout << "Result: " << str << endl;
    */
    // task 5
    char str[100];

    cout << "Enter string: ";
    cin.getline(str, 100);

    char ch;
    cout << "Enter character to search: ";
    cin >> ch;

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }

    cout << "Number of occurrences: " << count << endl;

}

void removeChar(char str[], int pos) {
    int len = strlen(str);

    if (pos < 0 || pos >= len)
        return;

    for (int i = pos; i < len; i++)
        str[i] = str[i + 1];
}

void removeAll(char str[], char ch) {
    int i = 0, j = 0;

    while (str[i] != '\0') {
        if (str[i] != ch) {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';
}

void insertChar(char str[], int pos, char ch) {
    int len = strlen(str);

    if (pos < 0 || pos > len) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = len; i >= pos; i--)
        str[i + 1] = str[i];

    str[pos] = ch;
}