/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>

class [[zdtio::contract]] payloadless : public zdtio::contract {
public:
   using zdtio::contract::contract;

   [[zdtio::action]]
   void doit();
};
