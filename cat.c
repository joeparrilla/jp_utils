#include <unistd.h>

int main(int argc, char* argv[]) {
    
    char buffer[1024];
    ssize_t bytes_read;

    while(1) {

        bytes_read = read(0, buffer, 1024);

        if(bytes_read == 0) {
            break;
        }

        write(1, buffer, bytes_read);
    }

    return 0;
}