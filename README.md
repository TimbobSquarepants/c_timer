# c_timer

This repository contains a C program that implements a simple timer. The timer can be used to measure the execution time of specific code sections in a C program.

## Usage

To use the timer, follow these steps:

1. Include "Timer.hpp"
2. Wrap the function/method with "{}"



Here's an example usage:

```cpp
#include "Timer.hpp"

int main() {
    {
        Timer timer;
        // Code section to measure

        std::cout << "Hello World!" << std::endl;
    }

    return 0;
}
```

Example output:

```
Hello World!
Method took to run in nanoseconds: 19 and in ms: 0.019
```

