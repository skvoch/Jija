#ifndef INPUTCOMPONENT_H
#define INPUTCOMPONENT_H


#include "../IComponent.h"
#include "../Utils/Keys.h"

#include <unordered_map>
#include <set>

class InputComponent : public IComponent
{
public:

    using Key = Utils::Keys::Type;
    using KeyMap = std::unordered_map<Key, bool>;
    using KeySetup = std::set<Key>;

    void registerKey(const Key key);

    const KeyMap& getKeyMap() const;
    const KeySetup& getKeySetup() const;

private:
    KeySetup m_keySetup;
    KeyMap m_keyMap;
};

#endif // INPUTCOMPONENT_H
