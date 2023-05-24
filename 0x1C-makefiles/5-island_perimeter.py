#!/usr/bin/python3

"""Technical interview preparation

Create a function `def island_perimeter(grid):` that
    returns the perimeter of the island described in grid:

grid is a list of list of integers:
    - 0 represents a water zone
    - 1 represents a land zone
    - One cell is a square with side length 1
    - Grid cells are connected horizontally/vertically (not diagonally).

Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have "lakes"
    (water inside that isn’t connected to the water around the island).
"""


def island_perimeter(grid):
    """A function that returns the perimeter of the island

        Args:
            grid(list): A list of lists(of integers)
                with a specific dimension of width and height not more
                than 100.
        Returns:
            int: the perimeter of the island
    """

    # The assumed perimeter is the sum of all the perimeter of each land cell
    #   multiplied by 4, because 4 is the perimeter of each cell.
    # The cell connection is the value of real connecting cells that forms
    #  an island

    assumed_perimeter = 0  # An assumed perimeter
    cell_connections = 0  # Number of connected cells

    # Dimension of grid
    width, height = (len(grid[0]), len(grid))

    for row in range(height):
        for col in range(width):
            # If the cell is 0(i.e water), skip
            if grid[row][col] == 0:
                continue

            # Assumed perimeter is the perimeter of all the lands(i.e cells 1)
            if grid[row][col] == 1:
                assumed_perimeter += 1

            # Check against the horizontal and vertical neighbouring cells
            #   towards the left(like upward not downward)
            #   use this to update cell_connections

            # Check if the neighbour at the top is a land cell
            if (row > 0) and (grid[row-1][col] == 1):
                cell_connections += 1  # Update the cell connections

            # Check if the neighbour at the left is a land cell
            if (col > 0) and (grid[row][col-1] == 1):
                cell_connections += 1  # Update the cell connections

    # Two cells is accountable to a connection, so cell_connection
    # To get the perimeter of the island
    #   We subtract the all cell_connections from assumed perimeter
    return (assumed_perimeter * 4) - (cell_connections * 2)
