#!/usr/bin/python3

def island_perimeter(grid):
    """Function finds the perimeter of an island."""
    per = 0
    x = len(grid)
    y = len(grid[0])
    for i in range(x):
        for j in range(y):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    per = per + 1
                if grid[i + 1][j] == 0:
                    per = per + 1
                if grid[i][j - 1] == 0:
                    per = per + 1
                if grid[i][j + 1] == 0:
                    per = per + 1
    return(per)
