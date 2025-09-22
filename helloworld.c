#include <stdio.h>
#include <stdint.h>

int main() {
    uint64_t houdini[3] = { 0x5A13D, 0x4D4E269, 0x23CF4D };

    houdini[0] *= 1646 << 1;
    houdini[2] *= 409 << 1;
    houdini[1] = (houdini[1] << 4) + (houdini[1] << 2) + (houdini[1] << 1) + houdini[1]; 

    for (int magic = 0; magic < 3; magic++) {
        for(int kobe = 24; kobe >= 0; kobe -= (2 << 2)) {
            printf("%c", (char)(houdini[magic] >> (kobe)));
        }
    }
}