#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace sf;
using namespace std;
int main(){
	RenderWindow window(VideoMode(1600,1200), "AieRobot"); // Création de la fenêtre SFML
	Image image;
	Color color(0,0,255);
	Font font;
	Font font2;
	
	if (!font.loadFromFile("Torus Notched Semi Bold.ttf")){
        	// Si le chargement de la police échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger la police Torus Notched !" << std::endl;
        	return 1;
    	}
    	
    	if (!font2.loadFromFile("microsoft-jhenghei.ttf")){
        	// Si le chargement de la police échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger la police Microsoft Jhenghei !" << std::endl;
        	return 1;
    	}
    	
    	Text text("AieRobot",font,64); // Crée un texte d'introduction du jeu AieRobot
    	text.setFillColor(color); // Définit la couleur du texte comme bleue
    	text.setPosition(790.f, 50.f);
    	
    	// Crée un rectangle bleu de taille 200x100 pixels
    	RectangleShape rect(Vector2f(1000.f, 100.f));
	rect.setFillColor(sf::Color::Blue); // Remplit la couleur en bleu
    	rect.setPosition(410.f, 200.f); // Mettre la position à 410 pixels horizontal et 200 pixels vertical
    	rect.setOutlineThickness(10.f);
	rect.setOutlineColor(Color::Blue);
	
	
	Text text2("Choose your skills",font,64); // Crée le texte de présentation des caractéristiques du robot
    	text2.setFillColor(Color::Black); // Définit la couleur du texte comme noire
    	text2.setPosition(640.f, 200.f);
    
    	
    	RectangleShape rectcapteur(Vector2f(300.f, 500.f));
	rectcapteur.setFillColor(sf::Color::Black);
    	rectcapteur.setPosition(450.f, 400.f);
    	rectcapteur.setOutlineThickness(10.f);
	rectcapteur.setOutlineColor(Color::Black);
	
	// Crée un deuxième rectangle de taille légèrement supérieure, avec une bordure bleue de 10 pixels de large
	RectangleShape border(Vector2f(rectcapteur.getSize().x + 20.f, rectcapteur.getSize().y + 20.f));
    	border.setFillColor(Color::Transparent); // Couleur de remplissage transparente
   	border.setOutlineColor(Color::Blue); // Couleur de bordure bleue
    	border.setOutlineThickness(10.f); // Epaisseur de la bordure de 10 pixels
    	border.setPosition(rectcapteur.getPosition() - sf::Vector2f(10.f, 10.f)); // Définit la position de la bordure autour du rectangle
	
	RectangleShape rectarme(Vector2f(300.f, 500.f));
	rectarme.setFillColor(sf::Color::Black);
    	rectarme.setPosition(1050.f, 400.f);
    	rectarme.setOutlineThickness(10.f);
	rectarme.setOutlineColor(Color::Black);
	
	// Crée un deuxième rectangle de taille légèrement supérieure, avec une bordure bleue de 10 pixels de large
	RectangleShape border2(Vector2f(rectarme.getSize().x + 20.f, rectarme.getSize().y + 20.f));
    	border2.setFillColor(Color::Transparent); // Couleur de remplissage transparente
   	border2.setOutlineColor(Color::Blue); // Couleur de bordure bleue
    	border2.setOutlineThickness(10.f); // Epaisseur de la bordure de 10 pixels
    	border2.setPosition(rectarme.getPosition() - sf::Vector2f(10.f, 10.f)); // Définit la position de la bordure autour du rectangle
    	
    	Text textcap("Capteur",font2,50);
    	textcap.setFillColor(color);
    	textcap.setPosition(505.f, 400.f);
    	
    	Text textarme("Arme",font2,50);
    	textarme.setFillColor(color); 
    	textarme.setPosition(1135.f, 400.f);
    	
	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
			// Si on clique sur la touche close de la fenêtre
			if(event.type == Event::Closed){
				window.close();
			}
			
			// Si on appuye sur la touche espace
			else if(event.type == Event::KeyPressed && event.key.code == Keyboard::Space){
			
				// On remplit les rectangles en blanc
				rect.setFillColor(Color::White);
				rect.setOutlineColor(Color::White);
				
				rectcapteur.setFillColor(Color::White);
				rectcapteur.setOutlineColor(Color::White);
				
				rectarme.setFillColor(Color::White);
				rectarme.setOutlineColor(Color::White);
				
			}
		}
		window.clear();
		// On dessine les différents éléments
		window.draw(text);
		window.draw(rect);
		window.draw(text2);
		window.draw(rectcapteur);
		window.draw(rectarme);
		window.draw(border);
		window.draw(border2);
		window.draw(textcap);
		window.draw(textarme);
		// On affiche
		window.display();
	}
	
	return 0;
}

