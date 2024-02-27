#include <stdio.h>


int main() {
    int fd = 5; // File descriptor to duplicate
    int new_fd = dup(fd); // Duplicate the file descriptor

    // Check if the duplication was successful
    if (new_fd != -1) {
        printf("File descriptor duplicated successfully. New file descriptor: %d\n", new_fd);
    } else {
        printf("Failed to duplicate file descriptor.\n");
    }

    return 0;
}