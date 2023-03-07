#include "raylib.h"
#include <string>
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"


class GameInit {
    private:
        std::string title;
        int screenHeight;
        int screenWidth;
    public:
       static void InitGame(int screenHeight, int screenWidth, std::string title);
       std::string setTitle(std::string newTitle);
       int setScreenHeight(int newHeight);
       int setScreenWidth(int newWidth);

};

