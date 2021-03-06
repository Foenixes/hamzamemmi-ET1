#ifndef perso_H_INCLUDED
#define perso_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

/**
* @struct the personnage 
* @brief struct for the personnage 
*/
typedef struct{
  SDL_Surface *image_perso;/*!< Surface. */
  SDL_Rect pos_perso;/*!< Rectangle*/
  SDL_Rect pos_perso_relative;/*!< Rectangle*/

  SDL_Rect animation_perso[60];
  int comp_tab_animation_perso;

  int direction; 
  int stable; 
  double vitesse_perso;
  int vitesse_max_perso;
  int jump; 

  int vie;
  int score;

  double acc;
  int acceleration;
}personnage;

void initialiser_animation_perso(SDL_Rect *clip);
void initialiser_perso(personnage *p);
void afficher_perso(personnage *p, SDL_Surface *screen);
void avancer_perso(personnage *p,Uint32 dt);
void reculer_perso(personnage *p,Uint32 dt);
void animation_perso_stable(personnage *p);
void animation_perso_mvt_droite(personnage *p);
void animation_perso_mvt_gauche(personnage *p);
void acceleration(personnage *p,Uint32 dt);
void jump_perso(personnage *p);

#endif
