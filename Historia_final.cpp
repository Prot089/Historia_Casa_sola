// Historia_final.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Incluyes la biblioteca
#include <iostream>
//Indicas que utilizaras el standard
using namespace std;

//El main para que inicie al correr el codigo
int main()
{
	//Declaras tus variables
	bool respuesta = true;
	bool respuesta_in;
	bool salir = true;

	// Un ciclo mientras "Salir" se mantenga
	while (salir == true) {
		//Cout para que te aviente codigo
		cout << "Tienes casa sola y mucha tarea jaja, que quieres hacer?" << endl;
		cout << "0 = Salir ce tu casa y evadir responsabilidades\n1 = Quedarse en casa como debe ser" << endl;
		//cin para recibir un dato de tipo booleano
		cin >> respuesta_in;

		//En el caso de que respuesta sea true, avienta el cout
		if (respuesta = respuesta_in) {
			cout << "Bien, elegiste el camino correcto pero notas que tu casa esta sucia\nQue haces?" << endl;
			cout << "0 = Procrastinar y arreglar tu casa\n1 = Hacer tarea" << endl;
			cin >> respuesta_in;
			//En el caso de que respuesta sea true, avienta el cout
			if (respuesta = respuesta_in) {
				cout << "Ok pa, por donde comenzamos?" << endl;
				cout << "0 = Programacion\n1 = Psicologia" << endl;
				cin >> respuesta_in;
				//En el caso de que respuesta sea true, avienta el cout
				if (respuesta = respuesta_in) {
					cout << "Es un comienzo, como haras investigacion del tema?" << endl;
					cout << "0 = Leer el pdf\n1 = Ver video" << endl;
					cin >> respuesta_in;
					//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
						cout << "Ups, se te fue el internet y no pudiste verlo :(" << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
						cout << "Bien hecho, sacaste mas referencias y el profe te califico mejor" << endl;
					}
				}
				//En caso contrario a que respuesta sea true, avienta el cout
				else {
					cout << "Como resolveras esta practica?" << endl;
					cout << "0 = Pedir tutorias\n1 = Copiar codigo de cualquier blog" << endl;
					cin >> respuesta_in;
					//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
						cout << "Chale, te anularon la practica por plagio pai" << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
						cout << "Excelente decision, aprender de otras personas es bueno, sacaste 100 en tu practica" << endl;
					}
				}
			}
			//En caso contrario a que respuesta sea true, avienta el cout
			else {
				cout << "Bueno, la tarea puede esperar, por donde deberias comenzar a limpiar" << endl;
				cout << "0 = Lavar platos\n1 = Trapear" << endl;
				cin >> respuesta_in;
				//En el caso de que respuesta sea true, avienta el cout
				if (respuesta = respuesta_in) {
					cout << "Por un lado, tu cuarto esta sucio y por otro, si limpias tu sala tus papas no te molestaran cuando lleguen\nQue deberias trapear primero?" << endl;
					cout << "0 = Sala\n1 = Cuartos" << endl;
					cin >> respuesta_in;
					//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
						cout << "Bingo! te encontraste 20 varos debajo de tu cama" << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
						cout << "Encontraste la pelota de tu perro, bien hecho!" << endl;
					}
				}
				//En caso contrario a que respuesta sea true, avienta el cout
				else {
					cout << "Con que agua deberias lavar los platos?" << endl;
					cout << "0 = Agua fria\n1 = Agua caliente" << endl;
					cin >> respuesta_in;
					//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
						cout << "La grasa de los platos desaparecio" << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
						cout << "Dude nooooooo, te congelaste las manos y no se lavaron bien los trastes :(" << endl;
					}
				}
			}
		}
		//En caso contrario a que respuesta sea true, avienta el cout
		else{
		cout << "Decidiste evadir responsabilidades xd, muy bien, quieres salir..." << endl;
		cout << "0 = Con amigos\n1 = Por tu cuenta" << endl;
		cin >> respuesta_in;
		//En el caso de que respuesta sea true, avienta el cout
			if (respuesta = respuesta_in) {
			cout << "A donde te gustaria ir" << endl;
			cout << "0 = Ir al parque\n1 = Ir al cine" << endl;
			cin >> respuesta_in;
			//En el caso de que respuesta sea true, avienta el cout
				if (respuesta = respuesta_in) {
				cout << "Cual pelicula quieres ver?" << endl;
				cout << "0 = Spiderman\n1 = La Haine" << endl;
				cin >> respuesta_in;
				//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
					cout << "10/10 Obra maestra y GOD, le sabes al cine." << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
					cout << "Jaja salieron 3 Holland" << endl;
					}
				}
				//En caso contrario a que respuesta sea true, avienta el cout
				else {
				cout << "Ves una chica que es hermosa para ti tomando fotos, que haces?" << endl;
				cout << "0 = Le hablas\n1 = Vas por un helado" << endl;
				cin >> respuesta_in;
				//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
						cout << "El helado estaba bueno, pero deberias intentar hablar con otras personas de vez en cuando uwu" << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
						cout << "Se agradaron mutuamente, tienen una cita para el proximo domingo" << endl;
					}
				}
			}
			//En caso contrario a que respuesta sea true, avienta el cout
			else {
				cout << "A donde te gustaria salir con ellos" << endl;
				cout << "0 = Fiesta\n1 = Caravana" << endl;
				cin >> respuesta_in;
				//En el caso de que respuesta sea true, avienta el cout
				if (respuesta = respuesta_in) {
					cout << "Que deberian jugar tus amigos contigo?" << endl;
					cout << "0 = Coup\n1 = Chinatown" << endl;
					cin >> respuesta_in;
					//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
						cout << "Pato te acusa de ser un tramposo porque ganaste xd" << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
						cout << "Genial, destruiste la confianza entre todos jaja bien hecho" << endl;
					}
				}
				//En caso contrario a que respuesta sea true, avienta el cout
				else {
					cout << "La fiesta esta cool, pero la verdadera pregunta es... vas a tomar?" << endl;
					cout << "0 = Si\n1 = No" << endl;
					cin >> respuesta_in;
					//En el caso de que respuesta sea true, avienta el cout
					if (respuesta = respuesta_in) {
						cout << "Eres el conductor designado, todos llegaron a salvo." << endl;
					}
					//En caso contrario a que respuesta sea true, avienta el cout
					else {
						cout << "Te fuiste al bote por crimenes contra la moral XDDDDD" << endl;
					}
				}
			}
        }
		//Al salir de los ciclos if y else, aventar el cout
		cout << "Deseas salir de la historia?\nEn caso de que no salgas, reiniciare la misma :D" << endl;
		cout << "1 = NO\n0 = Si" << endl;
		//Esta variable es para saber si quieres salir del juego.
		cin >> salir;
	}
}

