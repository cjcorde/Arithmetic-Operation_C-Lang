# Arithmetic Operation Library in C

Welcome to the **Arithmetic-Operation_C-Lang** repository! This repository showcases a user-made library for basic arithmetic operations implemented in C programming language.

## Files

This repository contains the following files:

- `addition.c`: Source code for the addition operation.
- `division.c`: Source code for the division operation.
- `main.c`: Main program that provides a user interface for arithmetic operations.
- `multiplication.c`: Source code for the multiplication operation.
- `subtraction.c`: Source code for the subtraction operation.

## How to Use

1. Clone this repository to your local machine using `git clone`.

2. Compile the library by running the following commands in your terminal:

    ```sh
    gcc -c addition.c division.c multiplication.c subtraction.c
    ar rcs libcalculator.a addition.o division.o multiplication.o subtraction.o
    ```

3. Compile the main program using the library:

    ```sh
    gcc -o calculator main.c -L. -lcalculator
    ```

4. Run the executable:

    ```sh
    ./calculator
    ```

5. Follow the on-screen instructions to perform arithmetic operations.

## Contributing

Contributions are welcome! Feel free to submit issues or pull requests if you have any improvements or ideas for this project.

## License

This project is licensed under the [MIT License](LICENSE).

---

