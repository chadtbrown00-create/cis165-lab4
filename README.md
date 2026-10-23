# CIS-165 Lab 4: C++ Averages and Ocean-Level Projections

## Overview

This lab contains two C++ programs. The first calculates the sum and average of five numbers. The second calculates projected ocean-level rise over five, seven, and ten years.

## Program 1: Average Calculator

**File:** `average.cpp`

### Plan
1. Store five numbers in variables.
2. Calculate the sum of the five numbers.
3. Divide the sum by five to calculate the average.
4. Display the sum and average.

### Assigned Values
- Value 1: 28
- Value 2: 32
- Value 3: 37
- Value 4: 24
- Value 5: 33

### Verified Results

The program was tested with the assigned values and produced the following results:

```text
Sum: 154
Average: 30.8
```

The program was also tested with the values 10, 11, 12, 13, and 15.

```text
Sum: 61
Average: 12.2
```

Both tests produced the expected results.

## Program 2: Ocean-Level Projections

**File:** `ocean_levels.cpp`

### Plan
1. Create a constant representing the annual ocean-level rise.
2. Calculate the projected rise after five, seven, and ten years.
3. Display each result in millimeters.

### Assigned Annual Rise

The ocean level rises at an assumed rate of 1.5 millimeters per year.

### Verified Results

The program was tested with the assigned annual rate of 1.5 millimeters.

```text
Ocean-level rise after 5 years: 7.5 millimeters
Ocean-level rise after 7 years: 10.5 millimeters
Ocean-level rise after 10 years: 15 millimeters
```

The program was also tested with an annual rise of 2.3 millimeters.

```text
Ocean-level rise after 5 years: 11.5 millimeters
Ocean-level rise after 7 years: 16.1 millimeters
Ocean-level rise after 10 years: 23 millimeters
```

Both tests produced the expected results.

## How to Compile and Run

A C++ compiler such as `g++` can be used to compile and run each program.

### Compile and Run the Average Calculator

```bash
g++ -std=c++17 -Wall -Wextra average.cpp -o average
./average
```

### Compile and Run the Ocean-Level Program

```bash
g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels
./ocean_levels
```

## Concepts Practiced

- Declaring and initializing variables
- Using `double` for numerical calculations
- Using constants to represent fixed values
- Performing arithmetic operations
- Displaying results with `cout`
- Using comments and meaningful variable names
- Testing programs with different values
- Verifying expected output

## Conclusion

Both C++ programs were tested with the assigned values and alternate test values. The outputs matched the expected calculations. This lab provided practice with variables, constants, arithmetic expressions, output statements, and program testing.
