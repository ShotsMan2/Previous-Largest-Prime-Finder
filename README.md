# Previous Largest Prime Finder

This project implements a mathematical search algorithm in C to find the largest prime number smaller than a given input.

## ⚙️ Logic

1.  **Input:** An integer `N` (e.g., 23).
2.  **Search Direction:** Descending ($N-1 \to 2$).
3.  **Process:**
    * Check if $N-1$ is prime. If yes, Return it.
    * If no, check $N-2$, then $N-3$...
4.  **Primality Test:** Checks divisibility by loop from $2$ to $CurrentNumber - 1$.

## 🚀 Example Output

Based on Question 3:
**Input:** `23`

* Check 22: Divisible by 2 (No)
* Check 21: Divisible by 3 (No)
* Check 20: Divisible by 2 (No)
* **Check 19:** Only divisible by 1 and 19 (**PRIME!**)

```text
--- Onceki Asal Sayiyi Bulma ---
Girilen Sayi: 23
Bu sayidan kucuk en buyuk asal sayi: 19
