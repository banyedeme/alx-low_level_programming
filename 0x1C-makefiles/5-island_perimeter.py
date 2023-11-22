#!/usr/bin/python3
"""Technical interview prep task: Island Perimeter"""


def island_perimeter(grid):
    """Returns the perimiter of an island"""
    shape = 0
    sizes = 0
    length = len(grid)
    width = len(grid[0])
    for x in range(length):
        for y in range(width):
            if grid[x][y] == 1:
                sizes = sizes + 1
                if (y > 0 and grid[x][y - 1] == 1):
                    shape += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    shape += 1
    return sizes * 4 - shape * 2
