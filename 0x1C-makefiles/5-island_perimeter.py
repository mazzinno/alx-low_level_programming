#!/usr/bin/python3
""" Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Returns the perimeter of the island 

    Args:
        grid (list):list of list of integer representing an island.

    Return:
        The perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for index in range(height):
        for jndex in range(width):
            if grid[index][jndex] == 1:
                size += 1

                if (jndex > 0 and grid[index][jndex - 1] == 1):
                    edges += 1
                if (index > 0 and grid[index - 1][jndex] == 1):
                    edges += 1

    return size * 4 - edges * 2
