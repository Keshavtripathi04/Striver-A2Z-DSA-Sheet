# 🚀 Step 1.1: Things to Know in C++ / Basics & Math

Welcome to the **Basics & Math Problems** section of the **Striver A2Z DSA Course**! 🎯  
This folder contains foundational C++ practice problems and basic mathematical algorithm implementations essential for building strong problem-solving logic.

---

## 📌 Problem Index & Solutions

### 🛠️ C++ Fundamentals & Language Basics
| S.No. | Topic / Concept | Solution File |
| :---: | :--- | :---: |
| 01 | User Input / Output & Data Types | [`userInputOutput.cpp`](./userInputOutput.cpp) |
| 02 | If-Else Statements | [`ifElseStatements.cpp`](./ifElseStatements.cpp) |
| 03 | Switch Statements | [`switchStatements.cpp`](./switchStatements.cpp) |
| 04 | For Loops & While Loops | [`forLoops.cpp`](./forLoops.cpp) |
| 05 | Functions & Pass by Value/Reference | [`functions.cpp`](./functions.cpp) |
| 06 | Time & Space Complexity Basics | [`timeComplexity.cpp`](./timeComplexity.cpp) |

---

### 🧮 Basic Math Problems
| S.No. | Problem Name | Solution File | Time Complexity | Space Complexity |
| :---: | :--- | :---: | :---: | :---: |
| 01 | Count Digits in a Number | [`countDigits.cpp`](./countDigits.cpp) | $\mathcal{O}(\log_{10} N)$ | $\mathcal{O}(1)$ |
| 02 | Reverse a Number | [`reverseNumber.cpp`](./reverseNumber.cpp) | $\mathcal{O}(\log_{10} N)$ | $\mathcal{O}(1)$ |
| 03 | Check Palindrome Number | [`checkPalindrome.cpp`](./checkPalindrome.cpp) | $\mathcal{O}(\log_{10} N)$ | $\mathcal{O}(1)$ |
| 04 | Find GCD / HCF (Euclidean Algo) | [`gcdOrLcm.cpp`](./gcdOrLcm.cpp) | $\mathcal{O}(\log_{\phi} \min(A, B))$ | $\mathcal{O}(1)$ |
| 05 | Check Armstrong Number | [`armstrongNumber.cpp`](./armstrongNumber.cpp) | $\mathcal{O}(\log_{10} N)$ | $\mathcal{O}(1)$ |
| 06 | Print All Divisors of a Number | [`printAllDivisors.cpp`](./printAllDivisors.cpp) | $\mathcal{O}(\sqrt{N})$ | $\mathcal{O}(1)$ |
| 07 | Check for Prime Number | [`checkPrime.cpp`](./checkPrime.cpp) | $\mathcal{O}(\sqrt{N})$ | $\mathcal{O}(1)$ |

---

## 💡 Key Takeaways

1. **Euclidean Algorithm for GCD:** $$\text{gcd}(a, b) = \text{gcd}(a \% b, b) \quad \text{until } a \% b = 0$$
2. **Optimized Divisor Search:** Iterating up to $\sqrt{N}$ allows us to find all divisors in $\mathcal{O}(\sqrt{N})$ time instead of $\mathcal{O}(N)$.
3. **Digit Extraction:** Extracting last digit using `N % 10` and shrinking the number using `N / 10`.

---

⭐ *If you find these solutions helpful, feel free to star this repository!*