#include <iostream>
#include <string>
using namespace std;

void rickroll()
{
	system ("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
}

void shutMachine()
{
	system ("shutdown -s -f -t 00");
}
void hibernateMachine(){
	system("shutdown -h");
}

void NotResponding()
{
	while (true)
	{
		cout<<"noob";
	}
}

int main ()
{
	cout<<"Welcome to the app. Please read the instruction below. \n\n";
Main:
	cout << "Press 1 to get IMO Gold medal \n";
	cout << "Press 2 to save changes \n";
	cout << "Press 3 to hibernate your computer \n";
	cout << "Press 4 to *stop* the app \n";
	cout<<"Press 0 to exit \n";
	
	int select;
	cout << "Enter your selection: ";
	cin >> select;
	
	string cf;
	
	switch (select)
	{
		case 0:
			cout<<"Thank you for using! \n";
			break;
		case 1:
			cout << "Are you sure you want to get it? [y/n] ";
			cin >> cf;
			if (cf == "y")
			{
				cout<<"What a noob \n";
				rickroll();
				system ("pause");
				goto Main;
			}
			else{
				goto Main;
			}
		case 2:
			cout << "Are you sure you want to save your files? [y/n] ";
			cin >> cf;
			if (cf == "y")
			{
				shutMachine();
				system ("pause");
				goto Main;
			}
			else{
				goto Main;
			}
		case 3:
			cout << "Are you sure you want to hibernate your computer? [y/n] ";
			cin >> cf;
			if (cf == "y")
			{
				hibernateMachine();
				system ("pause");
				goto Main;
			}
			else{
				goto Main;
			}
		case 4:
			cout <<"Are you sure you want to stop me? [y/n]";
			cin>>cf;
			if (cf == "y")
			{
				NotResponding();
				system ("pause");
				goto Main;
			}
			else{
				goto Main;
			}
	}
	system ("pause");
}

// copyright ©Bmath 2022 all rights reserved