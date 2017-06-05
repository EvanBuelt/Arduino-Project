#include "Board.h"
#include "Solver.h"
#include "SolverSupport.h"

uint8_t input_board[9][9] = {
{5, 0, 8, 0, 7, 3, 1, 9, 0},
{9, 0, 0, 6, 0, 0, 4, 0, 8},
{0, 0, 0, 9, 0, 8, 0, 3, 5},
{0, 7, 0, 0, 0, 0, 0, 6, 0},
{0, 0, 2, 0, 0, 0, 9, 0, 0},
{0, 1, 0, 0, 0, 0, 0, 8, 0},
{1, 9, 0, 3, 0, 6, 0, 0, 0},
{2, 0, 3, 0, 0, 7, 0, 0, 9},
{0, 8, 7, 1, 9, 0, 3, 0, 4}};

Board board = Board(input_board);
ElegantSolver solver = ElegantSolver(&board);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting");
  solver.solve();
  Serial.println("Done");

  solverSupport.displayValueCount();
  waitForInput();
  waitForInput();
  displayBoard(&board);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(10000);
}
