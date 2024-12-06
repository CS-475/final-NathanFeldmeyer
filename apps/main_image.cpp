/**
 *  Copyright 2023 Mike Reed
 */

#include <stdio.h>
#include <chrono>
#include <thread>

extern int main_image(int argc, const char* argv[]);

int main(int argc, const char* argv[]) {
    
    for(int i=0;i<4;i++){
        sleep_for(60s);
    }


    return main_image(argc, argv);
}

