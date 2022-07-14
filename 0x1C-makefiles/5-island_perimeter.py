#!/usr/bin/python3
"""
Function that allows counting the perimeter of the island
"""


def island_perimeter(grid):
    """
    Function that allows counting the perimeter of the island
    """
    remove_sides = 0
    perimeter = 0
    for x in range(len(grid)):
        for z in range(len(grid[x])):
            if(grid[x][z] == 1):
                perimeter += 1
                if(x != 0 and grid[x-1][z] == 1):
                    remove_sides += 1
                elif(z != 0 and grid[x][z-1] == 1):
                    remove_sides += 1
    return (4 * perimeter) - (2 * remove_sides)
