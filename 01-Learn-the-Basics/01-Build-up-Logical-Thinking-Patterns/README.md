# 🧩 Pattern Printing Problems

Welcome to the **Pattern Printing Problems** section of the **Striver A2Z DSA Course**! 🚀  
This folder contains clean, well-documented C++ solutions for all **22 pattern problems** designed to build strong logical thinking and loop mastery.

---

## 📌 Problem Index & Solutions

| Pattern # | Pattern Name / Type | Solution Link | Core Concept |
| :---: | :--- | :---: | :--- |
| **01** | Square Star Pattern | [`pattern01.cpp`](./pattern01.cpp) | Nested loops & grid printing |
| **02** | Right-Angled Triangle | [`pattern02.cpp`](./pattern02.cpp) | Row-dependent column iteration |
| **03** | Right-Angled Number Pyramid | [`pattern03.cpp`](./pattern03.cpp) | Inner loop value printing |
| **04** | Right-Angled Number Pyramid - II | [`pattern04.cpp`](./pattern04.cpp) | Outer loop row value printing |
| **05** | Inverted Right Pyramid | [`pattern05.cpp`](./pattern05.cpp) | Decreasing loop bounds |
| **06** | Inverted Numbered Right Pyramid | [`pattern06.cpp`](./pattern06.cpp) | Decreasing sequence logic |
| **07** | Star Pyramid | [`pattern07.cpp`](./pattern07.cpp) | Space & Star combination logic |
| **08** | Inverted Star Pyramid | [`pattern08.cpp`](./pattern08.cpp) | Reverse space-star logic |
| **09** | Diamond Star Pattern | [`pattern09.cpp`](./pattern09.cpp) | Combination of Pyramid & Inverted Pyramid |
| **10** | Half Diamond Star Pattern | [`pattern10.cpp`](./pattern10.cpp) | Conditional symmetry logic |
| **11** | Binary Number Triangle | [`pattern11.cpp`](./pattern11.cpp) | Alternating 1s and 0s logic |
| **12** | Number Crown Pattern | [`pattern12.cpp`](./pattern12.cpp) | Symmetric space filling |
| **13** | Increasing Number Triangle | [`pattern13.cpp`](./pattern13.cpp) | Incremental counter logic (Floyd's) |
| **14** | Increasing Letter Triangle | [`pattern14.cpp`](./pattern14.cpp) | Character ASCII conversion |
| **15** | Reverse Letter Triangle | [`pattern15.cpp`](./pattern15.cpp) | Decreasing ASCII iteration |
| **16** | Alpha-Ramp Pattern | [`pattern16.cpp`](./pattern16.cpp) | Character repetition per row |
| **17** | Alpha-Hill Pattern | [`pattern17.cpp`](./pattern17.cpp) | Palindromic character structure |
| **18** | Alpha-Triangle Pattern | [`pattern18.cpp`](./pattern18.cpp) | Reverse character starting points |
| **19** | Symmetric-Void Pattern | [`pattern19.cpp`](./pattern19.cpp) | Upper/Lower boundary voids |
| **20** | Symmetric-Butterfly Pattern | [`pattern20.cpp`](./pattern20.cpp) | Dynamic space-star expansion |
| **21** | Hollow Rectangle Pattern | [`pattern21.cpp`](./pattern21.cpp) | Boundary condition checks (`i==0`, `j==0`) |
| **22** | Concentric Square Number Matrix | [`pattern22.cpp`](./pattern22.cpp) | Min-distance boundary calculation |

---

## 💡 Core Learning & General Approach

Pattern problems are the foundation of **nested loops** and **space-time visualization**.

1. **Outer Loop (`i`)**: Controls the total number of **rows** ($0$ to $N-1$ or $1$ to $N$).
2. **Inner Loops (`j`)**: Manages individual elements printed per row:
   - Printing leading spaces (for alignment).
   - Printing characters/stars/numbers based on row index.
3. **Symmetry Logic**: Complex patterns (like Diamond or Butterfly) are split into upper and lower halves or solved using mathematical distance formulas.

---

## ⏱️ Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N^2)$ — Due to nested loops running proportional to input $N$.
- **Space Complexity:** $\mathcal{O}(1)$ — Printing directly to standard output (`cout`).

---

⭐ *If you find these solutions helpful, feel free to star this repository!*