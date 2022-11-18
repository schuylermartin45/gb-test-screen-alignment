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

#include "pattern.h"
#include "tileset.h"

/***** Functions *****/

/*
** Main entry point to the program
** @return Exit code...for historical reasons and to be "proper"
*/
int main() {
    set_bkg_data(0, 9, PatternTiles);
    set_bkg_tiles(0, 0, patternWidth, patternHeight, pattern);

    // Render data and turn the screen on
    SHOW_BKG;
    DISPLAY_ON;

    while (true) {
        // TODO add more features in the future(?)
        wait_vbl_done();
    }

    return 0;
}