#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

class Converter {
public:
    long long binaryToDecimal(const std::string& binaryNum) {
        return std::stoll(binaryNum, 0, 2);
    }

    long long octalToDecimal(const std::string& octalNum) {
        return std::stoll(octalNum, 0, 8);
    }

    long long hexadecimalToDecimal(const std::string& hexNum) {
        return std::stoll(hexNum, 0, 16);
    }

    std::string decimalToBinary(long long decimalNum) {
        std::stringstream ss;
        ss << std::bitset<64>(decimalNum);
        return ss.str();
    }

    std::string decimalToOctal(long long decimalNum) {
        std::stringstream ss;
        ss << std::oct << decimalNum;
        return ss.str();
    }

    std::string decimalToHexadecimal(long long decimalNum) {
        std::stringstream ss;
        ss << std::hex << decimalNum;
        return ss.str();
    }

    long long bytesToBits(long long byteNum) {
        return byteNum * 8;
    }

    long long bitsToBytes(long long bitNum) {
        return bitNum / 8;
    }
};

class ConversionTool {
public:
    ConversionTool() {
        converter = Converter();
    }

    void run() {
        while (true) {
            std::cout << "\nChoose an option:" << std::endl;
            std::cout << "1. Convert Binary to Decimal" << std::endl;
            std::cout << "2. Convert Octal to Decimal" << std::endl;
            std::cout << "3. Convert Hexadecimal to Decimal" << std::endl;
            std::cout << "4. Convert Decimal to Binary" << std::endl;
            std::cout << "5. Convert Decimal to Octal" << std::endl;
            std::cout << "6. Convert Decimal to Hexadecimal" << std::endl;
            std::cout << "7. Convert Bytes to Bits" << std::endl;
            std::cout << "8. Convert Bits to Bytes" << std::endl;
            std::cout << "9. Quit" << std::endl;

            int choice;
            std::cin >> choice;

            switch (choice) {
                case 1: {
                    std::string binaryNum;
                    std::cout << "Enter a binary number: ";
                    std::cin >> binaryNum;
                    long long result = converter.binaryToDecimal(binaryNum);
                    std::cout << "The decimal equivalent is " << result << std::endl;
                    break;
                }

                case 2: {
                    std::string octalNum;
                    std::cout << "Enter an octal number: ";
                    std::cin >> octalNum;
                    long long result = converter.octalToDecimal(octalNum);
                    std::cout << "The decimal equivalent is " << result << std::endl;
                    break;
                }

                case 3: {
                    std::string hexNum;
                    std::cout << "Enter a hexadecimal number: ";
                    std::cin >> hexNum;
                    long long result = converter.hexadecimalToDecimal(hexNum);
                    std::cout << "The decimal equivalent is " << result << std::endl;
                    break;
                }

                case 4: {
                    long long decimalNum;
                    std::cout << "Enter a decimal number: ";
                    std::cin >> decimalNum;
                    std::string result = converter.decimalToBinary(decimalNum);
                    std::cout << "The binary equivalent is " << result << std::endl;
                    break;
                }

                case 5: {
                    long long decimalNum;
                    std::cout << "Enter a decimal number: ";
                    std::cin >> decimalNum;
                    std::string result = converter.decimalToOctal(decimalNum);
                    std::cout << "The octal equivalent is " << result << std::endl;
                    break;
                }

                case 6: {
                    long long decimalNum;
                    std::cout << "Enter a decimal number: ";
                    std::cin >> decimalNum;
                    std::string result = converter.decimalToHexadecimal(decimalNum);
                    std::cout << "The hexadecimal equivalent is " << result << std::endl;
                    break;
                }

                case 7: {
                    long long byteNum;
                    std::cout << "Enter the number of bytes: ";
                    std::cin >> byteNum;
                    long long result = converter.bytesToBits(byteNum);
                    std::cout << byteNum << " bytes are equal to " << result << " bits." << std::endl;
                    break;
                }

                case 8: {
                    long long bitNum;
                    std::cout << "Enter the number of bits: ";
                    std::cin >> bitNum;
                    long long result = converter.bitsToBytes(bitNum);
                    std::cout << bitNum << " bits are equal to " << result << " bytes." << std::endl;
                    break;
                }

                case 9:
                    std::cout << "Thank you for using the conversion program! Goodbye!" << std::endl;
                    return;

                default:
                    std::cout << "Invalid choice. Please choose a valid option." << std::endl;
                    break;
            }
        }
    }

private:
    Converter converter;
};

int main() {
    ConversionTool conversionTool;
    conversionTool.run();
    return 0;
}
