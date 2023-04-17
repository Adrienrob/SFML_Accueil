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
		Texture texture;
		Texture texture2;
		Sprite sprite;
		Sprite sprite2;
		Texture texture3;
		Texture texture4;
		Sprite sprite3;
		Sprite sprite4;
		Texture texture5;
		Sprite sprite5;
		Texture texture6;
		Sprite sprite6;
};

#endif
