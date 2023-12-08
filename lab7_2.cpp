#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    string name,movies,days,quotes;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";getline(cin,name);
    cout << "Fahsai: Wow!!! ";
    cout << name;
    cout << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name <<": ";
    cin >> number;
    cin.ignore();
    number = (number/10000000)-12;
    cout << "Fahsai: I think you may be GEAR " << number <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name <<": ";getline(cin,movies);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name <<": ";getline(cin,days);
    cout << "Fahsai: " << days << "....that is OK!!! I'm looking forward to watching " << movies << " with you.\n";
    cout << name <<": ";
    getline(cin,quotes);
    cout << "Fahsai: 555+ see you "<< days << ". Bye Bye " << "\\" << "(^ ^)/";
}
