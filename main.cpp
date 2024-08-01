#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "SFML Works!", sf::Style::Default);
    window.setFramerateLimit(120);

    sf::CircleShape shape(250.f);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }

        // Update
        shape.scale(0.99f, 0.99f);

        // Draw
        window.clear();

        // Draw everything
        window.draw(shape);

        window.display();
    }

    return 0;
}