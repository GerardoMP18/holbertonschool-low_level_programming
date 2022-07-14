#!/usr/bin/python3
"""
Function that allows counting the perimeter of the island
"""


def island_perimeter(grid):
    """
    Function that allows counting the perimeter of the island
    """
    count_perimeter = 0
    for x in range(len(grid)):
        for z in range(len(grid[0])):
            if(grid[x][z] == 1):
                count_perimeter += 4
                if(x != 0 and grid[x-1][z] == 1):
                    count_perimeter -= 2
                if(z != 0 and grid[x][z-1] == 1):
                    count_perimeter -= 2
    return count_perimeter
