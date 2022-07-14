#!/usr/bin/python3
"""
Function that allows counting the perimeter of the island
"""


def island_perimeter(grid):
    count_perimeter = 0
    for x in range(len(grid)):
        for z in range(len(grid[x])):
            if(grid[x][z] == 1):
                count_perimeter += 4
                if(grid[x-1][z] == 1):
                    count_perimeter -= 2
                elif(grid[x][z-1] == 1):
                    count_perimeter -= 2
    return count_perimeter
