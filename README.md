# Dante Star

Dante Star is a project that allows generating and solving mazes. It offers the possibility to generate two types of mazes: perfect and imperfect.

## Installation

To install the project, you can clone it from the GitHub repository:

```bash
git clone https://github.com/your_username/dante-star.git
```
## Building

The project uses a Makefile for its construction. To build the project, go to the root folder and run:

```bash
make
```

## Testing the project

To test the project, run the tester binary in the project root with the following arguments:

```bash
./tester <width> <height> <perfect>
```
- `width`: the width of the maze (in number of cells)
- `height`: the height of the maze (in number of cells)
- `perfect`: write 'perfect'to generate a perfect maze or nothing to make an imperfect

## Graphical version

To access the graphical version of the project, run:

```bash
make bonus
```

Then, go to the bonus folder and run the tester binary with the same arguments as before.
Maze description

A maze starts at the top left and finishes at the bottom right. It consists of walls marked with `X` and free paths marked with `*`. The solution after solving the maze is marked with `o`

## Contributors

 - <a href="https://github.com/Tomi-Tom">Tom Bariteau-Peter</a>
 - <a href="https://github.com/Steci">Léa Guillemard</a>
