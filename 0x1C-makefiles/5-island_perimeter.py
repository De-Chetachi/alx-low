#!/usr/bin/python3
'''this module contains a function that finds the parameter
of an island described by a grid'''


def island_perimeter(grid):
    '''perimeter of the island described in grid'''
    param = 0
    mat = len(grid)
    list_ = len(grid[0])

    for a in range(mat):
        for b in range(list_):
            if grid[a][b] == 1:
                param = param + 4
                if b > 0:
                    if grid[a][b - 1] == 1:
                        param -= 1
                if b < list_ - 1:
                    if grid[a][b + 1] == 1:
                        param -= 1
                if a > 0:
                    if grid[a - 1][b] == 1:
                        param -= 1

                if a < mat - 1:
                    if grid[a + 1][b] == 1:
                        param -= 1

    return (param)
