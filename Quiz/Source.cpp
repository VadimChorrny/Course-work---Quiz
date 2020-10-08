#include<iostream>
#include<string>
#include"windows.h"

using namespace std;

string quest[100][10][6] = { { {"Ancient Greece. Myths","How did Hera thank Cancer, who helped the Lerneian Hydra in the duel with Hercules?","She gave him a river","Made him a constellation","Made him immortal","Made him a constellation"},{"Ancient Greece. Myths","This king ordered the daughters to kill their brides, for which they were doomed by the gods to carry water in a bottomless amphora without ceasing in the gloomy kingdom of Hades.","Oedipus","Danai","Egypt","Danai"},{"Ancient Greece. Myths","Who sympathized with the suffering of Prometheus, chained to the Caucasus Mountains?","Moiri","Oceanids","Eat","Oceanids"},{"Ancient Greece. Myths","Daughter of King Colchis Eeta, who helped Jason steal the golden fleece.","Hestia","Iris","Medea","Medea"},{"Ancient Greece. Myths","What did Odysseus call himself Cyclops Polyphemus?","No one","Nothing","Someone","No one"},{"Ancient Greece. Myths","6. What ordered Hercules to get the Amazon insignificant Eurystheus?","3 pieces of Melanippus","Horse of Antioch","Hippolyta's belt","Hippolyta's belt"},{"Ancient Greece. Myths","This impudent son of 3evs not only stole ragweed and nectar from the gods, but also decided to treat them to an unheard of dish - baked from his own son Pelops. For this he was punished with eternal torment from hunger, thirst and fear.","Antey","Sisyphus","Tantalum","Tantalum"},{"Ancient Greece. Myths","Rebellious and proud Theban queen, daughter of Tantalus, who offended the goddess Leto. She was punished by her children Apollo and Artemis - they killed all her children.","Given","Pasiphae","Niobe","Niobe"},{"Ancient Greece. Myths","The unsurpassed master weaver, who challenged Athena Pallas herself, despised the gods. Athena turned her into a spider.","Arachna","Ariadne","Medea","Arachna"},{"Ancient Greece. Myths","The son of Danai, who defeated Medusa the Gorgon and saved Andromeda, the daughter of King Cepheus and Cassiopeia, from imminent death.","Odysseus","Perseus","Phineas","Perseus"} } };

int win = 0, newVictorins = 0, choiseVictorins = 0, choiseVariants = 0, victorines = 0;

void output() {
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 5; j++) {
			cout << quest[choiseVictorins][i][j] << endl;
		}
		cout << "Enter number variants ";
		cin >> choiseVariants;
		system("cls");
		for (int j = 1; j < 5; j++) {
			if (quest[choiseVictorins][i][j] == quest[choiseVictorins][i][5]) {
				cout << quest[choiseVictorins][i][j] << endl;
			}
			else if (quest[choiseVictorins][i][j] == quest[choiseVictorins][i][1]) {
				cout << quest[choiseVictorins][i][j] << endl;
			}
			else {
				cout << quest[choiseVictorins][i][j] << endl;
			}
		}
		if (quest[choiseVictorins][i][choiseVariants++] == quest[choiseVictorins][i][5]) {
			win++;
		}

	}
	cout << "Correct answers:" << win << " out of 10" << endl;
}

void addNewVictirines() {
	victorines + 1;
	cout << "Enter name your victorines" << endl;
	getline(cin, quest[victorines][0][0]);
	getline(cin, quest[victorines][0][0]);
	for (int i = 0; i < 10; i++) {
		quest[victorines][i][0] = quest[victorines][0][0];;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Enter question";
		cin >> quest[victorines][i][1];
		for (int j = 2; j < 5; j++) {
			cout << "Enter variants ";
			cin >> quest[victorines][i][j];
			int  trueVar = 0;
			cout << "This varians true ";
			cin >> trueVar;
			system("cls");
			if (trueVar == 1) {
				quest[victorines][i][5] = quest[victorines][i][j];
			}
		}
	}
}

void PlannerMenu() {
	int action = 0;

	do
	{


		cout << "Add new question on Interview" << endl;
		cout << "Print all Interview" << endl;
		cout << "Interview on HTML/CSS/Preprocessing" << endl;
		cout << "Interview on JavaScript" << endl;
		cout << "Interview on React" << endl;


		cout << "Exit" << endl;
		cout << "\n";
		cout << "Select action: ";
		cin >> action;
		system("cls");

		switch (action)
		{
		case 1: {
			addNewVictirines();
		}break;
		case 2: {
			output();
			system("cls");
		}break;
		case 3: {
			cout << "Goodbye" << endl;
			system("cls");
		}break;

		}

	} while (action != 3);

}

int main() {

	PlannerMenu();
}