#ifndef SYSTEMMANAGER_H
#define SYSTEMMANAGER_H

#include "ISystem.h"

#include <unordered_map>
#include <memory>
#include <thread>
#include <atomic>
#include <mutex>

class SystemManager
{
public:
    SystemManager();
   ~SystemManager();


    template<typename T>
    ISystem::Type getType() const {
        throw std::logic_error("Partial specialization for SystemManager::getType<T> not exist");
    }

    // todo: add args
    template<typename T>
    bool addSystem() {
        const auto typeID = getType<T>();

        if(!m_memory.count(typeID)) {
            m_memory[typeID] = std::shared_ptr<T>();

            return true;
        } else {
            return false;
        }
    }

    template<typename T>
    std::shared_ptr<T> getSystem() {
        const auto typeID = getType<T>();

        if(m_memory.count(typeID)) {
            return static_cast<T>(m_memory[typeID]);
        } else {
            return nullptr;
        }
    }

private:
    std::mutex m_mutex;
    std::thread m_thread;
    std::atomic_bool m_stop;

    std::unordered_map<ISystem::Type, ISystem::Pointer> m_memory;
};

#endif // SYSTEMMANAGER_H
