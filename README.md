# ⛏️ IdleMiner  
A simple terminal-based idle mining game written in C++.  
Mine ores, smelt bars, craft tools, gain XP, grow stronger — all while barely lifting a finger.  
Perfect starter project for learning enums, structs, game loops, and basic simulation logic.

---

## ✨ Features

- **Auto-Mining**  
  Mine Copper or Iron over time and watch resources build up.

- **Smelting**  
  Convert raw ore into Copper Bars (more upgrades coming soon).

- **Crafting**  
  Craft early-game items like a *Copper Pickaxe*.

- **Player Progression**  
  Gain XP while mining, track player level and stats.

- **Inventory System**  
  Stores crafted and smelted items.

- **Switchable Ore Types**  
  Swap between Copper and Iron at any time.

- **Clean Game Loop**  
  Uses an interactive menu system to navigate gameplay features.

---

## 🛠️ How It Works

### Core Game Structures
```cpp
struct Player {
    std::string name;
    int xp;
    int level;
};

struct Item {
    std::string name;
};

struct GameState {
    Player player;
    std::vector<Item> inventory;
    std::unordered_map<OreType, int> ore;
    OreType currentOre;
    bool running;
};
Main Systems
autoMiner() — mines ore every second, adds XP

smelter() — turns ore into bars

craftBench() — crafts items from ore

shop() — placeholder for future content

showStats() — displays player stats + inventory

mainMenu() — controls all navigation

🚀 Running the Game
Compile:
bash
Copy code
g++ -std=c++17 main.cpp -o IdleMiner
Run:
bash
Copy code
./IdleMiner
🎮 Example Gameplay
vbnet
Copy code
=== Idle Miner ===
[1] Auto Mine (Copper)
[2] Smelter
[3] Crafting
[4] Shop
[5] Switch Ore
[6] Stats
[0] Quit
Enter option: 1

How many seconds to auto-mine? 5
Copper: 5   XP: 25
Done mining.

=== Smelter ===
[1] Copper Bar (Cost: 3 copper ore)
[0] Back
Choice: 1
Smelted 1 Copper Bar!
📦 Current Items & Costs
Ores
Copper

Iron

Bars
Copper Bar (3 Copper)

Crafting
Copper Pickaxe (10 Copper)

🛣️ Roadmap / Future Plans
✨ Add Iron Bars, Iron Pickaxe, higher-tier tools

🏬 Implement a functional shop

📈 Add leveling system with perks

🗃️ Add saving/loading player progress

🎨 Add ASCII UI improvements

🛠️ Add more ores (Gold, Diamond, Mythril, etc.)

📜 License
This project uses the MIT License — feel free to fork it or expand your own idle mining universe.

---
    bool running;
};
