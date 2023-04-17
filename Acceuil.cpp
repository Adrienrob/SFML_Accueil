#include "Acceuil.hpp"
#include <iostream>

Acceuil::Acceuil(int width, int height, string title, string s1, string s2, string s3){

	this->window.create(VideoMode(width,height), title);
	this->color.r = 0;
	this->color.g = 0;
	this->color.b = 255;
	if (!this->font.loadFromFile("Torus Notched Semi Bold.ttf")){
        	// Si le chargement de la police échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger la police Torus Notched !" << std::endl;
    	}
    	
    	if (!this->font2.loadFromFile("microsoft-jhenghei.ttf")){
        	// Si le chargement de la police échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger la police Microsoft Jhenghei !" << std::endl;
    	}
    	
    	if (!this->texture.loadFromFile("ultrasonbg.png")){
        	// Si le chargement de l'image échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger l'image Capteur Ultrason !" << std::endl;
    	}
    	
    	if (!this->texture2.loadFromFile("haptiquebg.png")){
        	// Si le chargement de l'image échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger l'image Capteur Haptique !" << std::endl;
    	}
    	
    	if (!this->texture3.loadFromFile("bazookabg.png")){
        	// Si le chargement de l'image échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger l'image Bazooka !" << std::endl;
    	}
    	
    	if (!this->texture4.loadFromFile("mitrailleusebg.png")){
        	// Si le chargement de l'image échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger l'image Mitrailleuse !" << std::endl;
    	}
    	
    	if (!this->texture5.loadFromFile("manettebg.png")){
        	// Si le chargement de l'image échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger les touches directionnelles !" << std::endl;
    	}
    	
    	if (!this->texture6.loadFromFile("manettebg.png")){
        	// Si le chargement de l'image échoue, affiche une erreur et quitte le programme
        	std::cerr << "Erreur : impossible de charger les touches directionnelles !" << std::endl;
    	}
    	
    	this->text.setString(title);
    	this->text.setFont(this->font);
    	this->text.setCharacterSize(64);
    	
    	this->text2.setString(s1);
    	this->text2.setFont(this->font);
    	this->text2.setCharacterSize(64);
    	
    	this->textcap.setString(s2);
    	this->textcap.setFont(this->font2);
    	this->textcap.setCharacterSize(50);
    	
    	this->textarme.setString(s3);
    	this->textarme.setFont(this->font2);
    	this->textarme.setCharacterSize(50);
    	
    	this->rect.setSize(Vector2f(1000.f, 100.f));
    	this->rectcapteur.setSize(Vector2f(300.f, 500.f));
    	this->rectarme.setSize(Vector2f(300.f, 500.f));
    	this->border.setSize(Vector2f(rectcapteur.getSize().x + 20.f, rectcapteur.getSize().y + 20.f));
    	this->border2.setSize(Vector2f(rectarme.getSize().x + 20.f, rectarme.getSize().y + 20.f));
}

Acceuil::~Acceuil(){}

void Acceuil::load_shapes(){
    	this->text.setFillColor(this->color); // Définit la couleur du texte comme bleue
    	this->text.setPosition(790.f, 50.f);
    
  
	this->rect.setFillColor(sf::Color::Blue); // Remplit la couleur en bleu
    	this->rect.setPosition(410.f, 200.f); // Mettre la position à 410 pixels horizontal et 200 pixels vertical
    	this->rect.setOutlineThickness(30.f);
	this->rect.setOutlineColor(Color::Blue);
	

    	this->text2.setFillColor(Color::Black); // Définit la couleur du texte comme noire
    	this->text2.setPosition(640.f, 200.f);
    
	this->rectcapteur.setFillColor(sf::Color::Black);
    	this->rectcapteur.setPosition(450.f, 400.f);
    	this->rectcapteur.setOutlineThickness(10.f);
	this->rectcapteur.setOutlineColor(Color::Black);
	
	
    	this->border.setFillColor(Color::Transparent); // Couleur de remplissage transparente
   	this->border.setOutlineColor(Color::Blue); // Couleur de bordure bleue
    	this->border.setOutlineThickness(10.f); // Epaisseur de la bordure de 10 pixels
    	this->border.setPosition(rectcapteur.getPosition() - sf::Vector2f(10.f, 10.f)); // Définit la position de la bordure autour du rectangle
	
	this->rectarme.setFillColor(sf::Color::Black);
    	this->rectarme.setPosition(1070.f, 400.f);
    	this->rectarme.setOutlineThickness(10.f);
	this->rectarme.setOutlineColor(Color::Black);
	
	
    	this->border2.setFillColor(Color::Transparent); // Couleur de remplissage transparente
   	this->border2.setOutlineColor(Color::Blue); // Couleur de bordure bleue
    	this->border2.setOutlineThickness(10.f); // Epaisseur de la bordure de 10 pixels
    	this->border2.setPosition(rectarme.getPosition() - sf::Vector2f(10.f, 10.f)); // Définit la position de la bordure autour du rectangle
    	
    	this->textcap.setFillColor(color);
    	this->textcap.setPosition(505.f, 400.f);
    	
    	this->textarme.setFillColor(color); 
    	this->textarme.setPosition(1155.f, 400.f);
    	
    	this->sprite.setTexture(this->texture);
    	this->sprite.setPosition(sf::Vector2f(510.f, 500.f)); 
	this->sprite.setScale(sf::Vector2f(0.3f, 0.3f));
	
	this->sprite2.setTexture(this->texture2);
    	this->sprite2.setPosition(sf::Vector2f(520.f, 700.f)); 
	this->sprite2.setScale(sf::Vector2f(0.4f, 0.4f));
	
	this->sprite3.setTexture(this->texture3);
    	this->sprite3.setPosition(sf::Vector2f(1100.f, 500.f)); 
	this->sprite3.setScale(sf::Vector2f(0.5f, 0.5f));
	
	this->sprite4.setTexture(this->texture4);
    	this->sprite4.setPosition(sf::Vector2f(1125.f, 700.f)); 
	this->sprite4.setScale(sf::Vector2f(0.4f, 0.4f));
	
	this->sprite5.setTexture(this->texture5);
    	this->sprite5.setPosition(sf::Vector2f(1220.f, 185.f)); 
	this->sprite5.setScale(sf::Vector2f(0.25f, 0.25f));
	
	this->sprite6.setTexture(this->texture6);
    	this->sprite6.setPosition(sf::Vector2f(475.f, 185.f)); 
	this->sprite6.setScale(sf::Vector2f(0.25f, 0.25f));
}

void Acceuil::load_game(){
	while(this->window.isOpen()){
		Event event;
		while(this->window.pollEvent(event)){
			// Si on clique sur la touche close de la fenêtre
			if(event.type == Event::Closed){
				window.close();
			}
			
			// Si on appuye sur la touche espace
			else if(event.type == Event::KeyPressed && event.key.code == Keyboard::Space){
			
				// On remplit les rectangles en blanc
				this->rect.setFillColor(Color::White);
				this->rect.setOutlineColor(Color::White);
				
				this->rectcapteur.setFillColor(Color::White);
				this->rectcapteur.setOutlineColor(Color::White);
				
				this->rectarme.setFillColor(Color::White);
				this->rectarme.setOutlineColor(Color::White);
				
			}
		}
		this->window.clear();
		// On dessine les différents éléments
		this->window.draw(this->text);
		this->window.draw(this->rect);
		this->window.draw(this->text2);
		this->window.draw(this->rectcapteur);
		this->window.draw(this->rectarme);
		this->window.draw(this->border);
		this->window.draw(this->border2);
		this->window.draw(this->textcap);
		this->window.draw(this->textarme);
		this->window.draw(this->sprite);
		this->window.draw(this->sprite2);
		this->window.draw(this->sprite3);
		this->window.draw(this->sprite4);
		this->window.draw(this->sprite5);
		this->window.draw(this->sprite6);
		// On affiche
		window.display();
	}
}


