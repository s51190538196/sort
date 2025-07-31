# Sorting Algorithms in C

This project provides implementations of classic sorting algorithms in C, including **Heapsort**, **Mergesort**, **Quicksort**, and a **Word Heapsort** variant.  
Each sorting algorithm is organized into its own directory with source code, headers, and a `makefile` for compilation.

---

## 📂 Project Structure

```
sort/
├── heapsort/       # Heapsort implementation
├── mergesort/      # Mergesort implementation
├── quicksort/      # Quicksort implementation
└── wordheapsort/   # Word Heapsort implementation
```

Each folder contains:
- `main.c` → Entry point for testing the algorithm  
- `makefile` → Compilation rules  
- `.c` and `.h` files → Implementation and headers  
- `number.txt` / `randnum.c` → Input generation utilities  
- `sortnumber.txt` → Output file after sorting  

---

## ⚙️ Compilation & Execution

Navigate into the desired algorithm folder and run:

```bash
cd heapsort
make
./heapsort
```

For other algorithms, replace `heapsort` with `mergesort`, `quicksort`, or `wordheapsort`.

---

## 📌 Example

### Heapsort
```bash
cd heapsort
make
./heapsort
```

- Input numbers are read from `number.txt`.
- Sorted results will be written into `sortnumber.txt`.

---

## 📖 Implemented Algorithms

- **Heapsort**
  - **Time Complexity**: O(n log n) in best, average, and worst cases.
  - **Space Complexity**: O(1) (in-place sorting).
  - Notes: Utilizes a binary heap structure. Provides consistent log-linear performance but is not a stable sort.

- **Mergesort**
  - **Time Complexity**: O(n log n) in best, average, and worst cases.
  - **Space Complexity**: O(n) (requires additional array).
  - Notes: A classic divide-and-conquer algorithm. Stable sorting, well-suited for large datasets and linked lists.

- **Quicksort**
  - **Time Complexity**:  
    - Best Case: O(n log n) (balanced partitions)  
    - Average Case: O(n log n)  
    - Worst Case: O(n²) (highly unbalanced partitions)
  - **Space Complexity**: O(log n) ~ O(n), depending on recursion depth.
  - Notes: One of the fastest sorting algorithms in practice, though performance degrades in the worst case.

- **Word Heapsort**
  - **Time Complexity**: O(n log n)  
  - **Space Complexity**: O(1)  
  - Notes: A variant of Heapsort adapted for sorting strings or words. Retains in-place sorting capability.

---

## 🛠️ Requirements
- GCC (GNU Compiler Collection) or another C compiler.
- Make utility (`make` command).

---

## 👩‍💻 Author
Developed as a practice project for learning and comparing different sorting algorithms in C.
