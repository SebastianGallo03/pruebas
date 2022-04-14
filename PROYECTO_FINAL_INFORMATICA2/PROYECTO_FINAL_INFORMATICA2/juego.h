//Proximamente
#ifndef JUEGO_H
#define JUEGO_H
#include <QObject>
#include <QGraphicsScene>
#include "jugador_1.h"
#include "fondo_niveles.h"
//hola
class juego: public QObject
{
    Q_OBJECT
    friend class MainWindow ;
public:

    juego();
     void escena_Menu();     //Funcion para configurar la escena del menu
     void set_level_one() ;  //Funcion para configurar la escena del primer nivel


    private:
    int tam_X = 800 , tam_Y = 500, pixelX = 64 , pixel_Y = 48 ; //Tamaños a usar dentro del juego
    int btx = 120 , bty = 30 ;  //Mas tamaños

    QGraphicsScene *menu, *level_one ;      //Escenas del menu y el nivel 1
    int val_btn_presionado, nivel_jugador = 2, puntos_jugador = 0 , select_plane ;  //Variables importantes para la configuracion del juego
    QString nombre_jugador ;        //Qstring que contendrá el nombre del jugador
    bool condicion_aceptar = true , encontrado = false , existente_name = true ;    //Variables utiles para el manejo del menu
    Jugador_1 *Main_player ;    //Puntero para el objeto jugador

      Fondo_niveles *backg_screen ;   //Puntero para los diferentes escenarios de los 3 niveles

  };

  #endif // JUEGO_H