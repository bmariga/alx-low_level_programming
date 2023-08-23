#!/usr/bin/python3
""" periemter module """


def island_perimeter(grid):
    """ method that returns the perimeter of the island
    described in grid
    Args:
        grid(list): is a list of integers
        0 represents water 1 represents land zone
        one cell of the grid is a square with side lenght 1
        grid is rectancular and width and height don't exceed the 100
    grid is completely surrounded by water and there is one island
    or nothing.
    """

    lands = 0
    side = 0
    for height in range(len(grid)):
        for width in range(len(grid[height])):
            if grid[height][width] == 1:
                lands += 1
                if height > 0 and grid[height-1][width] == 1:
                    side += 1
                if width > 0 and grid[height][width-1] == 1:
                    side += 1
    return lands * 4 - side * 2
