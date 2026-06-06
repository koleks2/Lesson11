#include <iostream>
#include <Windows.h>

using namespace std;

void SpaceTab(char* str);

int mystrlen(const char* str);
char* mystrcpy(char* str1, const char* str2);
char* mystrcat(char* str1, const char* str2);
char* mystrchr(char* str, char s);
char* mystrstr(char* str1, char* str2);


int main() {
	// task 1
	/*
	char str[] = "Hello, world!";

	SpaceTab(str);

	cout << str;
	*/
	// task 2
	/*
	char str[255];
	int letters = 0, numbers = 0, others = 0;

	cout << "Enter string: ";
	cin.getline(str, 255);

	for (int i = 0; str[i] != '\0'; i++) {
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			letters++;
		else if (str[i] >= '0' && str[i] <= '9')
			numbers++;
		else
			others++;
	}

	cout << "Letters: " << letters << endl;
	cout << "Numbers: " << numbers << endl;
	cout << "Others: " << others << endl;
	*/
	// task 3
	/*
	char str[255];
	cout << "Enter string: ";
	cin.getline(str, 255);

	int wordsCount = 0;
	bool inWord = false;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' ' && !inWord) {
			wordsCount++;
			inWord = true;
		}
		else if (str[i] == ' ')
			inWord = false;
	}
	
	cout << "Words count: " << wordsCount << endl;
	*/
	// task 4
	/*
	char str[255];
	cout << "Enter string: ";
	cin.getline(str, 255);
	int len = 0;

	while (str[len] != '\0')
		len++;

	bool palindrome = true;

	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i]) {
			palindrome = false;
			break;
		}
	}

	if (palindrome)
		cout << "String is palindrom" << endl;
	else
		cout << "String is not palindrom" << endl;
	*/
	// task 5
	char str1[255] = "Hello";
	char str2[255] = " World";

	cout << "Length: " << mystrlen(str1) << endl;

	mystrcat(str1, str2);
	cout << str1 << endl;
}

void SpaceTab(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ')
			str[i] = '\t';
	}
}
int mystrlen(const char* str) {
	int len = 0;

	while (str[len] != '\0')
		len++;

	return len;
}

char* mystrcpy(char* str1, const char* str2) {
	int i = 0;

	while (str2[i] != '\0') {
		str1[i] = str2[i];
		i++;
	}

	str1[i] = '\0';

	return str1;
}

char* mystrcat(char* str1, const char* str2) {
	int len = mystrlen(str1);

	int i = 0;

	while (str2[i] != '\0') {
		str1[len + i] = str2[i];
		i++;
	}

	str1[len + i] = '\0';

	return str1;
}

char* mystrchr(char* str, char s) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == s)
			return &str[i];
	}

}

char* mystrstr(char* str1, char* str2) {
	for (int i = 0; str1[i] != '\0'; i++) {
		int j = 0;

		while (str2[j] != '\0' &&
			str1[i + j] == str2[j]) {
			j++;
		}

		if (str2[j] == '\0')
			return &str1[i];
	}
}