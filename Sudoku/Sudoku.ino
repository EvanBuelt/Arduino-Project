#include "Board.h"
#include "Solver.h"

Board board = Board();
ElegantSolver solver = ElegantSolver(&board);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // First row
  board.setValue(5, 0, 0);
  board.setValue(8, 0, 2);
  board.setValue(7, 0, 4);
  board.setValue(3, 0, 5);
  board.setValue(1, 0, 6);
  board.setValue(9, 0, 7);

  // Second row
  board.setValue(9, 1, 0);
  board.setValue(6, 1, 3);
  board.setValue(4, 1, 6);
  board.setValue(8, 1, 8);

  // Third row
  board.setValue(9, 2, 3);
  board.setValue(8, 2, 5);
  board.setValue(3, 2, 7);
  board.setValue(5, 2, 8);

  // Fourth row
  board.setValue(7, 3, 1);
  board.setValue(6, 3, 7);

  // Fifth row
  board.setValue(2, 4, 2);
  board.setValue(9, 4, 6);

  // Sixth row
  board.setValue(1, 5, 1);
  board.setValue(8, 5, 7);

  // Seventh row
  board.setValue(1, 6, 0);
  board.setValue(9, 6, 1);
  board.setValue(3, 6, 3);
  board.setValue(6, 6, 5);

  // Eighth row
  board.setValue(2, 7, 0);
  board.setValue(3, 7, 2);
  board.setValue(7, 7, 5);
  board.setValue(9, 7, 8);

  // Ninth row
  board.setValue(8, 8, 1);
  board.setValue(7, 8, 2);
  board.setValue(1, 8, 3);
  board.setValue(9, 8, 4);
  board.setValue(3, 8, 6);
  board.setValue(4, 8, 8);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Starting");
  solver.solve();
  Serial.println("Done");
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      Serial.print(board.getValue(i, j));
      Serial.print(" ");
    }
    Serial.println(" ");
  }
  delay(10000);
}
