#include <iostream>	// Libary for inputing and outputing
#include <fstream>	// Including fstream libary for doing functions with folders
#include <cstring>	// Including cstring libary for use type string
using namespace std;

class Registry {		// Creating class
	public:
		string login;
		string registers;
		string exit;
		string l,pass,pass2;

};
int main() {
while (true) {			// There is while loop for repeat your program
int x;
Registry Logining;

	Logining.l = "Login";
	Logining.registers = "Register";
		cout << "\n1. Login\t\t" << "2. Register\t\t" << "3. Exit\n\n";		// Printing program actions
		cin >> x;
	if (x == 1){				// Checking inserted number

		cout << "Enter Login\n";
		cin >> Logining.l;
		cout << "Enter Password\n";
		cin >> Logining.pass;

		ifstream myfile (Logining.l+".txt");		// Creating folder in pc with inserted name
		if (myfile.is_open())
		cout << "Welcome in your account =)";
		else
			cout << "We haven't account with this name ";


	}
	else if (x == 3){ 		// Exit from program
		break;
	}

	else if (x == 2){		// Creating 'account' \\
	
		cout << "Enter your future login\n";
		cin >> Logining.l;
		
		cout << "Enter Password\n";
		cin >> Logining.pass;
		cout << "Confirm Password\n";
		cin >> Logining.pass2;

		if (Logining.pass == Logining.pass2){

		cout << "\nYour account is created\n";
		}
		else if (Logining.pass != Logining.pass2)	// Checking password correctly or not
		{
			cout << "\nWrong password\n";
		}
		ifstream myfile_check;
		myfile_check.open(Logining.l+".txt");
		myfile_check.close();
		if(myfile_check){
			cout<<"This login already autorized, please try another login =) "<<endl;
		} else {
			ofstream myfile;
			myfile.open(Logining.l+".txt");
		
		myfile << "Your Login --->  " << Logining.l << endl;		// Print in created file inserted login and password
		myfile << "Your Password --->  " << Logining.pass;
		myfile.close();
		}
	}
	else{
	cout << "Incorrect number... try again =)\n";
	}

	}	
}
