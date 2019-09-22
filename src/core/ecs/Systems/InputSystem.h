#ifndef INPUTSYSTEM_H
#define INPUTSYSTEM_H

#include "../ISystem.h"

class InputSystem : public ISystem
{
public:
    InputSystem();

    void process() override;
};

#endif // INPUTSYSTEM_H
