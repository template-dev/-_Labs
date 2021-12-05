#ifndef MENU_H
#define MENU_H

class Menu
{
protected:
	void Start();
	void Save();
	void Continue();
	void Exit();
	bool CheckSaveDatas();

public:
	void ShowMenu();
	~Menu();

private:
	int chooseItemMenu = 0;
	std::string pathSave = "Save/save.hamm";
};

#endif // MENU_H