#include <iostream>
#include <string>

using namespace std;

string decimalToBinary(int number)
{
    if (number == 0)
        return "0";

    string binary = "";

    while (number > 0)
    {
        int remainder = number % 2;

        if (remainder == 0)
            binary = "0" + binary;
        else
            binary = "1" + binary;

        number /= 2;
    }

    return binary;
}

int binaryToDecimal(string binary)
{
    int decimal = 0;

    for (int i = 0; i < binary.length(); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

string decimalToHexadecimal(int number)
{
    if (number == 0)
        return "0";

    string hexadecimal = "";

    while (number > 0)
    {
        int remainder = number % 16;

        if (remainder < 10)
            hexadecimal = char('0' + remainder) + hexadecimal;
        else
            hexadecimal = char('A' + remainder - 10) + hexadecimal;

        number /= 16;
    }

    return hexadecimal;
}

int hexadecimalToDecimal(string hexadecimal)
{
    int decimal = 0;

    for (int i = 0; i < hexadecimal.length(); i++)
    {
        int value;

        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
            value = hexadecimal[i] - '0';
        else
            value = hexadecimal[i] - 'A' + 10;

        decimal = decimal * 16 + value;
    }

    return decimal;
}

string binaryToHexadecimal(string binary)
{
    int decimal = binaryToDecimal(binary);

    return decimalToHexadecimal(decimal);
}

string hexadecimalToBinary(string hexadecimal)
{
    int decimal = hexadecimalToDecimal(hexadecimal);

    return decimalToBinary(decimal);
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Number Converter =====\n";
        cout << "1. Decimal to Binary\n";
        cout << "2. Binary to Decimal\n";
        cout << "3. Decimal to Hexadecimal\n";
        cout << "4. Hexadecimal to Decimal\n";
        cout << "5. Binary to Hexadecimal\n";
        cout << "6. Hexadecimal to Binary\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int number;

            cout << "Enter decimal number: ";
            cin >> number;

            cout << "Binary: " << decimalToBinary(number) << endl;
            break;
        }

        case 2:
        {
            string binary;

            cout << "Enter binary number: ";
            cin >> binary;

            cout << "Decimal: " << binaryToDecimal(binary) << endl;
            break;
        }

        case 3:
        {
            int number;

            cout << "Enter decimal number: ";
            cin >> number;

            cout << "Hexadecimal: "
                << decimalToHexadecimal(number) << endl;

            break;
        }

        case 4:
        {
            string hexadecimal;

            cout << "Enter hexadecimal number: ";
            cin >> hexadecimal;

            cout << "Decimal: "
                << hexadecimalToDecimal(hexadecimal) << endl;

            break;
        }

        case 5:
        {
            string binary;

            cout << "Enter binary number: ";
            cin >> binary;

            cout << "Hexadecimal: "
                << binaryToHexadecimal(binary) << endl;

            break;
        }

        case 6:
        {
            string hexadecimal;

            cout << "Enter hexadecimal number: ";
            cin >> hexadecimal;

            cout << "Binary: "
                << hexadecimalToBinary(hexadecimal) << endl;

            break;
        }

        case 7:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 7);

    return 0;
}