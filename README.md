# 🧑‍💼 Employee Info (C++ Project)

This project demonstrates **Object-Oriented Programming (OOP)** concepts in C++, focusing on **Encapsulation** and **Abstraction** through a simple yet powerful `clsEmployee` class.

---

## 📚 Training Source

This project was developed as part of the Object-Oriented Programming training with
Dr. Mohamed AbouHadhood 👨‍🏫

🔗 Programming Advices Website

---

## 📌 Project Overview
The goal of the **Employee Info** project is to create and manage employee data in a structured way, while keeping the implementation details hidden from the programmer who uses the class.

Key functionalities include:
- Storing employee information 📝  
- Printing employee details 🖨️  
- Sending Email ✉️  
- Sending SMS 📱  

---

## 🎯 Objectives & Concepts Applied

- **Constructor Requirement**  
  Ensures that whenever an `object` is created, the employee’s data must be initialized immediately.  
  👉 This guarantees that every object represents a valid employee before any operation is performed.

- **Encapsulation & Security**  
  - All member variables are private and accessed through **Set & Get methods**.  
  - The **ID** field is **read-only** (cannot be modified once created).  
  - Hidden variables are prefixed with `_` for clarity.  
  - The programmer can only provide the message text when sending an Email or SMS — the email/phone number is securely stored in the object.  
    ✔️ Prevents mistakes like sending a message to the wrong recipient.

- **Simplicity for Programmers**  
  The main program (`main`) only needs to create an object and use the available public methods.  
  👉 No need to worry about the internal implementation of the class.  

---

## 🏗️ Class Features

- **Properties (Setters & Getters):**
  - `FirstName`, `LastName`, `Title`, `Email`, `Phone`, `Salary`, `Department`
  - `ID` (Read-only)

- **Methods:**
  - `Print()` → Displays all employee details.  
  - `SendEmail(string Subject, string Body)` → Sends an email using stored employee email.  
  - `SendSMS(string TextMessage)` → Sends an SMS using stored employee phone.  

---

## 🖥️ Example Usage

```cpp
#include <iostream>
using namespace std;

int main()
{
    clsEmployee Employee1(1234, "Ahmed", "Yaser", "Software Developer",
                          "my@gmail.com", "04985948", 4500, "Epya Solutions");
    
    Employee1.Print();

    Employee1.SendEmail("Hi", "How are you?");
    Employee1.SendSMS("How are you?");

    system("pause>0");
    return 0;
}

