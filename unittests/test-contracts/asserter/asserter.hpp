/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>

class [[zdtio::contract]] asserter : public zdtio::contract {
public:
   using zdtio::contract::contract;

   [[zdtio::action]]
   void procassert( int8_t condition, std::string message );

   [[zdtio::action]]
   void provereset();
};
