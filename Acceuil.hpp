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
		RectangleShape cap1;
		RectangleShape cap2;
		RectangleShape cap3;
		RectangleShape cap4;
		Text textcap1;
		Text textcap2;
		Text textcap3;
		Text textcap4;
		Text prendre;
		Text prendre2;
		Text pret;
		Text pret2;
		RectangleShape rectcap1;
		RectangleShape bordertab1;
		RectangleShape rectcap2;
		RectangleShape bordertab2;
		RectangleShape rectcap3;
		RectangleShape bordertab3;
		RectangleShape rectcap4;
		RectangleShape bordertab4;
		Text titre1;
		Text sstitre1;
		Text sstitres1;
		Text titre2;
		Text sstitre2;
		Text sstitres2;
		Text titre3;
		Text sstitre3;
		Text sstitres3;
		Text titre4;
		Text sstitre4;
		Text sstitres4;
		CircleShape circ1;
		CircleShape circ2;
		Text erase;
		Text start;
		// VertexArray croix1;
		// VertexArray croix2;
};

#endif
