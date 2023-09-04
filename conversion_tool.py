class Converter:
    def binary_to_decimal(self, binary_num):
        return int(binary_num, 2)

    def octal_to_decimal(self, octal_num):
        return int(octal_num, 8)

    def hexadecimal_to_decimal(self, hex_num):
        return int(hex_num, 16)

    def decimal_to_binary(self, decimal_num):
        return bin(decimal_num)

    def decimal_to_octal(self, decimal_num):
        return oct(decimal_num)

    def decimal_to_hexadecimal(self, decimal_num):
        return hex(decimal_num)

    def bytes_to_bits(self, byte_num):
        return byte_num * 8

    def bits_to_bytes(self, bit_num):
        return bit_num // 8


class ConversionTool:
    def __init__(self):
        self.converter = Converter()

    def run(self):
        while True:
            print("\nChoose an option:")
            print("1. Convert Binary to Decimal")
            print("2. Convert Octal to Decimal")
            print("3. Convert Hexadecimal to Decimal")
            print("4. Convert Decimal to Binary")
            print("5. Convert Decimal to Octal")
            print("6. Convert Decimal to Hexadecimal")
            print("7. Convert Bytes to Bits")
            print("8. Convert Bits to Bytes")
            print("9. Quit")

            choice = input("Enter your choice (1/2/3/4/5/6/7/8/9): ")

            match choice:
                case '1':
                    binary_num = input("Enter a binary number: ")
                    result = self.converter.binary_to_decimal(binary_num)
                    print(f"The decimal equivalent of {binary_num} is {result}")

                case '2':
                    octal_num = input("Enter an octal number: ")
                    result = self.converter.octal_to_decimal(octal_num)
                    print(f"The decimal equivalent of {octal_num} is {result}")

                case '3':
                    hex_num = input("Enter a hexadecimal number: ")
                    result = self.converter.hexadecimal_to_decimal(hex_num)
                    print(f"The decimal equivalent of {hex_num} is {result}")

                case '4':
                    decimal_num = int(input("Enter a decimal number: "))
                    result = self.converter.decimal_to_binary(decimal_num)
                    print(f"The binary equivalent of {decimal_num} is {result}")

                case '5':
                    decimal_num = int(input("Enter a decimal number: "))
                    result = self.converter.decimal_to_octal(decimal_num)
                    print(f"The octal equivalent of {decimal_num} is {result}")

                case '6':
                    decimal_num = int(input("Enter a decimal number: "))
                    result = self.converter.decimal_to_hexadecimal(decimal_num)
                    print(f"The hexadecimal equivalent of {decimal_num} is {result}")

                case '7':
                    byte_num = int(input("Enter the number of bytes: "))
                    result = self.converter.bytes_to_bits(byte_num)
                    print(f"{byte_num} bytes are equal to {result} bits.")

                case '8':
                    bit_num = int(input("Enter the number of bits: "))
                    result = self.converter.bits_to_bytes(bit_num)
                    print(f"{bit_num} bits are equal to {result} bytes.")

                case '9':
                    print("Thank you for using the conversion program! Goodbye!")
                    return

                case _:
                    print("Invalid choice. Please choose a valid option.")


if __name__ == "__main__":
    conversion_tool = ConversionTool()
    conversion_tool.run()
