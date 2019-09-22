#ifndef KEYS_H
#define KEYS_H

#include <string>

namespace Utils {
    namespace Keys {
        enum class Type  {Q, W, E, R, T, Y, U, I, O, P, A, S, D, F, G, H,
                          J, K, L, Z, X, C, V, B, N, M,
                          UP, DOWN, LEFT, RIGHT, SPACE, ESC};

        std::string type2string(const Type key);
    }
}


#endif // KEYS_H
