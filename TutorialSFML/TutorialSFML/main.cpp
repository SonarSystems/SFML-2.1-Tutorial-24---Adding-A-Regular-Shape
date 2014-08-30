#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode( 600, 600 ), "SFML WORK!" );

	sf::CircleShape polygon(300, 8);

	while ( window.isOpen( ) )
	{
		sf::Event event;

		while ( window.pollEvent( event ) )
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear( );

		window.draw(polygon);

		window.display( );
	}
}