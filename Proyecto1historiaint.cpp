// Proyecto1historiaint.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<string.h>
#include<locale.h>
using namespace std;

void titulo(string title)
{
    int i;
    int val;
    val = title.length();
    val = val + 20;
        for (int i = 0; i <= val; i++)
        {
            cout << "*";
        }
        cout << "\n\n";
        for (int i = 0; i <= val; i++)
        {
            cout << " ";
            if (i==5)
            {
                cout << title;
            }
            cout << " ";
        }
        cout << "\n\n";
        for (int i = 0; i <= val; i++)
        {
            cout << "*";
        }
        cout << "\n\n";
}
int main()
{
    system("COLOR e1");
    setlocale(LC_CTYPE, "spanish");
    int des = 0;
    string nom;
    string amigo;
    titulo("");
    cout << "1.- Comenzar\n2.-Salir\n";
    cin >> des;
    int pan = 0;
    int arma = 0;

        switch (des)
        {
        case 1:
            des = 0;
            cout << "Me desperté una mañana confundido.\nCon la memoria borrosa y solo pensaba... \n¿Cuál es mi nombre?\n";
            cin >> nom;
            cout << "Claro me llamo " << nom << " ¿Cómo pude olvidarlo?\nDentro de mi confusion, me empezó a dar hambre, por lo que caminé por lo que parece ser mi casa\nLlegué a la cocina, y en la mesa vi dos panes, si mal no recuerdo uno se llama concha y el otro dona.\n¿Qué deberia comer?\n";
            cout << "1.-La concha\n2.-La dona\n";
            cin >> des;
                switch (des)
                {
                case 1:
                    pan = 1;
                    des = 0;
                    cout << "Me decidí por comer la concha, esta tenia un mejor aspecto, es muy llamativa a la vista. El patrón que tiene arriba es muy interesante y muy rico, me la termino pacientemente y decido salir a la calle para intentar recordar quien soy, tal vez si veo algo fuera de casa me haga recordar algunas cosas.";
                    break;
                case 2:
                    pan = 2;
                    des = 0;
                    cout <<"La dona me llamó mucho la atencion, se veia muy apetecible, el ver un aro de pan por algún motivo me hacia sentir intrigado por lo que no lo pensé mas y le di un mordisco, era tan dulce que no pude evitar comer toda esa dona quedé tan satisfecho, que decidí salir un poco a caminar, quien sabe si ahi afuera podria encontar algo que me hiciera recordar quien soy.";
                    break;
                default:
                    break;
                }
                cout << "\n Al momento de salir a la calle, todo me parecia extraño, derrepente alguien se me acerca...\nHola "<<nom<<" ¿Cómo te ha ido?\n Yo muy confundido le pregunté\nDisculpa ¿Quién eres?\n//Introduce el nombre de la persona//\n";
                cin >> amigo;
                cout <<"¿Como que quien soy, soy yo, "<<amigo<<" nos conocemos desde siempre\nen ese momento algo en mi mente empezó a querer salir, pero no tenia nada claro.";
                if (pan==1)
                {
                    cout << "De un momento a otro, me empezó a dar un terrible dolor de cabeza, el cielo se empezó a nublar de pronto, y las piernas me temblaban, cuando me empiezo a recuperar,  veo que nada va bien a mi al rededor, una tormenta se desata y del suelo empiezan a salir unas terribles criaturas gelatinosas, por lo que " << amigo << " y yo nos alarmamos, sabiamos que esas cosas no se veian pacificas, y nosotros nos teniamos que defender.\n Busaqué a mis alrededores y encontré dos cosas con las que me podia defender, un tenedor y una espátula, pero sollo puedo ir por uno, ¿Qué uso para defenderme?\n";
                        cout << "1.-Tenedor\n2.-Espatula";
                        cin >> des;
                        switch (des)
                        {
                        case 1:
                            cout << "Decidí que el tenedor era más letal, con el podia puñalar a esas cosas y arrancarles un pedazo si así lo queria.\nLe dije a "<<amigo<<"que me ayudara a atacar a una de esas cosas, entonces corrimos hacia el cada uno por un lado y mientras estaba distraido le arranqué un pedazo con el tenedor, despues de esto nos echamos a correr.";
                            arma = 1;
                            break;
                        case 2:
                            cout << "La espatula esa una gran herramienta, con ella podia sespegar esas cosas del suelo y mandarlas a volar\npor el momento le dije a "<<amigo<<" que corrieramos para ponernos a salvo y analizar la situacion";
                            arma = 2;
                            break;
                        default:
                            break;
                        }
                        cout <<"Ya estabamos a salvo y la tormenta empeoró y empezamos a notar que cada vez salian más de esas criaturas del suelo, pero solo salian por el asfalto, las casas eran un lugar seguro\n";
                        cout << amigo << " y yo nos preguntamos qué hacer\n";
                            if (arma==1)
                            {
                                cout << "Podriamos usar mi tenedor para destrozar a todas esas cosas, lo que es muy arriesgado, pero algo tenemos que hacer.\n";
                                cout << "Me dispuce a atacaros pero eran muchos y no pude con todos y me comieron";
                            }
                            else
                            {
                                cout << "Con la espatula podemos intentar arrancar el asfalto y así evitar que esas cosas sigan creciendo, suena raro pero de alguna manera siento que eso podria funcionar, o al menos eso pensé.\n";
                                cout << "Lo intentamos pero fue inutil no teniamos manera de defenderos y a ambos nos comieron.\n";
                            }
                } 
                else
                {
                    cout << "De pronto, me empezó a dar un fuerte dolor de estomago y por si fuera poco, se empezó a sentir un calor infernal, la tierra se empezó a agrietar y unas criaturas extrañas con 4 brazos empezaron a decender del cielo, venian en unas naves circulares, el calor era tan insoportable que caimos tumbados al piso, una de las criaturas nos vio a mi y a " << amigo << " nos amenaazaron con lo que parecia un rifle y dijeron: Ya se la saben, se entrega uno o cabeza a los dos\n no entendiamos lo que nos querian decir, pero uno de ellos se lanzó y capturó a " << amigo << " Tengo que decidir, ¿Dejo que se lo lleven o ataco a la criatura?\n1.-Lo dejo\n2.-Ataco";
                    cin >> des;
                    switch (des)
                    {
                    case 1:
                        cout << "Debido al dolor de estomago y el miedo no pude pensar en nada más que huir, corrí lo más lejos posible y me escondí en un edificio abandonado donde me tranquilicé un poco aunque mi estomago aun me dolia.\n";
                        cout << "De alguna manera logré estar a salvo durante medio dia, ya estaba anochesiendo y lo peor sucedió, una nave aterrizó afuera del edificio en el que me escondí de ella salieron 3 criaturas 2 como las de antes y una que se veia mas poderosa empezaron a subir el edificio como si buscaran algo, y lo encontraron, me buscaban a mi.\n";
                        cout << "Entraron y el mas fuerte de ellos me dijo Hola " << nom << " ¿No te interesa Movistar? mira los beneficios que trae.\nMe asusté y no sabia que hacer\n1.-Negarme2.-Atacar porque si";
                            cin >> des;
                            if (des==1)
                            {
                                cout << "Le dije que no, y el me contestó: entonces muere";
                            }
                            else
                            {
                                cout << "Lo ataqué pero fue inutil, de un solo golpe me dejó noqueado.";
                            }

                        break;
                    case 2:
                        cout << "Fui directo a esa cosa con intenciones de matar, pero claro, yo solo tengo 2 brazos por lo que con uno de sus 4 brazos me soltó un puñetazo sin soltar a " << amigo << " al parecer hice molestar tanto a esa cosa que también me tomó y me llevó con el\n";
                        cout << "Nos subieron en la nave y nos amarraron a unas sillas, nos separaron y nos empezaron a examinar, una de las criaturas que estaba conmigo dijo: Este es apto, a lo que otro me preguntó, ¿Te interesa cambiarte a Movistar?\n";
                        cout << "1.-Si\n2.-No";
                            cin >> des;
                            switch (des)
                            {
                            case 1:
                                cout << "Las criaturas sacaron una sustancia verde y la colocaron en una aguja y procedieron a inyectarmela, sentí un dolor muy fuerte al principio era como una descarga eléctrica, pero a medida de que esa materia entraba por mis venas empecé a sentir relajacion y mas poder, quedé inconsiente durante unos minutos y cuando desperté, me sentia extrañamente bien, miré hacia abajo, y tenia 4 brazos, me habia cambiado a Movistar\n";
                                cout << "Me dijeron que mi misión era convencer a mas personas de cambiarse a nuestra compañia, me comentaron que yo era su ejemplar más poderoso hasta el momento, por lo que me dejarían intentar convencer a " << amigo << endl;
                                cout << "La nave se empezó a agitar y alguien gritó, ¡el cliente se ha escapado! Ahi supe que era " << amigo << "\n me dispuse a bajar de la nave y enfrentarlo cara a cara, intentaba huir pero contra mi no tenia esperanzas, le grité ¡¡" << amigo << "!! Cambiate a Movistar,no tienes opción\nPero " << amigo << " Se negaba, entonces tuve que tomar una descicion muy dificil\n1.-Atacar a " << amigo << "\n2.-Cambiarlo a la fuerza";
                                    cin >> des;
                                    if (des==1)
                                    {
                                        cout << "Era una descicion dolorosa, pero tenia que hacerlo, corrí hacia " << amigo << " y con uno de mis brazos le di un puñetazo diractamente en el estomago por lo que le atravecé y entre lagrimas me despedí, esto no debia acabar así, se supone que siempre tuvimos una amistad, no entendia por qué no quiso cambiarse a mi nueva compañia y así poder estar juntos, esto no era una victoria, era una derrota para mi.\n en ese momento cai al suelo desmayado";
                                    }
                                    else
                                    {
                                        cout << "Tomé una muestra de la sustancia para cambiar de compañia, me le lancé y se la inyecté, empezó a combulsionarse y salio de control, era demasiado poder como para resistirlo, su cuerpo se puso tan insestable que implosionó y creó un agujero negro que me arrastró hasta una inevitable muerte.\nTodo estaba perdido, se habia acabado todo.";
                                    }
                                break;
                            case 2:
                                cout << "Yo me negué y les dije que no, nunca me iba a cambiar de compañía a lo que procedieron a desamarrarme y me encerraron en una celda, pasaron las horas y llegó una criatura, pero esta era un poco diferente a las demás, se veia más poderozo, y esta me dijo: Hola " << nom << " ¿Estás seguro de que no te quieres cambiar a movistar?\n";
                                cout << "Me quedé asombrado no podia creerlo, era " << amigo << ". Le dije que no que no me queria convertir en el monstru que el se convirtió, lo que lo hizo molestar y de una patada me sacó a volar de la navechoqué contra el piso despues de una caida, tenia varios huesos rotos, se me acercó " << amigo << " y me dijo: vas a morir en unos momentos, si te cambias de compañia te puedes salvar, asi que dime ¿Te quieres cambiar a movistar?\n1.-Si\n2.-No";
                                cin >> des;
                                if (des==1)
                                {
                                    cout << "Me decidí por cambiarme porque queria sobrevivir, llegó otra criatura con una sustancia verde en una aguja, y me la inyectaron, fue muy doloroso, y mis heridas eran muy graves, no pude resistir y mi cuerpo llegó a su limite, sentia como cada una de mis celulas iba muriendo y empecé a perder la vista poco a poco hasta que ya no pude ver más.\nMe habia muerto.";
                                }
                                else
                                {
                                    cout << "Me negué una vez más a lo que " << amigo << " me miró fijamente sin decir nada, se lavantó se dio media vuelta y me dejó ahi en el suelo, pasaron unos minutos y mi cuerpo ya co respondia a nada, la vista se me em[ezó a nublar y dejé de estar consiente, no habia más para mi";
                                }
                                break;
                            default:
                                break;
                            }

                        break;
                    default:
                        break;
                    }
                    
                }
                cout << "desperté muy asustado, todo fue un sueño me cayó mal el pan al parecer estaban podridos, entonces me empezó a dar miedo el pan y nunca más lo comí";
         case 2:
             break;
        default:

            break;

        }
        
}

