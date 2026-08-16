def main():
    while True:
        choice = input("What do you want to convert? (C/F): ").strip().lower()
        
        if choice == 'c':
            c = float(input("Enter temperature in Celsius: "))
            f = (c * 9.0 / 5.0) + 32
            print(f"{c:.2f} Celsius is equal to {f:.2f} Fahrenheit")
            
        elif choice == 'f':
            f = float(input("Enter temperature in Fahrenheit: "))
            c = (f - 32) * 5.0 / 9.0
            print(f"{f:.2f} Fahrenheit is equal to {c:.2f} Celsius")
            
        else:
            print("Invalid choice. Please enter 'C' or 'F'.")
            
        # Ask to repeat
        repeat = input("\nDo you want to perform another conversion? (1 for Yes, 0 for No): ")
        print() # Adds a blank line
        
        if repeat != '1':
            break

    print("Goodbye!")

if __name__ == "__main__":
    main()