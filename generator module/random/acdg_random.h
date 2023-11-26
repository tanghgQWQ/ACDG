//
// Created by MT on 2023/11/26.
//

#ifndef ACDG_ACDG_RANDOM_H
#define ACDG_ACDG_RANDOM_H
#include <random>
#include<chrono>
namespace Rand{
    namespace basic_random{
        template<typename T>
        T rd(T l,T r){
            std::mt19937 R(std::chrono::system_clock::now().time_since_epoch().count());
            std::uniform_int_distribution<T>nd(l,r);
            return nd(R);
        }
    }
}
#endif //ACDG_ACDG_RANDOM_H
