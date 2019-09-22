#ifndef INPUTSYSTEM_H
#define INPUTSYSTEM_H

#include <gainput/gainput.h>

#include "../ISystem.h"

class InputSystem : public ISystem
{
public:
    InputSystem();

    void process() override;
private:
    gainput::InputManager m_manager;
    gainput::InputMap m_inputMap;
    gainput::DeviceId m_keyboardId;
};

#endif // INPUTSYSTEM_H
