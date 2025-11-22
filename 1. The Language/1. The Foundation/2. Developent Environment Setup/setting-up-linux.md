# Setting up on Linux

*Installing C Compilers on Unix-like Systems*

Linux and macOS provide excellent environments for C development, with powerful terminal tools and native compiler support. Let's get your development environment set up.
### Arch Linux Setup

```bash
sudo pacman -S base-devel clang gdb valgrind
```
### Verify Installation

```bash
gcc --version    # Should show GCC 10+ on most systems
clang --version  # Should show Clang 10+
which gcc        # Check if compiler is in PATH
```
## Choosing Your Compiler

### For Beginners: Use Clang

Clang has better error messages and is generally more beginner-friendly:

```bash
clang -std=c17 -Wall -Wextra -g program.c -o program
```

### For Advanced Users: Use Both

Test with multiple compilers to catch different types of errors:

```bash
# Test with Clang
clang -std=c17 -Wall -Wextra program.c -o program_clang

# Test with GCC  
gcc -std=c17 -Wall -Wextra program.c -o program_gcc
```
## Essential Development Tools

### Debuggers

- **GDB**: GNU Debugger - `sudo pacman -S gdb`
- **LLDB**: LLVM Debugger - usually installed with Clang
### Memory Checkers

- **Valgrind**: Memory leak and error detection - `sudo pacman -S valgrind`
- **AddressSanitizer**: Built into Clang/GCC (use `-fsanitize=address`)
### Build Tools

- **Make**: Automates compilation - `sudo pacman -S make`
- **CMake**: Cross-platform build system - `sudo pacman -S cmake`
## Testing Your Setup

Create a simple test file `hello.c`:

```c
#include <stdio.h>

int main(void) {
    printf("Hello, C World!\n");
    printf("Compiler setup successful!\n");
    return 0;
}
```

Compile and run:

```sh
clang -std=c17 -Wall -Wextra -g hello.c -o hello
./hello
```

If you see the welcome message, your setup is working!
## Recommended Compiler Flags for Learning

```bash
# Basic learning flags
clang -std=c17 -Wall -Wextra -g program.c -o program

# Strict mode (catch more errors)
clang -std=c17 -Wall -Wextra -Wpedantic -Werror -g program.c -o program

# With memory sanitizer
clang -std=c17 -Wall -Wextra -g -fsanitize=address,undefined program.c -o program
```

Your development environment is now ready! You have all the tools needed to start your C programming journey.

---
