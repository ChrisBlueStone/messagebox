#include <winuser.h>
#include <cstdlib>

int main(int argc, char** argv) {
    return MessageBoxA(
        NULL,
        argc > 1 ? argv[1] : "",
        argc > 2 ? argv[2] : "",
        argc > 3 ? atoi(argv[3]) : 0
    );
}
