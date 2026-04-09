 wap to program to segmentate  fault exception
 #include <iostream>
#include <csignal>
using namespace std;

void signalHandler(int signum) {
    cout << "Segmentation fault caught! Signal: " << signum << endl;
    exit(signum);
}

int main() {
    signal(SIGSEGV, signalHandler); // Register handler

    int* ptr = nullptr;
    cout << *ptr << endl; // Causes segmentation fault

    return 0;
}