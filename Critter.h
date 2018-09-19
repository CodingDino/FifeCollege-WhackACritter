#pragma once


// --------------------------------------
// Includes
// --------------------------------------
// Libraries
#include <SFML/Graphics.hpp>



class Critter
{
	// --------------------------------------
	// Behaviour
	// --------------------------------------

public:

	// Constructor
	Critter();

	// Render the Critter to the target
	void Draw(sf::RenderTarget& _target);

	// end Behaviour
	// --------------------------------------


	// --------------------------------------
	// Data
	// --------------------------------------

private:

	sf::Sprite m_sprite;
	sf::Texture m_texture;

	// end Data
	// --------------------------------------

}; // end Critter class