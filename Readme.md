# Compilation Stages Exploration

This repository demonstrates different stages of compilation in C using `gcc` on Linux.  
It includes examples showing how to stop at intermediate compilation steps, save intermediate files, and restart compilation from the middle.

## Files Overview

### Source Code Files
- **main.c**  
  Prints a message depending on the operating system where it's compiled (Linux, Windows, macOS).
  
- **sum.c**  
  Prompts the user for two integers and prints their sum.

- **diff.c**  
  Prompts the user for two integers and prints their difference.

### Generated Files
These files are generated using various GCC options:
- **.i** – Preprocessed source code file (`gcc -E` or `--save-temps`).
- **.s** – Assembly code file (`gcc -S` or `--save-temps`).
- **.o** – Object file after compilation (`gcc -c` or `--save-temps`).
- Executables (`main`, `sum`, `diff`) – Final binaries after linking.

Example generated files in this repo:
```
main.i   main.s   main.o   main
sum.i    sum.s    sum.o    sum
diff.s   diff
```

## Commands Used

### 1. Compile and Run Normally
```bash
gcc main.c
./a.out
```

### 2. Compile with a Custom Output Name
```bash
gcc main.c -o main
./main
```

### 3. Save All Intermediate Files
```bash
gcc main.c -o main --save-temps
gcc sum.c -o sum --save-temps
```

This generates:
- `.i` – preprocessed file
- `.s` – assembly file
- `.o` – object file
- executable (`main`, `sum`, etc.)

### 4. Stop After Generating Assembly
```bash
gcc diff.c -S -o diff.s
```

### 5. Compile from Assembly
```bash
gcc diff.s -o diff
./diff
```

### 6. Compile to Object File Only
```bash
gcc main.c -c -o main.o
```

### 7. Link Object Files to Executable
```bash
gcc main.o -o main
```

## Learning Points
- **`--save-temps`**: Saves `.i`, `.s`, and `.o` files for inspection.
- **`-S`**: Stops after generating assembly.
- **`-c`**: Compiles to object code without linking.
- **Resuming Compilation**: You can compile from `.s` or `.o` files without recompiling the original `.c`.

---
**Author:** Imon Mallik  
**Platform Tested:** Parrot OS (Linux)
