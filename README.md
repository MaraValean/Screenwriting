# Screenwriting
Qt Model/View architecture application which simulates the writing of a television episode by professional screenwriters.

Information about screenwriters is in a text file. Each writer has a name(string), and expertise(Assistant, Junior or Senior). Another file contains info about the ideas proposed by the writers. Each idea has a description, status(proposed or accepted), creator(name of writer who created it) and the act(1,2 or 3).

When the application is launched, a new window is created for each writer, having as title the writer's name. The window will show all the ideas launched so far.

Any writer can add a new idea, by inputting the idea's description and act. The idea's creator will automatically be the name of the writer who added it and the status will be proposed. 

Senior writers can revise ideas and accept them. This will be possible only if the status of selected idea is proposed. When an idea is accepted, its status changes to accepted.

Each writer has the possibility to further develop his accepted ideas. A button "Develop" will be available only to the writers having accepted ideas.The writer can develop each accepted idea in its own text edit and then save it to a file.

Each writer has a button "Save plot", which will save to a file the entire plot of the episode: this will contain only the accepted ideas (description), their writers (in brackets) and will be created by acts (E.g. Act 1 - all ideas from act 1, on separate lines; Act 2 - the same; Act 3 - the same).
