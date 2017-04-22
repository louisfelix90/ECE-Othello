#ifndef _ECE_OTHELLO_SAVE_SAVE_HPP_
	#define _ECE_OTHELLO_SAVE_SAVE_HPP_

	#include <iostream>
	#include <fstream>
	#include <string>
	#include "../players/human.hpp"
	#include "../board/gameboard.hpp"
	#include "../board/pun.hpp"

	/// \class Save Save.h
	class Save {

		public :

			/// \fn saveBoard
			void saveBoard( Othello::Board::GameBoard gameBoard_toSave, int slot );

			/// \fn savePlayer
			void savePlayer( Othello::Players::Human player_toSave, int slot );

			/// \fn loadPlayer
			std::string loadPlayer( int slot );

			/// \fn loadEmptyNeighbors
			uint64_t loadEmptyNeighbors( int slot );

			/// \fn loadPunCount
			unsigned char loadPunCount( int slot );

			/// \fn destructor
			~Save();
	};

#endif
