> Use this worksheet to plan the next phase of your project \*\*before you begin coding\*\*
> Be clear, specific, and intentional—this will guide your development this week.

\---

## 📌 Project Overview

**Project Name: Echoes of the Void**
→ 

**What does your program currently do? (1–3 sentences)**   
→ Players captain a spaceship and travel between locations while managing resources such as fuel, hull integrity, and credits. Random events occur during exploration and can impact the player's success. 

\---

## 🔍 Current Progress Check

**What is working right now?**   
→ The game starts successfully, displays a menu for the user, tracks resources, allows travel between planets, and displays random events that affect the ship's status. 

**What is NOT working or incomplete?**   
→ The trading system has not been added yet, player's cannot save or load progress yet

**What feels confusing or messy in your code?**   
→ Some of the game mechanics are beginning to overlap, making it essential to organize functions in their appropriate classes. 

\---

## 🚀 Feature Planning

List the features you plan to add or improve this week.

### Feature 1

**Name:**   
→ Trade and Refuel System 

**What does this feature do?**   
→ This will allow the player to spend credits to purchase additional fuel needed for exploration. 

**Why is this feature important?**   
→ Fuel cannot be replenished after travel so this feature is necessary to make long-term gameplay possible! 

\---

### Feature 2

**Name:**   
→ Win \& Lose Conditions 

**What does this feature do?**   
→   Ending the game if a player runs out of fuel or hull health, and provides a winning condition bason on exploration and credits.



**Why is this feature important?**   
→ Gives a clear objective and consequences for poor resource management. 

\---

### Feature 3 (optional)

**Name:**   
→ Improve Ship status warnings

**What does this feature do?**   
→  Displays creative warnings when fuel, hull health, or credits become dangerously low. 

**Why is this feature important?**   
→ Players need to understand what risks they are taking while playing the game. 

\---

## 🧩 System Design Updates

**Will you need to create any new classes? If so, which ones?**   
→ I do not currently plan to create additional classes. The existing Ship, Planet, Event, and Game classes provide the core structure needed for the next phase of development. If the trading system becomes more advanced, I may consider adding a dedicated Trade class later.

**Will you modify any existing classes? How?**   
→ Expansion! By adding trade mechanics, game-over checks, and victory conditions to my existing classes. 

**What data structures will you use (vectors, 2D vectors, etc.)?**   
→ I will continue using my vector<Planet> to store the available destinations in the game. 

\---

## 🔄 Program Flow

**Describe how a user interacts with your program:**

1. Program starts → Display Title and Menu Screen
2. User chooses → Travel, repair, trade, view status, or exit. 
3. Program responds → Updates resources, location, and events that are based on the user's selection. 
4. Loop/next step → Return to main menu until player wins, loses, or exits

\---

## 🎯 Usability Improvements

How will you make your program easier to use this week?

* Clearer prompts:   
→ Display player's current location and resource values more creatively at top of menu. 
* Better error handling:   
→ Prevent invalid menu selections and provide explanations when a wrong key is pressed or an action cannot be committed. 
* Improved menu/navigation:   
→ 

\---

## ⚠️ Potential Challenges

**What do you think will be the hardest part this week?**   
→  Balancing the recourses so that travel, repairs, trade, and fuel management create meaningful decisions for the user.

**What is your plan if you get stuck?**   
→ Break larger features into smaller functions, testing one at a time. 

\---

## 📈 Level Up Goal

**What skill are you focusing on improving this week?**   
→ Class Design 

**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→ I will sketch out which classes owns the data involved. This should keep me more organized. 

\---

## 🗓️ Task Breakdown (GitHub Issues Planning)

List the tasks you plan to create as GitHub Issues:

* \[ ] Complete and test Repair System 
* \[ ] Add Trading and Duel Purchase system
* \[ ] Create Win and Loss Conditions 
* \[ ] Add Resource warning messages. 

\---

## 🔥 Final Check

Before you start coding, ask yourself:

* \[ ] Do I know what I’m building this week? 
* \[ ] Do I know where to start? 
* \[ ] Did I break my work into small tasks? 

If yes → start coding 🚀   
If no → refine your plan first 

\---

## 😈 Final Thought

> Plan it now… or debug it later.

