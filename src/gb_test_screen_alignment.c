/*
File:           gb_test_screen_alignment.c
Author:         Schuyler Martin <schuylermartin45@github>


Description:    Test program that can be used to validate the alignment of a
                Gameboy screen. Useful for IPS screen modifications.
*/

#include <gb/gb.h>
#include <gbdk/console.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

/***** Functions *****/

/*
** Main entry point to the program
** @return Exit code...for historical reasons and to be "proper"
*/
int main() {
    while (true) {
        wait_vbl_done();
    }

    return 0;
}