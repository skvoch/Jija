#include "InputSystem.h"
#include "../ComponentManager.h"
#include "../EntityManager.h"

#include <iostream>
#include <vector>

InputSystem::InputSystem()
    : m_inputMap(m_manager)
{
    m_keyboardId = m_manager.CreateDevice<gainput::InputDeviceKeyboard>();
}

void InputSystem::process()
{
    m_manager.Update();

    const auto enitites_ids = m_componentManager->getEntitesIDs<InputComponent>();
    std::vector<Utils::Keys::Type> usedKeys;

    for(const auto id: enitites_ids) {
        auto keys = m_entityManager->getEntity(id)->getComponent<InputComponent>()->getKeySetup();

        for(const auto & key:keys) {
            const auto g_type = Utils::Keys::type2gainput(key);
            usedKeys.push_back(key);

            m_inputMap.MapBool(Utils::Keys::type2buttonId(key), m_keyboardId, g_type);
        }

        m_manager.Update();
    }

    for(const auto& key:usedKeys) {
        auto down = m_inputMap.GetBoolWasDown(Utils::Keys::type2buttonId(key));
        if(down)
            std::cout << Utils::Keys::type2string(key) + " : " + std::to_string(down) << std::endl;
    }

    std::cout << "\n" << std::endl;
}
