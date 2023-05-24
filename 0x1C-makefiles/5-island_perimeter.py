#!/usr/bin/python3
"""
Contains a function that measures the coast length
of an island
"""


def beaches(grid, i, j, m, n):
    """
    Defines how many beaches a cell at (i, j)
    has at in an [m, n] grid
    (i, j) is assumed to be land
    """
    beaches = 0
    if ((i-1) >= 0) and (grid[i-1][j] == 0):
        beaches += 1
    if ((i+1) < m) and (grid[i+1][j] == 0):
        beaches += 1
    if ((j-1) >= 0) and (grid[i][j-1] == 0):
        beaches += 1
    if ((j+1) < n) and (grid[i][j+1] == 0):
        beaches += 1
    return beaches


def eg(grid, i, j, m, n):
    """
    Defines how many edges a cell at (i, j)
    has at in an [m, n] grid in the upwards
    and backwards direction
    (i, j) is assumed to be land
    """
    beaches = 0
    if ((i-1) >= 0) and (grid[i-1][j] == 1):
        beaches += 1
    if ((j-1) >= 0) and (grid[i][j-1] == 1):
        beaches += 1
    return beaches


def island_perimeter(grid):
    """
    This function calculates the length of the
    cast line of a rectangular grid of m rows and
    n columns
    """
    size = 0
    edges = 0
    m = len(grid)
    if m == 0:
        return 0
    n = len(grid[0])

    for i in range(0, m):
        for j in range(0, n):
            if grid[i][j] == 1:
                size += 1
                edges += eg(grid, i, j, m, n)
    return (size * 4) - (edges * 2)
