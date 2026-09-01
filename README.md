Number Converter

A simple console-based C++ application that converts numbers between Decimal, Binary, and Hexadecimal number systems.

Features
Decimal to Binary
Binary to Decimal
Decimal to Hexadecimal
Hexadecimal to Decimal
Binary to Hexadecimal
Hexadecimal to Binary
Simple menu-based interface
Basic input handling
Concepts Used
C++ Functions
Loops
Conditional Statements
Strings
Switch Statements
Number Systems
Basic Conversion Logic
How It Works

The application uses the standard conversion logic for different number systems.

Decimal to Binary

The number is repeatedly divided by 2, and the remainders are used to build the binary result.

Binary to Decimal

Each binary digit is processed using base 2 to calculate the decimal value.

Decimal to Hexadecimal

The number is repeatedly divided by 16, using 0-9 and A-F for the hexadecimal digits.

Hexadecimal to Decimal

Each hexadecimal digit is converted to its numerical value and processed using base 16.

Binary ↔ Hexadecimal

These conversions are performed through Decimal:
Binary → Decimal → Hexadecimal
Hexadecimal → Decimal → Binary

Project Structure

NumberConverter/
│
├── main.cpp
└── README.md 

Technologies
C++
Visual Studio
