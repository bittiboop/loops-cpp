#include <iostream>
using namespace std;

void toyBuy(int toy, int totalUserRec = 0, int totalRec = 0) {
	int redPrice = 5;
	int bluePrice = 7;
	int greenPrice = 3;
	int jinglePrice = 10;
	int redtoys = 324;
	int bluetoys = 411;
	int greentoys = 266;
	int jingletoys = 85;
	int amBlue = 0, amRed = 0, amGreen = 0, amJingle = 0;
	cout << "We have a total of " << redtoys << " red toys, " << bluetoys << " blue toys, " << greentoys << " green toys, and " << jingletoys << " jingle toys." << endl;
	cout << "What toy would you like to buy today?\nBlue - 1, Red - 2, Green - 3, Jingle - 4" << endl;
	cin >> toy;
	
	switch (toy) {
	case 1:
	{
		cout << "You have chosen a blue toy." << endl;
		cout << "We have " << bluetoys << " blue toys left." << endl;
		cout << "enter the number of blue toys you would like to buy." << endl;
		cin >> amBlue;
		if (amBlue > bluetoys) {
			cout << "Sorry, we do not have that many blue toys in stock." << endl;
		}
		else {
			bluetoys -= amBlue;
			totalUserRec += bluePrice;
		}
	}break;
	case 2:
	{
		cout << "You have chosen a red toy." << endl;
		cout << "We have " << redtoys << " red toys left." << endl;
		cout << "Enter the number of red toys you would like to buy." << endl;
		cin >> amRed;
		if (amRed > redtoys) {
			cout << "Sorry, we do not have that many red toys in stock." << endl;
		}
		else {
			redtoys -= amRed;
			totalUserRec += redPrice;
		}
	}break;
	case 3:
	{
		cout << "You have chosen a green toy." << endl;
		cout << "We have " << greentoys << " green toys left." << endl;
		cout << "enter the number of green toys you would like to buy." << endl;
		cin >> amGreen;
		if (amGreen > greentoys) {
			cout << "Sorry, we do not have that many green toys in stock." << endl;
		}
		else {
			greentoys -= amGreen;
			totalUserRec += greenPrice;
		}
	}break;
	case 4:
	{
		cout << "You have chosen a jingle toy." << endl;
		cout << "We have " << jingletoys << " jingle toys left." << endl;
		cout << "enter the number of jingle toys you would like to buy." << endl;
		cin >> amJingle;
		if (amJingle > jingletoys) {
			cout << "Sorry, we do not have that many jingle toys in stock." << endl;
		}
		else {
			jingletoys -= amJingle;
			totalUserRec += jinglePrice;
		}
	}break;
	}
	cout << "You have purchased " << amBlue << " blue toys, " << amRed << " red toys, " << amGreen << " green toys, and " << amJingle << " jingle toys." << endl;
	cout << "Your total is $" << totalUserRec << endl;
	totalRec = (redtoys * redPrice) + (bluetoys * bluePrice) + (greentoys * greenPrice) + (jingletoys * jinglePrice);
}

int main() {
	int totalUserRec = 0;
	int totalRec = 0;

	cout << "Welcome to the toy store!" << endl;
	toyBuy(0, totalUserRec, totalRec);
	cout << "Would you like to purchase more toys? Yes - 1, No - 2" << endl;
	int choice;
	cin >> choice;
	do
	{
		if (choice == 1) {
			toyBuy(0, totalUserRec, totalRec);
			cout << "Would you like to purchase more toys? Yes - 1, No - 2" << endl;
			cin >> choice;
		}
		else if (choice == 2) {
			cout << "Thank you for shopping with us!" << endl;
			break;
		}
	} while (choice == 1);
	
	return 0;
}