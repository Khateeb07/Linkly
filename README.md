
# 🔗 Linkly – A Modular C Linked List Library

**Linkly** is a modular and reusable linked list library written in C.  
It supports multiple types of linked lists with full functionality and can be used as either a **static** or **dynamic** library in your C projects.

---

## 📦 Features

- ✅ Singly Linked List (`sll`)
- 🔁 Singly Circular Linked List (`scl`)
- 🔁 Doubly Linked List (`dll`)
- 🔁 Doubly Circular Linked List (`dcl`)

It includes core functionalities like:

- List creation
- Node insertion
- Node deletion
- Traversal (forward & reverse)
- Size computation
- Type-specific behaviors (e.g., circular links)
- Error Handling via `stderr`

---

## 📁 Project Structure

```
/llcode
├── singly.c
├── singly_circular.c
├── doubly.c
├── doubly_circular.c
├── traversal.c
├── insertion.c
├── deletion.c
├── size.c
├── headnode.c
├── linkedlist.h
├── test.c             # Example usage
└── ...
```

---

## 🛠️ Creating and Using Static Library (`liblinkedlist.a`)

### 1. Clone the Repository

```bash
git clone https://github.com/khateeb07/linkly.git
cd linkly
```

### 2. Create relocatable object files (ROCs)

```bash
gcc -c *.c
```

### 3. Archive into a static library

```bash
ar r liblinkedlist.a *.o
```

### 4. Move static library and header to standard locations

```bash
sudo mv liblinkedlist.a /lib/
sudo mv linkedlist.h /usr/include/
```

### 5. Compile your program using the static library

```bash
gcc -o executable_file source_file.c -llinkedlist
```

---

## 🔁 Creating and Using Dynamic Library (`liblinkedlist.so`)

### 1. Compile source files as Position Independent Code (PIC)

```bash
gcc -g -c -fPIC -Wall *.c
```

### 2. Create the shared object file

```bash
gcc -g -shared -o liblinkedlist.so *.o
```

### 3. Compile your program with the shared library

```bash
gcc -g -Wall -o executable_file source_file.c liblinkedlist.so
```

### 4. Run your program

#### Option A: Without moving `.so` file

```bash
LD_LIBRARY_PATH=. ./executable_file
```

#### Option B: Move `.so` file to system library

```bash
sudo mv liblinkedlist.so /lib/
./executable_file
```

---

## 🔍 Function Reference

All available list functions (across singly, circular, doubly, etc.) are implemented and
mapped via their aliases in **`operations.c`**. To explore or test specific operations,
check the `operations.c` file.

---

## 🧪 Example Usage

```c
#include <linkedlist.h>

int main() {
    sll.create(5);
    sll.traverse();
    sll.remove(3);
    sll.traverse();
    sll.size();
    return 0;
}
```

Compile it with:

```bash
gcc -o test test.c -llinkedlist
```

---

## ⚠️ Error Handling

This library prints all runtime errors (like no inputs, invalid positions, etc.) to `stderr` for better debugging.

---

## 📜 License

MIT License

---

## 👤 Author

Made with 💻 and ❤️ by **[Khateeb Aamir](https://github.com/khateeb07)**
