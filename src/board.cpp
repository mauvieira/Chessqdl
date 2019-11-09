#include "board.h"

using namespace chessqdl;

Board::Board() {
	// set initial board state
	FEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1";
	fenToBitboard();
}

Board::Board(std::string fen) {
	FEN = std::move(fen);
	fenToBitboard();
}

void Board::fenToBitboard() {

}

