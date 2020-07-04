#!/usr/bin/python3
""" Task island perimeter
"""


def island_perimeter(grid):
    """ Function that solve the island perimeter
    """
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i][j - 1] == 0 or j == 0:
                    count += 1
                if grid[i][j + 1] == 0 or j == len(grid[i]):
                    count += 1
                if grid[i - 1][j] == 0 or i == 0:
                    count += 1
                if grid[i + 1][j] == 0 or i == len(grid):
                    count += 1
    return count
