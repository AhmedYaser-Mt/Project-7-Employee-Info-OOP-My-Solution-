#include <iostream>
using namespace std;

class clsEmployee
{
    short _ID = 0;
    string _FirstName = "";
    string _LastName = "";
    string _Title = "";
    string _Email = "";
    string _Phone = "";
    double _Salary = 0;
    string _Department = "";


public:

    clsEmployee(short ID, string FirstName, string LastName, string Title, string Email, string Phone, double Salary, string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    void SetPhone(string Phone)
    {
        _Phone = Phone;
    }

    void SetSalary(double Salary)
    {
        _Salary = Salary;
    }

    void SetDepartment(string Department)
    {
        _Department = Department;
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

    string GetTitle()
    {
        return _Title;
    }

    string GetEmail()
    {
        return _Email;
    }

    string GetPhone()
    {
        return _Phone;
    }

    double GetSalary()
    {
        return _Salary;
    }

    string GetDepartment()
    {
        return _Department;
    }

    void Print()
    {
        cout << "\nInfo :";
        cout << "\n______________________________";
        cout << "\nID         : " << _ID;
        cout << "\nFirst Name : " << _FirstName;
        cout << "\nLast Name  : " << _LastName;
        cout << "\nFull Name  : " << GetFullName();
        cout << "\nTitle      : " << _Title;
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\nSalary     : " << _Salary;
        cout << "\nDepartment : " << _Department;
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
    clsEmployee Employee1(1234, "Ahmed", "Yaser", "Software Developer", "my@gmail.com", "04985948", 4500, "Epya Solutions");
    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}

