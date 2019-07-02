/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#pragma once

#include <zdtio/zdtio.hpp>

class [[zdtio::contract]] noop : public zdtio::contract {
public:
   using zdtio::contract::contract;

   [[zdtio::action]]
   void anyaction( zdtio::name                       from,
                   const zdtio::ignore<std::string>& type,
                   const zdtio::ignore<std::string>& data );
};
