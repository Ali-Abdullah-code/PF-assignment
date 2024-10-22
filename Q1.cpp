#include<iostream>
using namespace std;

int main()
{
    int choice, binary, digit, sum = 0, octal;

    // Prompt the user to choose between binary and octal input
    cout << "Press 1 to enter a binary number and Press 2 to enter Octal number: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            // Ask for binary input
            cout << "Enter binary number in [0-1] form. The number should be 3, 4, or 5 digits long: ";
            cin >> binary;

            // Process binary numbers with 3 digits
            if(binary >= 100 && binary <= 999)
            {
                digit = binary % 10;
                if(digit == 0 || digit == 1)
                {
                    sum = sum + (digit * 1);     // Multiply digit by its place value
                    binary = binary / 10;
                    digit = binary % 10;
                    if(digit == 0 || digit == 1)
                    {
                        sum = sum + (digit * 2); // Multiply by 2 for second position
                        binary = binary / 10;
                        digit = binary % 10;
                        if(digit == 0 || digit == 1)
                        {
                            sum = sum + (digit * 4); // Multiply by 4 for third position
                            cout << "The converted binary number into decimal is = " << sum << endl;
                        }
                        else
                            cout << "Invalid input. Your number must be 0 or 1.";
                    }
                    else
                        cout << "Invalid input. Your number must be 0 or 1.";
                }
                else
                    cout << "Invalid input. Your number must be 0 or 1.";
            }

            // Process binary numbers with 4 digits
            else if(binary >= 1000 && binary <= 9999)
            {
                digit = binary % 10;
                if(digit == 0 || digit == 1)
                {
                    sum = sum + (digit * 1);
                    binary = binary / 10;
                    digit = binary % 10;
                    if(digit == 0 || digit == 1)
                    {
                        sum = sum + (digit * 2);
                        binary = binary / 10;
                        digit = binary % 10;
                        if(digit == 0 || digit == 1)
                        {
                            sum = sum + (digit * 4);
                            binary = binary / 10;
                            digit = binary % 10;
                            if(digit == 0 || digit == 1)
                            {
                                sum = sum + (digit * 8); // Multiply by 8 for fourth position
                                cout << "The converted binary number into decimal is = " << sum << endl;
                            }
                            else
                                cout << "Invalid input. Your number must be 0 or 1.";
                        }
                        else
                            cout << "Invalid input. Your number must be 0 or 1.";
                    }
                    else
                        cout << "Invalid input. Your number must be 0 or 1.";
                }
                else
                    cout << "Invalid input. Your number must be 0 or 1.";
            }

            // Process binary numbers with 5 digits
            else if(binary >= 10000 && binary <= 99999)
            {
                digit = binary % 10;
                if(digit == 0 || digit == 1)
                {
                    sum = sum + (digit * 1);
                    binary = binary / 10;
                    digit = binary % 10;
                    if(digit == 0 || digit == 1)
                    {
                        sum = sum + (digit * 2);
                        binary = binary / 10;
                        digit = binary % 10;
                        if(digit == 0 || digit == 1)
                        {
                            sum = sum + (digit * 4);
                            binary = binary / 10;
                            digit = binary % 10;
                            if(digit == 0 || digit == 1)
                            {
                                sum = sum + (digit * 8);
                                binary = binary / 10;
                                digit = binary % 10;
                                if(digit == 0 || digit == 1)
                                {
                                    sum = sum + (digit * 16); // Multiply by 16 for fifth position
                                    cout << "The converted binary number into decimal is = " << sum << endl;
                                }
                                else
                                    cout << "Invalid input. Your number must be 0 or 1.";
                            }
                            else
                                cout << "Invalid input. Your number must be 0 or 1.";
                        }
                        else
                            cout << "Invalid input. Your number must be 0 or 1.";
                    }
                    else
                        cout << "Invalid input. Your number must be 0 or 1.";
                }
                else
                    cout << "Invalid input. Your number must be 0 or 1.";
            }
            else
                cout << "Invalid input. The number should be 3, 4, or 5 digits long.";
            break;

        case 2:
            // Ask for octal input
            cout << "Enter octal number between [0-7]. The number should be 3, 4, or 5 digits long: ";
            cin >> octal;

            // Process octal numbers with 3 digits
            if(octal >= 100 && octal <= 999)
            {
                digit = octal % 10;
                if(digit >= 0 && digit <= 7)
                {
                    sum = sum + (digit * 1);
                    octal = octal / 10;
                    digit = octal % 10;
                    if(digit >= 0 && digit <= 7)
                    {
                        sum = sum + (digit * 8);
                        octal = octal / 10;
                        digit = octal % 10;
                        if(digit >= 0 && digit <= 7)
                        {
                            sum = sum + (digit * 64); // Multiply by 64 for third position
                            cout << "The converted octal number into decimal is = " << sum << endl;
                        }
                        else
                            cout << "Invalid input. Your number must be between 0 and 7.";
                    }
                    else
                        cout << "Invalid input. Your number must be between 0 and 7.";
                }
                else
                    cout << "Invalid input. Your number must be between 0 and 7.";
            }

            // Process octal numbers with 4 digits
            else if(octal >= 1000 && octal <= 9999)
            {
                digit = octal % 10;
                if(digit >= 0 && digit <= 7)
                {
                    sum = sum + (digit * 1);
                    octal = octal / 10;
                    digit = octal % 10;
                    if(digit >= 0 && digit <= 7)
                    {
                        sum = sum + (digit * 8);
                        octal = octal / 10;
                        digit = octal % 10;
                        if(digit >= 0 && digit <= 7)
                        {
                            sum = sum + (digit * 64);
                            octal = octal / 10;
                            digit = octal % 10;
                            if(digit >= 0 && digit <= 7)
                            {
                                sum = sum + (digit * 512); // Multiply by 512 for fourth position
                                cout << "The converted octal number into decimal is = " << sum << endl;
                            }
                            else
                                cout << "Invalid input. Your number must be between 0 and 7.";
                        }
                        else
                            cout << "Invalid input. Your number must be between 0 and 7.";
                    }
                    else
                        cout << "Invalid input. Your number must be between 0 and 7.";
                }
                else
                    cout << "Invalid input. Your number must be between 0 and 7.";
            }

            // Process octal numbers with 5 digits
            else if(octal >= 10000 && octal <= 99999)
            {
                digit = octal % 10;
                if(digit >= 0 && digit <= 7)
                {
                    sum = sum + (digit * 1);
                    octal = octal / 10;
                    digit = octal % 10;
                    if(digit >= 0 && digit <= 7)
                    {
                        sum = sum + (digit * 8);
                        octal = octal / 10;
                        digit = octal % 10;
                        if(digit >= 0 && digit <= 7)
                        {
                            sum = sum + (digit * 64);
                            octal = octal / 10;
                            digit = octal % 10;
                            if(digit >= 0 && digit <= 7)
                            {
                                sum = sum + (digit * 512);
                                octal = octal / 10;
                                digit = octal % 10;
                                if(digit >= 0 && digit <= 7)
                                {
                                    sum = sum + (digit * 4096); // Multiply by 4096 for fifth position
                                    cout << "The converted octal number into decimal is = " << sum << endl;
                                }
                                else
                                    cout << "Invalid input. Your number must be between 0 and 7.";
                            }
                            else
                                cout << "Invalid input. Your number must be between 0 and 7.";
                        }
                        else
                            cout << "Invalid input. Your number must be between 0 and 7.";
                    }
                    else
                        cout << "Invalid input. Your number must be between 0 and 7.";
                }
                else
                    cout << "Invalid input. Your number must be between 0 and 7.";
            }
            else
                cout << "Invalid input. The number should be 3, 4, or 5 digits long.";
            break;

        // If invalid choice is made
        default:
            cout << "Invalid selection. Enter 1 or 2 to continue.";
    }   
}
