#include "piece.h"
#include <iostream>

using namespace xqdl;

// TODO: Fix pieces resolution
void Piece::loadTexture(const std::string &path) {
	if (!texture.loadFromFile(path))
		std::cout << "Error: Could not load texture! Path to file: " << path << std::endl;
	else {
		texture.setSmooth(true);
		sprite.setTexture(texture);
	}
}

Pawn::Pawn(bool white) {
	if (white == 1)
		loadTexture("resources/img/wPawn.png");
	else
		loadTexture("resources/img/bPawn.png");
}

int Pawn::move() {
	return 1;
}

Knight::Knight(bool white) {
	if (white == 1)
		loadTexture("resources/img/wKnight.png");
	else
		loadTexture("resources/img/bKnight.png");
}

int Knight::move() {

}

Bishop::Bishop(bool white) {
	if (white == 1)
		loadTexture("resources/img/wBishop.png");
	else
		loadTexture("resources/img/bBishop.png");
}

int Bishop::move() {

}

Rook::Rook(bool white) {
	if (white == 1)
		loadTexture("resources/img/wRook.png");
	else
		loadTexture("resources/img/bRook.png");
}

int Rook::move() {

}

Queen::Queen(bool white) {
	if (white == 1)
		loadTexture("resources/img/wQueen.png");
	else
		loadTexture("resources/img/bQueen.png");
}

int Queen::move() {

}


King::King(bool white) {
	if (white == 1)
		loadTexture("resources/img/wKing.png");
	else
		loadTexture("resources/img/bKing.png");
}

int King::move() {

}
