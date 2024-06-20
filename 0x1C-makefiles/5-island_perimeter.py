#!/usr/bin/python3
"""Defines a function that calculates the perimeter of and island"""


def island_perimeter(grid):
    """Returns the perimeter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of lists of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    if width <= 100 and height <= 100:
        for i in range(height):
            for j in range(width):
                if grid[i][j] == 1:
                    size += 1
                    if j > 0 and grid[i][j - 1] == 1:
                        edges += 1
                    if i > 0 and grid[i - 1][j] == 1:
                        edges += 1
    return (size * 4) - (edges * 2)
