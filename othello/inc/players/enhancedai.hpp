#ifndef _ECE_OTHELLO_PLAYERS_ENHANCEDAI_HPP_
	#define _ECE_OTHELLO_PLAYERS_ENHANCEDAI_HPP_

	#include <iostream>
	#include <string>
	#include <vector>
	#include <exception>
	#include "uiplayer.hpp"
	#include "../algorithms/minimax.hpp"

	namespace Othello {
		namespace Players {
			class EnhancedAI : public UIPlayer {
				public:
					EnhancedAI( std::string name, Othello::Board::Pun::Colors color );

					Othello::Board::Move getMove();
			};
		}
	}

#endif