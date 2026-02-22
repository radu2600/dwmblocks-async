#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER " "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "/opt/dwmblocks/cputemp", 1, 0) \
    X("", "/opt/dwmblocks/volume", 0, 4) \
    X("", "/opt/dwmblocks/disk /", 0, 6) \
    X("", "/opt/dwmblocks/memory", 2, 2) \
    X("", "/opt/dwmblocks/updates", 3600, 1) \
    X("", "/opt/dwmblocks/clock", 1, 5)

#endif  // CONFIG_H
