# 🎯 C++ Mini Projects

This repository contains three C++ mini-projects designed for learning and demonstration purposes:

1. 📊 CGPA Calculator  
2. 🧩 Sudoku Solver  
3. 🏦 Banking System

Each project is self-contained and can be compiled and run individually using a C++ compiler.

---

## 1. 📊 CGPA Calculator

### 📄 Description
A simple console-based program to calculate the CGPA based on subject-wise grade points and credits.

### ▶ How to Run
```bash
g++ cgpa_calculator.cpp -o cgpa
./cgpa
🧾 Sample Output

Enter number of subjects: 3
Enter grade point and credit for subject 1: 9 4
Enter grade point and credit for subject 2: 8 3
Enter grade point and credit for subject 3: 10 3

Total Credits: 10
Total Grade Points: 89
CGPA: 8.90
2. 🧩 Sudoku Solver

📄 Description

A backtracking-based C++ program to solve any 9x9 Sudoku puzzle.

▶ How to Run

g++ sudoku_solver.cpp -o sudoku
./sudoku

🧾 Sample Output

Enter the Sudoku puzzle (use 0 for empty cells):

5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9

Solved Sudoku:
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9

3. 🏦 Banking System

📄 Description

A menu-driven banking system that supports:

Account creation

Deposit and withdrawal

Balance inquiry

Account deletion (basic simulation)


▶ How to Run

g++ banking_system.cpp -o bank
./bank

🧾 Sample Output

==== Welcome to Simple Bank System ====
1. Create Account
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Enter your choice: 1

Enter Account Holder Name: Kavya
Enter Initial Deposit: 1000
Account created successfully!

Enter your choice: 2
Enter account number: 1001
Enter amount to deposit: 500
Deposit successful. New balance: 1500

Enter your choice: 4
Enter account number: 1001
Account Holder: Kavya
Balance: 1500

Enter your choice: 5
Thank you for using our bank system!

