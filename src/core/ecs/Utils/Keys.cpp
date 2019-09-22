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
