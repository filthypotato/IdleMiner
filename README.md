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

yaml
Copy code

---

Want a **chaotic/funny version** like “mine rock go brrr”?  
Or a **super-professional version** like you’re shipping this on Steam?  
Just say the word.






You said:
do i add all that to the readme? if so i need to be able to copy it all


ChatGPT said:
Yep — you add everything inside the code block to your README.md.
And here it is again fully copy-paste ready, no extra text, nothing outside the block:

markdown
Copy code
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

yaml
Copy code

---

If you need a **shorter**, **more professional**, **more funny**, or **more chaotic** README, I can make alternate versions too.






You said:


then whats this

ChatGPT said:
Ah — that’s just ChatGPT’s UI formatting, not part of your README.
Those "bash", "vbnet", code labels, copy buttons, and dark boxes are just how ChatGPT displays code blocks.

When you copy from inside the markdown code block I provided, ONLY the raw Markdown gets copied — none of that interface stuff goes into your README.

TL;DR:
✔️ The README is ONLY the text inside the triple backticks
❌ The dark UI boxes / language labels are NOT included

Here’s exactly what happened:
ChatGPT shows any code block like:

markdown
Copy code
```bash
./IdleMiner
```
And the UI renders it in a fancy box with:

"bash" label

a “Copy code” button

dark background

But your README will only contain:

bash
Copy code
./IdleMiner
Nothing else.

Want proof?
Here is a tiny example:

ChatGPT UI:

markdown
Copy code
```bash
g++ main.cpp -o IdleMiner
```
What actually goes into README.md:

bash
Copy code
g++ main.cpp -o IdleMiner
No header, no label box, no buttons.

So your README should be exactly the version I gave you — nothing more.
If you want, I can package all three READMEs you’ve made so far into a single ZIP-style block for easy copy/paste.







You said:


it doesnt say how to use it

ChatGPT said:
Got you — let’s add a clear "How to Use" section that explains EXACTLY how to play the game, what each menu option does, and the basic gameplay loop.

Below is an updated README.md, fully copy-paste ready, including the new How to Use section.

markdown
Copy code
# ⛏️ IdleMiner  
A simple terminal-based idle mining game written in C++.  
Mine ores, smelt bars, craft tools, gain XP, grow stronger — all while barely lifting a finger.  
Perfect starter project for learning enums, structs, game loops, and basic simulation logic.

---

## ✨ Features

- **Auto-Mining** – Mine Copper or Iron automatically over time.  
- **Smelting** – Convert raw ore into Copper Bars (more smelting options planned).  
- **Crafting** – Craft beginner tools like a Copper Pickaxe.  
- **Player Progression** – Gain XP automatically while mining.  
- **Inventory System** – Items you smelt/craft are added to your inventory.  
- **Switchable Ore Types** – Mine Copper or Iron whenever you want.  
- **Clear Game Loop** – Menu-driven navigation for all gameplay systems.

---

## 🚀 Installation & Running

### Compile:
```bash
g++ -std=c++17 main.cpp -o IdleMiner
Run:
bash
Copy code
./IdleMiner
🎮 How to Use (Gameplay Guide)
When you run the program, you'll see a menu like this:

mathematica
Copy code
=== Idle Miner ===
[1] Auto Mine (Copper)
[2] Smelter
[3] Crafting
[4] Shop
[5] Switch Ore
[6] Stats
[0] Quit
1️⃣ Auto Mine
Automatically mines the currently selected ore type.

You will be asked:

vbnet
Copy code
How many seconds to auto-mine?
The game will mine 1 ore per second and give you XP every second.

2️⃣ Smelter
Where you convert ore → bars.

Current recipes:

Copper Bar → costs 3 Copper Ore

If you have enough ore, it adds a Copper Bar to your inventory.

3️⃣ Crafting
Craft items from ore or bars.

Current recipes:

Copper Pickaxe → costs 10 Copper Ore

Crafted items get added to your inventory.

4️⃣ Shop
Currently WIP — placeholder menu for future upgrades, tools, boosts, etc.

5️⃣ Switch Ore
Choose whether you want to mine:

Copper

Iron

Switch anytime depending on your goals.

6️⃣ Stats
View your character and resources:

Shows:

Player name

XP & Level

Amount of Copper/Iron

Everything in your inventory

0️⃣ Quit
Exits the game.

🧱 Core Game Structures
cpp
Copy code
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
