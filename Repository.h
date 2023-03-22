#pragma once
#include <vector>
#include "Screenwriter.h"
#include "Ideea.h"

class Repository {
private:
	std::vector<Writer> writers;
	std::vector<Idea> ideas;
	void loadWriters();
	void loadIdeas();

public:
	Repository();
	void addIdeaRepo(Idea i);
	void updateIdeaRepo(Idea id);


	std::vector<Idea> getIdeas();
	std::vector<Writer> getWriters();

	std::vector<Idea> getAcceptedIdeas(Writer w);
};