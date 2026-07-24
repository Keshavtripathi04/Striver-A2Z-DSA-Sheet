# 🧩 Pattern Printing Problems

Welcome to the **Pattern Problems** section of the **Striver A2Z DSA Course**! 🚀  
This folder contains clean, well-documented C++ solutions for all **22 pattern problems** designed to build strong logical thinking and loop mastery.

---

## 📌 Problem Index & Solutions

| Pattern # | Name / Pattern Type | Solution File |
| :---: | :--- | :---: |
| **01** | Square Star Pattern | [`pattern01.cpp`](./pattern01.cpp) |
| **02** | Right-Angled Triangle | [`pattern02.cpp`](./pattern02.cpp) |
| **03** | Right-Angled Number Pyramid | [`pattern03.cpp`](./pattern03.cpp) |
| **04** | Right-Angled Number Pyramid - II | [`pattern04.cpp`](./pattern04.cpp) |
| **05** | Inverted Right Pyramid | [`pattern05.cpp`](./pattern05.cpp) |
| **06** | Inverted Numbered Right Pyramid | [`pattern06.cpp`](./pattern06.cpp) |
| **07** | Star Pyramid | [`pattern07.cpp`](./pattern07.cpp) |
| **08** | Inverted Star Pyramid | [`pattern08.cpp`](./pattern08.cpp) |
| **09** | Diamond Star Pattern | [`pattern09.cpp`](./pattern09.cpp) |
| **10** | Half Diamond Star Pattern | [`pattern10.cpp`](./pattern10.cpp) |
| **11** | Binary Number Triangle | [`pattern11.cpp`](./pattern11.cpp) |
| **12** | Number Crown Pattern | [`pattern12.cpp`](./pattern12.cpp) |
| **13** | Increasing Number Triangle (Floyd's) | [`pattern13.cpp`](./pattern13.cpp) |
| **14** | Increasing Letter Triangle | [`pattern14.cpp`](./pattern14.cpp) |
| **15** | Reverse Letter Triangle | [`pattern15.cpp`](./pattern15.cpp) |
| **16** | Alpha-Ramp Pattern | [`pattern16.cpp`](./pattern16.cpp) |
| **17** | Alpha-Hill Pattern | [`pattern17.cpp`](./pattern17.cpp) |
| **18** | Alpha-Triangle Pattern | [`pattern18.cpp`](./pattern18.cpp) |
| **19** | Symmetric-Void Pattern | [`pattern19.cpp`](./pattern19.cpp) |
| **20** | Symmetric-Butterfly Pattern | [`pattern20.cpp`](./pattern20.cpp) |
| **21** | Hollow Rectangle Pattern | [`pattern21.cpp`](./pattern21.cpp) |
| **22** | Concentric Square Number Matrix | [`pattern22.cpp`](./pattern22.cpp) |

---

## 💡 Core Learning & General Approach

Pattern problems are the foundation of **nested loops** and **space-time visualization**.

1. **Outer Loop (`i`)**: Manages the total number of **rows** ($0$ to $N-1$ or $1$ to $N$).
2. **Inner Loops (`j`)**: Manages individual elements printed per row:
   - Printing leading spaces (if required for symmetry).
   - Printing characters/stars/numbers based on row index.
   - Printing trailing spaces (optional).
3. **Symmetry Check**: Complex patterns (like Diamond or Butterfly) are divided into upper and lower halves or solved using mathematical distance formulas.

---

## ⏱️ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N^2)$ — Due to two nested loops running proportional to input $N$.
- **Space Complexity:** $\mathcal{O}(1)$ — Auxiliary space is constant as printing happens directly to standard output (`cout`).

---

⭐ *If you find these solutions helpful, feel free to star this repository!*