#include <stdio.h>

#include "lett.h"

static void printUsage() {
    fprintf(stderr, "Usage: lett [filepath [arg1 ...]]\n");
}

static void printVersion() {
    printf("Lett %s\n", LETT_LANG_VERSION);
}

static void runInteractive() {
    printVersion();
    printf("Running interactive!\n");
}

static void runFile(const char *path) {
    printf("Running file %s\n", path);
}

int main(int argc, char *argv[]) {
    if (argc < 1) {
        printUsage();
    } else if (argc == 1) {
        runInteractive();
    } else {
        runFile(argv[1]);
    }
}
