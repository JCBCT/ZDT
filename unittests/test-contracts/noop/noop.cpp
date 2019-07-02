/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */
#include "noop.hpp"

using namespace zdtio;

void noop::anyaction( name                       from,
                      const ignore<std::string>& type,
                      const ignore<std::string>& data )
{
   require_auth( from );
}
