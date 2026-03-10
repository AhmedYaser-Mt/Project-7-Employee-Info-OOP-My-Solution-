#include <iostream>
using namespace std;

class clsPerson
{
    short _ID = 0;
    string _FirstName = "";
    string _LastName = "";
    string _Email = "";
    string _Phone = "";

public:

    clsPerson(short ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    short GetID()
    {
        return _ID;
    } 

    string GetFirstName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    string GetEmail()
    {
        return _Email;
    }

    string GetPhone()
    {
        return _Phone;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n______________________________";
        cout << "\nID         : " << _ID;
        cout << "\nFirst Name : " << _FirstName;
        cout << "\nLast Name  : " << _LastName;
        cout << "\nFull Name  : " << GetFullName();
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\n______________________________\n";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email : " << _Email;
        cout << "\nSubject : " << Subject;
        cout << "\nBody : " << Body << endl;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS message sent successfully to phone : " << _Phone;
        cout << "\n" << TextMessage << endl;
    }
};

int main()
{
    clsPerson Person1(1234, "Ahmed", "Yaser", "my@gmail.com", "04985948");
    Person1.Print();

    Person1.SendEmail("Hi", "How are you?");
    Person1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}

