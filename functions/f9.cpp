
#include <iostream>
#include <string>
using namespace std;

//write function to convert a binary number to decimal function
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}
//write fuunction to convert octal to decimal
int octalToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 8;
    }
    return dec_value;
}
//write function to convert hexadecimal to decimal
int hexadecimalToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 16;
    }
    return dec_value;
}
//write a function to convert decimal to binary
int decimalToBinary(int n)
{
    int num = n;
    int binary = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 2;
        temp = temp / 2;
        binary += last_digit * base;
        base = base * 10;
    }
    return binary;
}
//write a function to convert decimal to octal
int decimalToOctal(int n)
{
    int num = n;
    int octal = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 8;
        temp = temp / 8;
        octal += last_digit * base;
        base = base * 10;
    }
    return octal;
}
//write a function to convert decimal to hexadecimal
int decimalToHexadecimal(int n)
{
    int num = n;
    int hexadecimal = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 16;
        temp = temp / 16;
        hexadecimal += last_digit * base;
        base = base * 10;
    }
    return hexadecimal;
}
int main()
{

}