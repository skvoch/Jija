#include "Keys.h"


std::string Utils::Keys::type2string(const Utils::Keys::Type key) {
    switch (key) {
    case Type::Q: return "Q";
    case Type::W: return "W";
    case Type::E: return "E";
    case Type::R: return "R";
    case Type::T: return "T";
    case Type::Y: return "Y";
    case Type::U: return "U";
    case Type::I: return "I";
    case Type::O: return "O";
    case Type::P: return "P";
    case Type::A: return "A";
    case Type::S: return "S";
    case Type::D: return "D";
    case Type::F: return "F";
    case Type::G: return "G";
    case Type::H: return "H";
    case Type::J: return "J";
    case Type::K: return "K";
    case Type::L: return "L";
    case Type::Z: return "Z";
    case Type::X: return "X";
    case Type::C: return "C";
    case Type::V: return "V";
    case Type::B: return "B";
    case Type::N: return "N";
    case Type::M: return "M";

    case Type::UP:    return "UP";
    case Type::DOWN:  return "DOWN";
    case Type::LEFT:  return "LEFT";
    case Type::RIGHT: return "RIGHT";
    case Type::SPACE: return "SPACE";
    case Type::ESC:   return "ESC";
    }
}

gainput::Key Utils::Keys::type2gainput(const Utils::Keys::Type key)
{
    switch (key) {
    case Type::Q: return gainput::KeyQ;
    case Type::W: return gainput::KeyW;
    case Type::E: return gainput::KeyE;
    case Type::R: return gainput::KeyR;
    case Type::T: return gainput::KeyT;
    case Type::Y: return gainput::KeyY;
    case Type::U: return gainput::KeyU;
    case Type::I: return gainput::KeyI;
    case Type::O: return gainput::KeyO;
    case Type::P: return gainput::KeyP;
    case Type::A: return gainput::KeyA;
    case Type::S: return gainput::KeyS;
    case Type::D: return gainput::KeyD;
    case Type::F: return gainput::KeyF;
    case Type::G: return gainput::KeyG;
    case Type::H: return gainput::KeyH;
    case Type::J: return gainput::KeyJ;
    case Type::K: return gainput::KeyK;
    case Type::L: return gainput::KeyL;
    case Type::Z: return gainput::KeyZ;
    case Type::X: return gainput::KeyX;
    case Type::C: return gainput::KeyC;
    case Type::V: return gainput::KeyV;
    case Type::B: return gainput::KeyB;
    case Type::N: return gainput::KeyN;
    case Type::M: return gainput::KeyM;

    case Type::UP:    return gainput::KeyUp;
    case Type::DOWN:  return gainput::KeyDown;
    case Type::LEFT:  return gainput::KeyLeft;
    case Type::RIGHT: return gainput::KeyRight;
    case Type::SPACE: return gainput::KeySpace;
    case Type::ESC:   return gainput::KeyEscape;
    }
}

gainput::UserButtonId Utils::Keys::type2buttonId(const Utils::Keys::Type key)
{
    return static_cast<gainput::UserButtonId>(key);
}
