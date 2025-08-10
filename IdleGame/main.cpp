#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <unordered_map>
#include <limits>

enum class OreType { copper, iron };
enum class BarType { copper_bar, iron_bar };

std::string getOreName(OreType t) {
    switch (t) {
        case OreType::copper: return "Copper";
        case OreType::iron:   return "Iron";
    }
    return "Unknown";
}

struct Item 
{ 
    std::string name; 
};

struct Player 
{ 
    std::string name = "Miner"; 
    int xp = 0; 
    int level = 1; 
};

struct GameState 
{
    Player player;
    std::vector<Item> inventory;
    std::unordered_map<OreType, int> ore; 
    OreType currentOre = OreType::copper;
    bool running = true;
};

void mainMenu(GameState& gs);
void autoMiner(GameState& gs);
void craftBench(GameState& gs);
void shop(GameState& gs);
void showStats(const GameState& gs);
void smelter(GameState& gs);

void mainMenu(GameState& gs) 
{
    std::cout << "\n=== Idle Miner ===\n";
    std::cout << "[1] Auto Mine (" << getOreName(gs.currentOre) << ")\n";
    std::cout << "[2] Smelter\n";
    std::cout << "[3] Crafting\n";
    std::cout << "[4] Shop\n";
    std::cout << "[5] Switch Ore\n";
    std::cout << "[6] Stats\n";
    std::cout << "[0] Quit\n";
    std::cout << "Enter option: ";

    int choice{};
    if (!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    switch (choice) 
    {
        case 1: autoMiner(gs); 
                break;
        case 2: smelter(gs); 
                break;
        case 3: craftBench(gs); 
                break;
        case 4: shop(gs); 
                break;
        case 5: 
        {
            std::cout << "Mine [1]Copper or [2]Iron? ";
            int o{}; std::cin >> o;
            gs.currentOre = (o == 2) ? OreType::iron : OreType::copper;
        } break;
        case 6: showStats(gs); break;
        case 0: gs.running = false; break;
        default: std::cout << "Unknown entry...\n"; break;
    }
}

void autoMiner(GameState& gs) 
{
    std::cout << "How many seconds to auto-mine? ";
    int seconds{}; 
    if (!(std::cin >> seconds) || seconds <= 0) {
        std::cout << "Canceled.\n"; 
        return;
    }

    const int orePerSec = 1;
    for (int s = 1; s <= seconds; ++s) {
        gs.ore[gs.currentOre] += orePerSec;
        gs.player.xp += 5; // How much xp per sec
        std::cout << "\r" << getOreName(gs.currentOre)
                  << ": " << gs.ore[gs.currentOre]
                  << "   XP: " << gs.player.xp << std::flush;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "\nDone mining.\n";
}

void smelter(GameState& gs)
{
    std::cout << "\n=== Smelter ===\n";
    std::cout << "[1] Copper Bar (Cost: 3 copper ore)\n";
    std::cout << "[0] Back\n";
    std::cout << "Choice: ";

    int c{}; std::cin >> c;
    if (c == 1)
    {
        if (gs.ore[OreType::copper] >= 3)
        {
            gs.ore[OreType::copper] -= 3;
            gs.inventory.push_back({"Copper Bar"});
            std::cout << "Smelted 1 Copper Bar";
        }
        else
        {
            std::cout << "Not enough Copper.\n";
        }
    }
}

void craftBench(GameState& gs) {
    std::cout << "\n=== Crafting ===\n";
    std::cout << "[1] Copper Pickaxe (cost: 10 Copper)\n";
    std::cout << "[0] Back\n";
    std::cout << "Choice: ";

    int c{}; std::cin >> c;
    if (c == 1) 
    {
        if (gs.ore[OreType::copper] >= 10) 
        {
            gs.ore[OreType::copper] -= 10;
            gs.inventory.push_back({"Copper Pickaxe"});
            std::cout << "Crafted Copper Pickaxe!\n";
        } 
        else 
        {
            std::cout << "Not enough Copper.\n";
        }
    }
}

void shop(GameState&) {
    std::cout << "Shop WIP!\n";
}

void showStats(const GameState& gs) {
    std::cout << "\n== Stats ==\n";
    std::cout << "Player: " << gs.player.name << "\n";
    std::cout << "Level: " << gs.player.level << "  XP: " << gs.player.xp << "\n";
    std::cout << "Ore: Copper = " << gs.ore.at(OreType::copper)
              << "  Iron = " << gs.ore.at(OreType::iron) << "\n";
    std::cout << "Inventory: ";
    if (gs.inventory.empty()) std::cout << "(empty)\n";
    else { for (auto& it : gs.inventory) std::cout << it.name << ", "; std::cout << "\n"; }
}

int main() {
    GameState gs;
    gs.ore[OreType::copper] = 0;
    gs.ore[OreType::iron]   = 0;

    while (gs.running) mainMenu(gs);
    std::cout << "Goodbye!\n";
    return 0;
}
