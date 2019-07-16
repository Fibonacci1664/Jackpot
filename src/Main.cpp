/*
 * Main.cpp
 *
 *  Created on: 14 Jul 2019
 *      Author: Dave
 */

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int balance = 1000;



	cout << "######################" << endl;
	cout << "Welcome to the Casino!" << endl;
	cout << "######################" << endl;
	cout << endl;

	cout << "You balance is £" << balance << endl;
	cout << endl;

	cout << "Match ANY 2 for a WIN!" << endl;
	cout << "Gamble £10 per spin press 'P' to play:> " << flush;
	cout << endl;

	char input;
	cin >> input;


	while(input != 'p')
	{
		cout << "Incorrect input, please press 'P' to play:> " << flush;
		cin >> input;
	}

	if(input == 'p')
	{
		bool playing;

		/*
		 * 33	21	00100001	&#33;	!	Exclamation mark
		 * 34	22	00100010	&#34;	"	Double quote
		 * 35	23	00100011	&#35;	#	Number
		 * 36	24	00100100	&#36;	$	Dollar sign
		 * 37	25	00100101	&#37;	%	Percent
		 * 38	26	00100110	&#38;	&	Ampersand
		 * 39	27	00100111	&#39;	'	Single quote
		 * 40	28	00101000	&#40;	(	Left parenthesis
		 * 41	29	00101001	&#41;	)	Right parenthesis
		 * 42	2A	00101010	&#42;	*	Asterisk
		 * 43	2B	00101011	&#43;	+	Plus
		 */

//		time_t startTime = time(&startTime);	// Get the current time.
//		time_t endTime;
//		double timeDiff;
//
//		cout << startTime << endl;
//		endTime = time(&endTime);
//
//		timeDiff = difftime(endTime, startTime);




		do
		{
			playing = true;
			balance -= 10;

			cout << "Here are the win tables: " << endl;
			cout << "!	!	!		WIN £10\n"
					"\"	\"	\"		WIN £20\n"
					"#	#	#		WIN £30\n"
					"%	%	%		WIN £40\n"
					"&	&	&		WIN £50\n"
					"'	'	'		WIN £60\n"
					"(	(	(		WIN £70\n"
					")	)	)		WIN £80\n"
					"*	*	*		WIN £90\n"
					"+	+	+		WIN £100\n"
					"$	$	$		WIN JACKPOT £200" << endl;



			// Seed the RNG with the current system time, this ensures a different (random) symbol each time for the randSymbol variables.
			srand(time(NULL));

			// Choose a random number between 0 - 9 and then add 33 and return that as the random number, because the variable is set to a char we can use the ASCII values to return symbols.
			char randSymbol_1;
			char randSymbol_2;
			char randSymbol_3;
			char randSymbol_4;
			char randSymbol_5;
			char randSymbol_6;
			char randSymbol_7;
			char randSymbol_8;
			char randSymbol_9;


			randSymbol_1 = rand() % 10 + 33;
			randSymbol_2 = rand() % 10 + 33;
			randSymbol_3 = rand() % 10 + 33;
			randSymbol_4 = rand() % 10 + 33;
			randSymbol_5 = rand() % 10 + 33;
			randSymbol_6 = rand() % 10 + 33;
			randSymbol_7 = rand() % 10 + 33;
			randSymbol_8 = rand() % 10 + 33;
			randSymbol_9 = rand() % 10 + 33;



			cout << "######################" << endl;

			cout << " | " << randSymbol_1 << " | " << " | " << randSymbol_2 << " | " << " | " << randSymbol_3 << " | " << flush;
			cout << endl;
			cout << " | " << randSymbol_4 << " | " << " | " << randSymbol_5 << " | " << " | " << randSymbol_6 << " | " << flush;
			cout << endl;
			cout << " | " << randSymbol_7 << " | " << " | " << randSymbol_8 << " | " << " | " << randSymbol_9 << " | " << flush;
			cout << endl;

			cout << "######################" << endl;

			if((randSymbol_4 == randSymbol_5) || (randSymbol_4 == randSymbol_6))
			{
				switch(randSymbol_4)
				{
				case 33:
					cout << "You win £10" << endl;
					balance += 10;
					break;
				case 34:
					cout << "You win £20" << endl;
					balance += 20;
					break;
				case 35:
					cout << "You win £30" << endl;
					balance += 30;
					break;
				case 36:
					cout << "JACKPOT!!!!, YOU WIN £200" << endl;
					balance += 200;
					break;
				case 37:
					cout << "You win £40" << endl;
					balance += 40;
					break;
				case 38:
					cout << "You win £50" << endl;
					balance += 50;
					break;
				case 39:
					cout << "You win £60" << endl;
					balance += 60;
					break;
				case 40:
					cout << "You win £70" << endl;
					balance += 70;
					break;
				case 41:
					cout << "You win £80" << endl;
					balance += 80;
					break;
				case 42:
					cout << "You win £90" << endl;
					balance += 90;
					break;
				case 43:
					cout << "You win £100" << endl;
					balance += 100;
					break;
				default:
					cout << "Checking other win tables, please wait..." << endl;
				}
			}
			else if((randSymbol_5 == randSymbol_6))
			{
				switch(randSymbol_6)
				{
				case 33:
					cout << "You win £10" << endl;
					balance += 10;
					break;
				case 34:
					cout << "You win £20" << endl;
					balance += 20;
					break;
				case 35:
					cout << "You win £30" << endl;
					balance += 30;
					break;
				case 36:
					cout << "JACKPOT!!!!, YOU WIN £200" << endl;
					balance += 200;
					break;
				case 37:
					cout << "You win £40" << endl;
					balance += 40;
					break;
				case 38:
					cout << "You win £50" << endl;
					balance += 50;
					break;
				case 39:
					cout << "You win £60" << endl;
					balance += 60;
					break;
				case 40:
					cout << "You win £70" << endl;
					balance += 70;
					break;
				case 41:
					cout << "You win £80" << endl;
					balance += 80;
					break;
				case 42:
					cout << "You win £90" << endl;
					balance += 90;
					break;
				case 43:
					cout << "You win £100" << endl;
					balance += 100;
					break;
				default:
					cout << "No win!!" << endl;
				}
			}



			cout << "Your current balance is " << balance << endl;

			cout << "Would you like to spin again for £10? y/n" << endl;
			string ans;

			cin >> ans;

			if(ans == "y")
			{
				continue;
			}
			else
			{
				playing = false;
			}

		}
		while(playing);

		cout << "Exiting do while loop" << endl;
	}

	return 0;
}


