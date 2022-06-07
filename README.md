# Not Yet: Dialogue Plugin System

- [Not Yet: Dialogue Plugin System](#not-yet-dialogue-plugin-system)
	- [Features](#features)
	- [Links](#links)
	- [Showcase games](#showcase-games)
	- [General Information](#general-information)
	- [Conventions](#conventions)
		- [Branches](#branches)
		- [Code Style](#code-style)
		- [Commit messages](#commit-messages)

Supported unreal versions: `4.26`, `4.27`, `5.0`

## Features

- 100% free, source code included
- Full Blueprint and C++ support
- Events and conditions
- Branching based on different node types and conditions
- Well structured runtime and editor modules
- Full editor support including:
    - Graph Editor
    - Search window
    - Dialogue Browser to get a good overview of all the dialogues
    - Customized blueprint nodes to handle certain events and conditions in Blueprint easily
    - Settings panel in Project Settings to modify the layout
    - Option to import from and export to plain text formats (e.g. json)
    - Real time display/edit functionality of the Dialogue runtime data.


## Links

* [🐛 CHANGELOG](Docs/CHANGELOG.md)
* [💵 Support](#support) for how to support this project.
* [📖 Wiki/Documentation](https://bit.ly/DlgWiki) - manual and tutorials
* [🛒 Marketplace **(BUY PLUGIN)**](https://bit.ly/DlgMarketplace)
* [🏢 Example project](http://bit.ly/NYDlgSystemExample)

## Showcase games

Games that use this Plugin:
* [WarriOrb](http://www.warriorb.com) - Souls-like platformer metroidvania. This is our own game :)
* [Backbone](https://store.steampowered.com/app/865610/Backbone/) - Roleplaying detective adventure
* [Revolution: Path of a Weaponsmith](https://store.steampowered.com/app/1295560/Revolution_Path_of_a_Weaponsmith/) - Third person stealth shooter
* [The Ascent](https://store.steampowered.com/app/979690/The_Ascent/) - Cyberpunk Action-shooter RPG

Want to have your game showcased here? Contact us!

## General Information

This plugin is primary developed and used for our own [game (WarriOrb)](http://www.warriorb.com).
We have put significant effort into it and decided to make it open source in order to help out other teams facing similar challenges.

Contribution, feedback and constructive criticism are appreciated and we would be really happy to hear about your game using our tool.

### Spread the word

Should it prove useful to you, the best way to say thanks is to mention us and our game to your own audience.

## Conventions

### Branches

The supported unreal versions have their own branches.
The outdated version branches are kept but not updated anymore.

### Code Style

The code style follows the one from the [UE Coding Standard](https://docs.unrealengine.com/latest/INT/Programming/Development/CodingStandard/)
with the additional changes located in the [`.editorconfig`](.editorconfig).

### Commit messages

Every commit message that has `[C]` means that after updating to that commit, a recompile is required.
Eg: `[C] Added awesome Dialogue feature`

Every commit message that has `[G]` means that after updating to that commit the solution files should be regenerated (and recompiled, *obvious*).

`Right click on project file` -> `Generate Visual Studio project files` (or from the command line regenerate the project).

Eg: `[G] New Dialogue Editor mode`
