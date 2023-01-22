#include <iostream>
#include <string>
using namespace std;

struct Player {
  string name;
  int health;
  int position;
};


struct Item {
  string name;
  string description;
  int health_bonus;
};

int main() {

  Player players[2];
  players[0] = {"Alice", 100, 0};
  players[1] = {"Bob", 75, 0};


  Item items[3];
  items[0] = {"Potion", "Restores 20 health", 20};
  items[1] = {"Apple", "Restores 10 health", 10};
  items[2] = {"Poison", "Loses 20 health", -20};


  while (true) {

    system("cls");
    cout << "Player 1: " << players[0].name << " - Health: " << players[0].health << endl;
    cout << "Player 2: " << players[1].name << " - Health: " << players[1].health << endl;
    cout << "Available items:" << std::endl;
    for (int i = 0; i < 3; i++) {
      cout << i + 1 << ". " << items[i].name << " - " << items[i].description << endl;
    }
    cout << "Choose an item to use: ";
    int choice;
    cin >> choice;
    players[0].health += items[choice - 1].health_bonus;
    if (players[0].health <= 0) {
      cout << "Game Over!" << endl;
      break;
    }
  }

  return 0;
}
