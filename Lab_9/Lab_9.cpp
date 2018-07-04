// Lab_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Song.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<Song*> songs;

void DisplayOptions()
{
	cout << endl;
	cout << "add      Adds a list of songs to the library" << endl;
	cout << "list     Lists all the songs in the library" << endl;
	cout << "addp     Adds a new playlist" << endl;
	cout << "addsp    Adds a song to a playlist" << endl;
	cout << "listp    Lists all the playlists" << endl;
	cout << "play     Plays a playlist" << endl;
	cout << "delp     Deletes a playlist" << endl;
	cout << "delsp    Deletes a song from a playlist" << endl;
	cout << "delsl    Deletes a song from the library(and all playlists)" << endl;
	cout << "options  Prints this options menu" << endl;
	cout << "quit     Quits the program" << endl;
	cout << endl;
}

void AddSong()
{
	cout << "Read in Song names and first lines (type \"STOP\" when done):" << endl;

	Song* newSong;
	string name;
	string lyrics;

	do
	{
		cout << "Song Name: ";
		getline(cin, name);

		if (name != "STOP")
		{
			cout << "Song's first line: ";
			getline(cin, lyrics);

			newSong = new Song(name, lyrics);
		}

	} while (name != "STOP");

	cout << endl;
}

void HandleOption(string option)
{
	if (option == "add")
	{
		AddSong();
	}
	else if (option == "options")
	{
		DisplayOptions();
	}
	else
	{
		DisplayOptions();
	}
}

int main()
{
	cout << "Welcome to the Firstline Player!  Enter options to see menu options." << endl;
	cout << endl;

	string option;
	do
	{
		cout << "Enter your selection now: ";
		getline(cin, option);
		HandleOption(option);

	} while (option != "quit");

	cout << "Goodbye!" << endl; 
	return 0;
}

