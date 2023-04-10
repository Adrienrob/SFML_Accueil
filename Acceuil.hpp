#ifndef ACCEUIL_HPP
#define ACCEUIL_HPP

#include <SFML/Graphics.hpp>
#include <string>
using namespace std;
using namespace sf;

class Acceuil{

	public:
		explicit Acceuil(int width, int height, string title, string s1, string s2, string s3);
		~Acceuil();
		void load_shapes();
		void load_game();
		
	private:
		RenderWindow window;
		Color color;
		Font font;
		Font font2;
		Text text;
		RectangleShape rect;
		Text text2;
		RectangleShape rectcapteur;
		RectangleShape border;
		RectangleShape rectarme;
		RectangleShape border2;
		Text textcap;
		Text textarme;
};

#endif
