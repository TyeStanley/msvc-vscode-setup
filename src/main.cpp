#include <iostream>
#include <windows.h>

int main() {
    std::cout << "Hello MSVC!" << std::endl;
    MessageBoxA(NULL, "Hello Windows!", "Test", MB_OK);
    return 0;
}