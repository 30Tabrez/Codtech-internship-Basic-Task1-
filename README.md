# Temperature Conversion Program

## Overview
This program allows users to convert temperatures between **Celsius**, **Fahrenheit**, and **Kelvin**. It provides a user-friendly menu-driven interface to select the input temperature scale, enter a temperature value, and choose the desired output scale. The program also includes data validation and advanced features like multi-step conversions.

---

## Features
1. **Conversion Options**:
   - Celsius to Fahrenheit and Kelvin.
   - Fahrenheit to Celsius and Kelvin.
   - Kelvin to Celsius and Fahrenheit.
2. **Advanced Features**:
   - Multi-step conversion (e.g., Celsius to Fahrenheit to Kelvin).
   - Continuous mode to allow multiple conversions without restarting the program.
3. **Input Validation**:
   - Ensures valid temperature values are provided.
   - Displays warnings for physically impossible temperatures in certain scales (e.g., temperatures below absolute zero in Kelvin).

---

## How to Use
1. **Menu Options**:
   - Choose the input scale.
   - Enter the temperature value.
   - Select the output scale(s) for conversion.

2. **Example Usage**:
   - Input: `Convert 25°C to Fahrenheit and Kelvin`.
   - Output:
     ```
     25°C = 77°F
     25°C = 298.15K
     ```

---

## Compilation and Execution
1. Save the program code in a file named `temperature_conversion.c`.
2. Open a terminal and compile the program:
   ```bash
   gcc temperature_conversion.c -o temp_converter
   ```
3. Run the program:
   ```bash
   ./temp_converter
   ```

---

## Sample Screenshots

### **Main Menu**
![Main Menu Screenshot](https://via.placeholder.com/600x200.png?text=Main+Menu+Example)

### **Celsius to Fahrenheit and Kelvin**
Input:  
```
Enter temperature in Celsius: 25
```

Output:  
![Celsius Conversion Screenshot](https://via.placeholder.com/600x200.png?text=Celsius+to+Fahrenheit+and+Kelvin)

### **Kelvin to Celsius and Fahrenheit**
Input:  
```
Enter temperature in Kelvin: 300
```

Output:  
![Kelvin Conversion Screenshot](https://via.placeholder.com/600x200.png?text=Kelvin+to+Celsius+and+Fahrenheit)

---

## Code Walkthrough
1. **Main Functionality**:
   - Displays a menu with input and output options.
   - Reads user input and validates it.
   - Calls the appropriate conversion function(s).
   
2. **Conversion Functions**:
   - `celsiusToFahrenheit()`
   - `celsiusToKelvin()`
   - `fahrenheitToCelsius()`
   - `fahrenheitToKelvin()`
   - `kelvinToCelsius()`
   - `kelvinToFahrenheit()`
   
3. **Modular Design**:
   - Each conversion operation is handled by a separate function for clarity and maintainability.
   - User input handling and temperature validation are centralized for better error management.

---

## Future Enhancements
1. Add graphical interface for easier interaction.
2. Include unit testing for robust validation.
3. Support for additional temperature scales (e.g., Rankine).

---

## License
This project is released under the MIT License.

---

## Contributions
Feel free to contribute by submitting pull requests or reporting issues.

---

