#include "SystemManager.h"

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
                pointer->process();
            }
        }

    });
}

SystemManager::~SystemManager()
{

}

template<>
ISystem::Type SystemManager::getType<ISystem>() const {
    return 0;
}
