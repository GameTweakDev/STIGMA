#ifndef CHEAT_H
#define CHEAT_H

#include "Settings.h"
#include "IL2CPP/Functions.hpp"
#include "Utility.h"
#include "LabelHelper.hpp"
#include "GameHooks.hpp"

class Cheat
{
    private:

    public:
    // Initialize all hooks
    static void InitializeHooks()
    {
        static bool hooksInitialized = false;
        if (!hooksInitialized)
        {
            Utility::AppendToLogFile("[Log] InitializeHooks");
            //Init IL2CPP lib
            Functions::INIT_IL2CPP();

            //Create and hook an OnGUI Method (so we can run our code inside game thread)
            GameHooks::InitializeHooks();
            hooksInitialized = true;
        }
    }
};

#endif // CHEAT_H