#include <stdio.h>

int main() {
    if (remove("data1.txt") == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Unable to delete the file.\n");
    }
    return 0;
}
