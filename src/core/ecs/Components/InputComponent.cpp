#include "InputComponent.h"

void InputComponent::registerKey(const InputComponent::Key key)
{
    m_keySetup.insert(key);
}

const InputComponent::KeyMap &InputComponent::getKeyMap() const
{
    return m_keyMap;
}

const InputComponent::KeySetup &InputComponent::getKeySetup() const
{
    return m_keySetup;
}
