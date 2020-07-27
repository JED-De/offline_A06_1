#include <iostream>
#include <string>
using namespace std;

void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil)
{
	int i = 0;
	for (; i < eingabe.size(); i++)
	{
		if (eingabe.at(i) == zeichen)
		{
			i++;
			break;
		}
		else
		{
			erster_teil += eingabe.at(i);
		}
	}

	for (; i < eingabe.size(); i++)
	{
		zweiter_teil += eingabe.at(i);
	}
}

int main()
{
	char zeichen;
	string eingabe;
	string erster_teil = "";
	string zweiter_teil = "";
	cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(cin, eingabe);
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> zeichen;
	spalte_ab_erstem(zeichen, eingabe, erster_teil, zweiter_teil);
	cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << endl;
	cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << endl;

	system("PAUSE");
	return 0;
}