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
    	
    	
    	this->textcap1.setString("Ultrason");
    	this->textcap1.setFont(this->font);
    	this->textcap1.setCharacterSize(32);
    	
    	
    	this->textcap2.setString("Haptique");
    	this->textcap2.setFont(this->font);
    	this->textcap2.setCharacterSize(32);
    	
    	
    	this->textcap3.setString("Bazooka");
    	this->textcap3.setFont(this->font);
    	this->textcap3.setCharacterSize(32);
    	
    	this->textcap4.setString("Mitrailleuse");
    	this->textcap4.setFont(this->font);
    	this->textcap4.setCharacterSize(32);
    	
    	this->prendre.setString("Prendre ?");
    	this->prendre.setFont(this->font);
    	this->prendre.setCharacterSize(40);
    	
    	this->prendre2.setString("Prendre ?");
    	this->prendre2.setFont(this->font);
    	this->prendre2.setCharacterSize(40);
    	
    	this->pret.setString("Pret ?");
    	this->pret.setFont(this->font);
    	this->pret.setCharacterSize(40);
    	
    	this->pret2.setString("Pret ?");
    	this->pret2.setFont(this->font);
    	this->pret2.setCharacterSize(40);
    	
    	/*
    	this->croix1.resize(4);
    	this->croix1.setPrimitiveType(sf::Lines);
    	
    	this->croix2.resize(4);
    	this->croix2.setPrimitiveType(sf::Lines);
	*/
	
	this->rectcap1.setSize(Vector2f(300.f, 200.f));
	this->bordertab1.setSize(Vector2f(rectcap1.getSize().x + 20.f, rectcap1.getSize().y + 20.f));
	
	this->rectcap2.setSize(Vector2f(300.f, 200.f));
	this->bordertab2.setSize(Vector2f(rectcap2.getSize().x + 20.f, rectcap2.getSize().y + 20.f));
	
	this->rectcap3.setSize(Vector2f(300.f, 200.f));
	this->bordertab3.setSize(Vector2f(rectcap3.getSize().x + 20.f, rectcap3.getSize().y + 20.f));
	
	this->rectcap4.setSize(Vector2f(300.f, 200.f));
	this->bordertab4.setSize(Vector2f(rectcap4.getSize().x + 20.f, rectcap4.getSize().y + 20.f));
	
	this->titre1.setString("Ultrason Avantages");
    	this->titre1.setFont(this->font2);
    	this->titre1.setCharacterSize(26);
    	
    	this->titre2.setString("Haptique Avantages");
    	this->titre2.setFont(this->font2);
    	this->titre2.setCharacterSize(26);
    	
    	this->titre3.setString("Bazooka Avantages");
    	this->titre3.setFont(this->font2);
    	this->titre3.setCharacterSize(26);
    	
    	this->titre4.setString("Mitrailleuse Avantages");
    	this->titre4.setFont(this->font2);
    	this->titre4.setCharacterSize(26);
    	
    	
    	this->sstitre1.setString("Elargit le champ de");
    	this->sstitre1.setFont(this->font);
    	this->sstitre1.setCharacterSize(26);
    	
    	this->sstitres1.setString("vision du joueur");
    	this->sstitres1.setFont(this->font);
    	this->sstitres1.setCharacterSize(26);
    	
    	this->sstitre2.setString("Permet au joueur");
    	this->sstitre2.setFont(this->font);
    	this->sstitre2.setCharacterSize(26);
    	
    	this->sstitres2.setString("d'aller plus vite");
    	this->sstitres2.setFont(this->font);
    	this->sstitres2.setCharacterSize(26);
    	
    	this->sstitre3.setString("Tire des munitions lourdes");
    	this->sstitre3.setFont(this->font);
    	this->sstitre3.setCharacterSize(26);
    	
    	this->sstitres3.setString("sur la direction choisie");
    	this->sstitres3.setFont(this->font);
    	this->sstitres3.setCharacterSize(26);
    	
    	this->sstitre4.setString("Tire des munitions legeres");
    	this->sstitre4.setFont(this->font);
    	this->sstitre4.setCharacterSize(26);
    	
    	this->sstitres4.setString("dans toutes les directions");
    	this->sstitres4.setFont(this->font);
    	this->sstitres4.setCharacterSize(26);
    	
    	/*
    	this->textcap1.setString("Ultrason");
    	this->textcap1.setFont(this->font2);
    	this->textcap1.setCharacterSize(32);
    	
    	this->textcap1.setString("Ultrason");
    	this->textcap1.setFont(this->font2);
    	this->textcap1.setCharacterSize(32);
	*/
	
	this->circ1.setRadius(100.f);
	this->circ1.setFillColor(sf::Color::Blue);
    	this->circ1.setOutlineThickness(10.f);
	this->circ1.setOutlineColor(sf::Color::Red);
    	this->circ1.setPosition(810.f, 420.f);
    	
    	this->erase.setString("Erase");
    	this->erase.setFont(this->font);
    	this->erase.setCharacterSize(45);
    	
    	this->circ2.setRadius(100.f);
	this->circ2.setFillColor(sf::Color::Blue);
    	this->circ2.setOutlineThickness(10.f);
	this->circ2.setOutlineColor(sf::Color::White);
    	this->circ2.setPosition(810.f, 680.f);
    	
    	this->start.setString("Start");
    	this->start.setFont(this->font);
    	this->start.setCharacterSize(45);
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
    	this->sprite2.setPosition(sf::Vector2f(500.f, 700.f)); 
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
	
	sf::FloatRect spriteBounds = this->sprite.getGlobalBounds();
	
	this->cap1.setSize(Vector2f(spriteBounds.width + 20.f, spriteBounds.height + 20.f));
	this->cap1.setFillColor(Color::Transparent); 
   	this->cap1.setOutlineColor(Color::Blue); 
    	this->cap1.setOutlineThickness(10.f); 
    	this->cap1.setPosition(this->sprite.getPosition() - sf::Vector2f(10.f, 10.f));
    	
    	
    	sf::FloatRect spriteBounds2 = this->sprite2.getGlobalBounds();
	
	this->cap2.setSize(Vector2f(spriteBounds2.width + 20.f, spriteBounds2.height + 20.f));
	this->cap2.setFillColor(Color::Transparent); 
   	this->cap2.setOutlineColor(Color::Blue); 
    	this->cap2.setOutlineThickness(10.f); 
    	this->cap2.setPosition(this->sprite2.getPosition() - sf::Vector2f(10.f, 10.f));
    	
    	
    	
    	sf::FloatRect spriteBounds3 = this->sprite3.getGlobalBounds();
	
	this->cap3.setSize(Vector2f(spriteBounds3.width + 20.f, spriteBounds3.height + 20.f));
	this->cap3.setFillColor(Color::Transparent); 
   	this->cap3.setOutlineColor(Color::Blue); 
    	this->cap3.setOutlineThickness(10.f); 
    	this->cap3.setPosition(this->sprite3.getPosition() - sf::Vector2f(10.f, 10.f));
    	
    	
    	
    	sf::FloatRect spriteBounds4 = this->sprite4.getGlobalBounds();
	
	this->cap4.setSize(Vector2f(spriteBounds4.width + 20.f, spriteBounds4.height + 20.f));
	this->cap4.setFillColor(Color::Transparent); 
   	this->cap4.setOutlineColor(Color::Blue); 
    	this->cap4.setOutlineThickness(10.f); 
    	this->cap4.setPosition(this->sprite4.getPosition() - sf::Vector2f(10.f, 10.f));
    	
    	
    	this->textcap1.setFillColor(color);
    	this->textcap1.setPosition(this->sprite.getPosition() + sf::Vector2f(25.f, 10.f));
    	
    	this->textcap2.setFillColor(color);
    	this->textcap2.setPosition(this->sprite2.getPosition() + sf::Vector2f(25.f, 30.f));
    	
    	this->textcap3.setFillColor(color);
    	this->textcap3.setPosition(this->sprite3.getPosition() + sf::Vector2f(50.f, 0.f));
    	
    	this->textcap4.setFillColor(color);
    	this->textcap4.setPosition(this->sprite4.getPosition() + sf::Vector2f(5.f, 20.f));
    	
    	this->prendre.setFillColor(color);
    	this->prendre.setPosition(this->sprite.getPosition() + sf::Vector2f(5.f, 40.f));
    	
    	this->pret.setFillColor(color);
    	this->pret.setPosition(this->sprite3.getPosition() + sf::Vector2f(60.f, 30.f));
    	
    	this->prendre2.setFillColor(color);
    	this->prendre2.setPosition(this->sprite2.getPosition() + sf::Vector2f(10.f, 60.f));
    	
    	this->pret2.setFillColor(color);
    	this->pret2.setPosition(this->sprite4.getPosition() + sf::Vector2f(40.f, 50.f));
    	
    	/*
	this->croix1[0].position = sf::Vector2f(100.f, 100.f);
	this->croix1[1].position = sf::Vector2f(300.f, 200.f);
	this->croix1[2].position = sf::Vector2f(100.f, 200.f);
	this->croix1[3].position = sf::Vector2f(300.f, 100.f);
	
	
	this->croix1[0].color = sf::Color::Red;
	this->croix1[1].color = sf::Color::Red;
	this->croix1[2].color = sf::Color::Red;
	this->croix1[3].color = sf::Color::Red;
	
	
	this->croix2[0].position = sf::Vector2f(100.f, 100.f);
	this->croix2[1].position = sf::Vector2f(300.f, 200.f);
	this->croix2[2].position = sf::Vector2f(100.f, 200.f);
	this->croix2[3].position = sf::Vector2f(300.f, 100.f);
	
	
	this->croix2[0].color = sf::Color::Red;
	this->croix2[1].color = sf::Color::Red;
	this->croix2[2].color = sf::Color::Red;
	this->croix2[3].color = sf::Color::Red;
    	*/
    	
    	this->rectcap1.setFillColor(sf::Color::Black);
    	this->rectcap1.setPosition(50.f, 420.f);
    	this->rectcap1.setOutlineThickness(10.f);
	this->rectcap1.setOutlineColor(Color::Black);
	
    	this->bordertab1.setFillColor(Color::Transparent); 
   	this->bordertab1.setOutlineColor(Color::Blue); 
    	this->bordertab1.setOutlineThickness(10.f); 
    	this->bordertab1.setPosition(rectcap1.getPosition() - sf::Vector2f(10.f, 10.f)); 
    	
    	
    	this->rectcap2.setFillColor(sf::Color::Black);
    	this->rectcap2.setPosition(50.f, 700.f);
    	this->rectcap2.setOutlineThickness(10.f);
	this->rectcap2.setOutlineColor(Color::Black);
	
    	this->bordertab2.setFillColor(Color::Transparent); 
   	this->bordertab2.setOutlineColor(Color::Blue); 
    	this->bordertab2.setOutlineThickness(10.f); 
    	this->bordertab2.setPosition(rectcap2.getPosition() - sf::Vector2f(10.f, 10.f)); 
    	
    	
    	this->rectcap3.setFillColor(sf::Color::Black);
    	this->rectcap3.setPosition(1500.f, 420.f);
    	this->rectcap3.setOutlineThickness(10.f);
	this->rectcap3.setOutlineColor(Color::Black);
	
    	this->bordertab3.setFillColor(Color::Transparent);
   	this->bordertab3.setOutlineColor(Color::Blue); 
    	this->bordertab3.setOutlineThickness(10.f); 
    	this->bordertab3.setPosition(rectcap3.getPosition() - sf::Vector2f(10.f, 10.f)); 
    	
    	
    	this->rectcap4.setFillColor(sf::Color::Black);
    	this->rectcap4.setPosition(1500.f, 700.f);
    	this->rectcap4.setOutlineThickness(10.f);
	this->rectcap4.setOutlineColor(Color::Black);
	
    	this->bordertab4.setFillColor(Color::Transparent); 
   	this->bordertab4.setOutlineColor(Color::Blue); 
    	this->bordertab4.setOutlineThickness(10.f); 
    	this->bordertab4.setPosition(rectcap4.getPosition() - sf::Vector2f(10.f, 10.f)); 
    	
    	this->titre1.setFillColor(Color::Blue);
    	this->titre1.setPosition(90.f, 420.f);
    	
    	this->titre2.setFillColor(Color::Blue);
    	this->titre2.setPosition(85.f, 700.f);
    	
    	this->titre3.setFillColor(Color::Blue);
    	this->titre3.setPosition(1535.f, 420.f);
    	
    	this->titre4.setFillColor(Color::Blue);
    	this->titre4.setPosition(1515.f, 700.f);
    	
    	
    	this->sstitre1.setFillColor(Color::Blue);
    	this->sstitre1.setPosition(90.f, 480.f);
    	
    	this->sstitres1.setFillColor(Color::Blue);
    	this->sstitres1.setPosition(90.f, 520.f);
    	
    	this->sstitre2.setFillColor(Color::Blue);
    	this->sstitre2.setPosition(85.f, 760.f);
    	
    	this->sstitres2.setFillColor(Color::Blue);
    	this->sstitres2.setPosition(85.f, 800.f);
    	
    	this->sstitre3.setFillColor(Color::Blue);
    	this->sstitre3.setPosition(1500.f, 480.f);
    	
    	this->sstitres3.setFillColor(Color::Blue);
    	this->sstitres3.setPosition(1500.f, 520.f);
    	
    	this->sstitre4.setFillColor(Color::Blue);
    	this->sstitre4.setPosition(1500.f, 760.f);
    	
    	this->sstitres4.setFillColor(Color::Blue);
    	this->sstitres4.setPosition(1500.f, 800.f);
    	
    	this->erase.setFillColor(Color::Red);
    	this->erase.setPosition(850.f, 490.f);
    	
    	this->start.setFillColor(Color::White);
    	this->start.setPosition(850.f, 750.f);
}

void Acceuil::load_game(){
	int choix_cap=0,choix_arme=0;
	while(this->window.isOpen()){
		Event event;
		while(this->window.pollEvent(event)){
			// Si on clique sur la touche close de la fenêtre
			if(event.type == Event::Closed){
				window.close();
			}
		}
		sf::Vector2i mousePos = sf::Mouse::getPosition(this->window);
		
		if(this->cap1.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->cap1.setFillColor(sf::Color::White);
		}
		
		else{
			this->cap1.setFillColor(sf::Color::Transparent);
		}
		
		if(this->cap2.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->cap2.setFillColor(sf::Color::White);
		}
		
		else{
			this->cap2.setFillColor(sf::Color::Transparent);
		}
		
		if(this->cap3.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->cap3.setFillColor(sf::Color::White);
		}
		
		else{
			this->cap3.setFillColor(sf::Color::Transparent);
		}
		
		if(this->cap4.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->cap4.setFillColor(sf::Color::White);
		}
		
		else{
			this->cap4.setFillColor(sf::Color::Transparent);
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
		this->window.draw(this->cap1);
		this->window.draw(this->cap2);
		this->window.draw(this->cap3);
		this->window.draw(this->cap4);
		this->window.draw(this->circ1);
		this->window.draw(this->erase);
		this->window.draw(this->circ2);
		this->window.draw(this->start);
		
		
		if(this->cap1.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->window.draw(this->textcap1);
			this->window.draw(this->prendre);
			this->window.draw(this->rectcap1);
			this->window.draw(this->bordertab1);
			this->window.draw(this->titre1);
			this->window.draw(this->sstitre1);
			this->window.draw(this->sstitres1);
			
			if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_cap==0)){
				this->cap1.setOutlineColor(Color::Green);
				choix_cap++;
				
				this->textcap1.setFillColor(Color::Green);
				this->prendre.setFillColor(Color::Green);
				
				this->titre1.setFillColor(Color::Green);
				this->bordertab1.setOutlineColor(Color::Green);
				this->sstitre1.setFillColor(Color::Green);
				this->sstitres1.setFillColor(Color::Green);
			}
		}
		
		if(this->cap2.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->window.draw(this->textcap2);
			this->window.draw(this->prendre2);
			this->window.draw(this->rectcap2);
			this->window.draw(this->bordertab2);
			this->window.draw(this->titre2);
			this->window.draw(this->sstitre2);
			this->window.draw(this->sstitres2);
			
			if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_cap==0)){
				this->cap2.setOutlineColor(Color::Green);
				choix_cap++;
				
				this->textcap2.setFillColor(Color::Green);
				this->prendre2.setFillColor(Color::Green);
				
				this->titre2.setFillColor(Color::Green);
				this->bordertab2.setOutlineColor(Color::Green);
				this->sstitre2.setFillColor(Color::Green);
				this->sstitres2.setFillColor(Color::Green);
			}
		}
		
		if(this->cap3.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->window.draw(this->textcap3);
			this->window.draw(this->pret);
			this->window.draw(this->rectcap3);
			this->window.draw(this->bordertab3);
			this->window.draw(this->titre3);
			this->window.draw(this->sstitre3);
			this->window.draw(this->sstitres3);
			
			if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_arme==0)){
				this->cap3.setOutlineColor(Color::Green);
				choix_arme++;
				
				this->textcap3.setFillColor(Color::Green);
				this->pret.setFillColor(Color::Green);
				
				this->titre3.setFillColor(Color::Green);
				this->bordertab3.setOutlineColor(Color::Green);
				this->sstitre3.setFillColor(Color::Green);
				this->sstitres3.setFillColor(Color::Green);
			}
		}
		
		if(this->cap4.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			this->window.draw(this->textcap4);
			this->window.draw(this->pret2);
			this->window.draw(this->rectcap4);
			this->window.draw(this->bordertab4);
			this->window.draw(this->titre4);
			this->window.draw(this->sstitre4);
			this->window.draw(this->sstitres4);
				
			if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_arme==0)){
				this->cap4.setOutlineColor(Color::Green);
				choix_arme++;
				
				this->textcap4.setFillColor(Color::Green);
				this->pret2.setFillColor(Color::Green);
				
				this->titre4.setFillColor(Color::Green);
				this->bordertab4.setOutlineColor(Color::Green);
				this->sstitre4.setFillColor(Color::Green);
				this->sstitres4.setFillColor(Color::Green);
			}
		}
		
		if(this->circ1.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
				
				this->cap1.setOutlineColor(Color::Blue);
				this->cap2.setOutlineColor(Color::Blue);
				this->cap3.setOutlineColor(Color::Blue);
				this->cap4.setOutlineColor(Color::Blue);
				
				this->textcap1.setFillColor(Color::Blue);
				this->prendre.setFillColor(Color::Blue);
				this->textcap2.setFillColor(Color::Blue);
				this->prendre2.setFillColor(Color::Blue);
				this->textcap3.setFillColor(Color::Blue);
				this->pret.setFillColor(Color::Blue);
				this->textcap4.setFillColor(Color::Blue);
				this->pret2.setFillColor(Color::Blue);
				
				this->titre1.setFillColor(Color::Blue);
				this->bordertab1.setOutlineColor(Color::Blue);
				this->titre2.setFillColor(Color::Blue);
				this->bordertab2.setOutlineColor(Color::Blue);
				this->titre3.setFillColor(Color::Blue);
				this->bordertab3.setOutlineColor(Color::Blue);
				this->titre4.setFillColor(Color::Blue);
				this->bordertab4.setOutlineColor(Color::Blue);
				
				this->sstitre1.setFillColor(Color::Blue);
				this->sstitres1.setFillColor(Color::Blue);
				this->sstitre2.setFillColor(Color::Blue);
				this->sstitres2.setFillColor(Color::Blue);
				this->sstitre3.setFillColor(Color::Blue);
				this->sstitres3.setFillColor(Color::Blue);
				this->sstitre4.setFillColor(Color::Blue);
				this->sstitres4.setFillColor(Color::Blue);
				
				choix_arme=0;
				choix_cap=0;
			}
		}
		
		if(this->circ2.getGlobalBounds().contains(sf::Vector2f(mousePos))){
			if((sf::Mouse::isButtonPressed(sf::Mouse::Left))&&(choix_arme==1)&&(choix_cap==1)){
				this->circ2.setOutlineColor(sf::Color::Green);
				this->start.setFillColor(Color::Green);
				choix_arme=2;
				choix_cap=2;
				// Lancement du jeu
			}
		}
		
		
		// On affiche
		window.display();
	}
}


/*
else if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_cap==1)){
				this->cap1.setOutlineColor(Color::Red);
				choix_cap=0;
			}
			
			else if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_cap==1)){
				this->cap2.setOutlineColor(Color::Red);
				choix_cap=0;
			}
			
			else if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_arme==1)){
				this->cap3.setOutlineColor(Color::Red);
				choix_arme=0;
			}
			
			else if(sf::Mouse::isButtonPressed(sf::Mouse::Left)&&(choix_arme==1)){
				this->cap4.setOutlineColor(Color::Red);
				choix_arme=0;
			}

*/
