#ifndef __XML_COMMENT_H__
#define __XML_COMMENT_H__

/**
@file Comment.hpp
@author Benjamin BOUVIER
*/

# include "Content.hpp"
# include <string>

namespace xml {
	/**
	* @brief Commentaire xml
	*
	* Cette classe décrit un commentaire tel qu'il est représenté en mémoire.
	* Cette représentation se fait par un texte qui contient directement le
	* contenu du commentaire.
	*/
	class Comment : public Content {
	private:
		// Contenu du commentaire
		std::string comment;

	public:
		/**
			Constructeur par défaut.
			@param _c Contenu du commentaire
		*/
		Comment(std::string _c) : comment(_c)
		{ 
		 /* empty */ 
		}
		
		/**
			Affichage du commentaire.
			@param stream Flux dans lequel on écrit.
			@param depth Profondeur dans l'arbre.
		*/
		virtual std::ostream& toString(std::ostream& stream, int depth);
	};
}
#endif
