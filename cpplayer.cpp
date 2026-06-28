#include <SFML/Audio.hpp>
#include <iostream>
#include <string>

#define ART \
" _______  _____   _____         _______ __   __ _______  ______\n"\
" |       |_____] |_____] |      |_____|   |_/   |______ |_____/\n"\
" |_____  |       |       |_____ |     |    |    |______ |    |_\n"\





int main()
{
std::string file;
bool is = false;
char q;

// g++ cpplayer.cpp -o g -lsfml-audio -lsfml-system

std::cout << ART << std::endl;
std::cout << "This is a music player written in C++." << std::endl;
std::cout << "Made by Efesint 2026" << std::endl;
std::cout << "Which song do you want to listen to? Write in" << std::endl;
std::cin >> file;

      sf::Music music;

     while (music.getStatus() == sf::Music::Playing)
	 {
             sf::sleep(sf::seconds(1));
	 }


      //load
      if (!music.openFromFile(file))
	{
           std::cerr << "Failed to load" << std::endl;
           return -1;
	}
  
     music.setLoop(true);
     music.setVolume(65);
     music.play();


while (music.getStatus() == sf::Music::Playing)
{
sf::Time position = music.getPlayingOffset();
float s = position.asSeconds();
int m = (int)s/60;
int secs = (int)s % 60;

std::cout << "\rPlaying: " << m << "m" << secs << "s" << std::flush;
sf::sleep(sf::milliseconds(500));

}

return 0;
}
