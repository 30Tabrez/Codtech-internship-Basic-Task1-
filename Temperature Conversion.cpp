#include <stdio.h>
#include <stdlib.h>

// Function prototypes
double celsiusToFahrenheit(double celsius);
double celsiusToKelvin(double celsius);
double fahrenheitToCelsius(double fahrenheit);
double fahrenheitToKelvin(double fahrenheit);
double kelvinToCelsius(double kelvin);
double kelvinToFahrenheit(double kelvin);
void displayMenu();
void convertTemperature();

int main() {
    int choice;
    do {
        displayMenu();
        printf("Enter your choice (1-4): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            exit(1);
        }

        switch (choice) {
            case 1:
                convertTemperature();
                break;
            case 2:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 2);

    return 0;
}

// Conversion functions
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return fahrenheitToCelsius(fahrenheit) + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return celsiusToFahrenheit(kelvinToCelsius(kelvin));
}

// Function to display the menu
void displayMenu() {
    printf("\n--- Temperature Conversion Program ---\n");
    printf("1. Convert temperature\n");
    printf("2. Exit\n");
}

// Function to handle the conversion process
void convertTemperature() {
    int fromScale, toScale;
    double inputTemp, convertedTemp;

    printf("\nChoose the scale to convert from:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Enter your choice: ");
    if (scanf("%d", &fromScale) != 1 || fromScale < 1 || fromScale > 3) {
        printf("Invalid input! Please enter a number between 1 and 3.\n");
        return;
    }

    printf("Choose the scale to convert to:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Enter your choice: ");
    if (scanf("%d", &toScale) != 1 || toScale < 1 || toScale > 3) {
        printf("Invalid input! Please enter a number between 1 and 3.\n");
        return;
    }

    if (fromScale == toScale) {
        printf("Conversion between the same scale is unnecessary.\n");
        return;
    }

    printf("Enter the temperature to convert: ");
    if (scanf("%lf", &inputTemp) != 1) {
        printf("Invalid temperature input! Please enter a valid number.\n");
        return;
    }

    // Perform the conversion
    switch (fromScale) {
        case 1: // Celsius
            if (toScale == 2)
                convertedTemp = celsiusToFahrenheit(inputTemp);
            else if (toScale == 3)
                convertedTemp = celsiusToKelvin(inputTemp);
            break;
        case 2: // Fahrenheit
            if (toScale == 1)
                convertedTemp = fahrenheitToCelsius(inputTemp);
            else if (toScale == 3)
                convertedTemp = fahrenheitToKelvin(inputTemp);
            break;
        case 3: // Kelvin
            if (toScale == 1)
                convertedTemp = kelvinToCelsius(inputTemp);
            else if (toScale == 2)
                convertedTemp = kelvinToFahrenheit(inputTemp);
            break;
    }

    printf("Converted temperature: %.2lf\n", convertedTemp);
}

