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
