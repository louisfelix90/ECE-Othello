#ifndef _ECE_OTHELLO_UI_GAMES_CLI_HPP_
	#define _ECE_OTHELLO_UI_GAMES_CLI_HPP_

	//#define SIMPLE_UI true

	#include <iostream>
	#include <fstream>
	#include <sstream>
	#include "../../board/board.hpp"
	#include "../../players/player.hpp"
	#include "gameui.hpp"
	#include "../../../cli/cli.hpp"

	namespace Othello {
		namespace UI {
			namespace Games {
				class CLI : public Othello::UI::Game {
					private:
						Functions::CLI cli;
						std::vector<std::string> m_displayMatrix;
						Othello::Board::GameBoard& m_oboard;

						void display();
						void displayMatrix();
						void displayPlayers();
						void loadDisplayMatrix();
						void showPiece( Othello::Board::Pun::Colors color, unsigned int offsetX, unsigned int offsetY );
						void highlightSelectedPiece( unsigned char x, unsigned char y, unsigned char color );

					public:
						CLI( Othello::Board::GameBoard& oboard, const Othello::Board::GameBoard::punArray board, const std::vector<Othello::Players::Player*>& players, std::vector<Othello::Players::Player*>::iterator& currentPlayer );
						~CLI();
						void showError( std::string msg );
						Othello::Board::Move getMove();
						void playerTurnBegin( Othello::Players::Player& player );
						void playerTurnEnd( Othello::Players::Player& player );
						void victory( Othello::Players::Player& player );
				};
			}
		}
	}

#endif