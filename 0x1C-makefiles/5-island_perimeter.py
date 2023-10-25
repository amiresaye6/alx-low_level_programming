#!/usr/bin/python3
"""module for function island_perimeter"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    perimeter = 0
    grid = add_zeros_around_grid(grid)

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if (grid[row][col] == 1):
                if (col < len(grid[0]) - 1 and grid[row][col + 1] == 0):
                    perimeter += 1
                if (col > 0 and grid[row][col - 1] == 0):
                    perimeter += 1
                if (row < len(grid) - 1 and grid[row + 1][col] == 0):
                    perimeter += 1
                if (row > 0 and grid[row - 1][col] == 0):
                    perimeter += 1
    return perimeter


def add_zeros_around_grid(grid):
    """function to add zerow around the grid """
    height = len(grid)
    width = len(grid[0])

    new_grid = [[0] * (width + 2) for _ in range(height + 2)]

    for i in range(height):
        for j in range(width):
            new_grid[i+1][j+1] = grid[i][j]

    return new_grid
