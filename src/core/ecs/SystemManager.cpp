#include "SystemManager.h"
#include "Systems/InputSystem.h"

SystemManager::SystemManager()
    : m_stop(false)
{
    m_thread = std::thread([this](){

        while (true) {
            if(m_stop) {
                break;
            }

            for(const auto & pair:m_memory) {
                const auto & typeID = pair.first;
                const auto & pointer = pair.second;


                (void)typeID;

                if(pointer != nullptr) {
                    pointer->process();
                }
            }
        }

    });
}

SystemManager::~SystemManager()
{

}

SystemManager *SystemManager::getInstance()
{
    auto instance = new SystemManager;
    return instance;
}

int SystemManager::waitForFinished()
{
    if(m_thread.joinable()) {
        m_thread.join();
    }

    return 0;
}

template<>
ISystem::Type SystemManager::getType<InputSystem>() const {
    return 0;
}
