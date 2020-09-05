# bsq
BSQ project with aarlena.  Will you find a biggest square?

DESCRIPTION
----------
Write a program that draws and print the biggest
possible square in the given area

Allowed Functions
-----------------
1) write
2) malloc
3) free
4) open
5) read
6) close
7) exit


Definition of a valid map :
-------------
1) All lines must have the same length.
2) There’s at least one line of at least one box.
3) At each end of line, there’s a line break.
4) The characters on the map can only be those introduced in the first line.
5) The map is invalid if a character is missing from the first line, or if two char- acters (of empty, full and obstacle) are identical.
6) The characters can be any printable character, even numbers.
7) In case of an invalid map, your program should display map error on the error output followed by a line break.       Your program will then move on to the next map.


PLAN
----------------
1. Parse input field into array;
2. Check if array is valid
3. Check each cell for max avaliable square and remember the most biggest.
4. Output final square 

extra: map generator in c implementation

Needed Functions
----------------
1. int main(int argc, char **argv): Get a not parsed field.
2. int  **field_parse(char **field): Returns parsed field into int array.
3. int  valid_field_check(char **field): Check if field is valid.
4. void print_field(int **array): Prints a final field according of array.
5. map generator idk.
