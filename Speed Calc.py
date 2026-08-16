def main():
    while True:
        # 1. Get user input
        kmh = float(input("Enter speed in Kilometers per Hour (km/h): "))
        
        # 2. Perform calculations
        knots = kmh * 0.539957
        mph = kmh * 0.621371
        
        # 3. Display the results formatted to two decimal places
        print("\n--- Speed Conversions ---")
        print(f"{kmh:.2f} km/h is equal to:")
        print(f"{knots:.2f} Knots")
        print(f"{mph:.2f} MPH")
        print("-------------------------")
        
        # 4. Ask to repeat
        repeat = input("\nDo you want to convert another speed? (1 for Yes, 0 for No): ")
        print() # Adds a blank line
        
        if repeat != '1':
            break

    print("Safe flying! Goodbye.")

if __name__ == "__main__":
    main()