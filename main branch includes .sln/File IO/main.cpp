#include <fstream>
#include <iostream>

struct highscore
{
	char name[4];
	uint32_t score;
};




int main()
{
	//write ascii files.
	{
		std::ofstream highscores("highscores.txt");
		if (!highscores)
		{
			std::cerr << "ERROR: Could not open file for writing." << std::endl;
			return 1;
		}

		highscores << "DAN " << 2014 << std::endl;
		highscores << "Tom " << 2314 << std::endl;
		highscores << "KAT " << 2214 << std::endl;
		highscores << "Jin " << 2114 << std::endl;

		if (highscores.bad())
		{
			std::cerr << "Error: An error occured while writing to the file " << std::endl;
			return 1;
		}

		highscores.close();

		// flie will colse whte it goes out  of scope
	}
	
	{
		std::ofstream highscores("highscores.txt", std::ios::app);
		if (!highscores)
		{
			std::cerr << "ERROR: Failed to open file." << std::endl;
			return 1;
		}
		highscores << "RUB " << 1666 << std::endl;
		if (highscores.bad())
		{
			std::cerr << "ERROR: failed to  write to the file." << std::endl;
			return 1;
		}

		highscores.close();
	}
	{
		std::ifstream highscores("highscores.txt");
		if (!highscores)
		{
			std::cerr << "Error: FAiled to open file" << std::endl;
			return 1;
		}


		char name[4];
		int score;
		while (highscores >> name >> score)
		{
			std::cout << name << " " << score << std::endl;
		}

		if (highscores.bad())
		{
			std::cerr << "Error: Reading the file " << std::endl;
			return 1;
		}

		highscores.close();
		//file will also be closed when it goes out of scope 
	}

	// writing binary files
	{
		std::ofstream highscores("highscores.bin", std::ios::binary);
		if (!highscores)
		{
			std::cerr << "ERROR: Failed to open file" << std::endl;
			return 1;
		}

		highscore scores[] = {
			{"DAN", 2014},
			{"Tom", 2314},
			{"KAT", 2214},
			{"Jin", 2114},
			{"RUB", 1666}
		};
		auto numScores = std::size(scores);

		highscores.write(reinterpret_cast<const char*>(&numScores), sizeof(numScores));
		highscores.write(reinterpret_cast<const char*>(scores), numScores * sizeof(highscore));

		if (highscores.bad())
		{
			std::cerr << "ERROR: failed to write to file." << std::endl;
			return 1;
		}
		highscores.close();
	}

	{
		std::ifstream highscores("highscores.bin", std::ios::binary);
		if (!highscores)
		{
			std::cerr << "ERROR: failed to open file" << std::endl;
			return 1;
		}

		size_t numEntries;
		highscores.read(reinterpret_cast<char*>(&numEntries), sizeof(numEntries));

		highscore* scores = new highscore[numEntries];

		highscores.read(reinterpret_cast<char*>(scores), numEntries * sizeof(highscore));

		if (highscores.bad())
		{
			std::cerr << "ERROR: failed to read from file." << std::endl;
			return 1;
		}

		for (int i = 0; i < numEntries; ++i)
		{
			std::cout << scores[i].name << " " << scores[i].score << std::endl;
		}
		delete[] scores;

		highscores.close();// return resources for system
	}























	
	return 0;
}