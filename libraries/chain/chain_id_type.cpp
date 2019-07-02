/**
 *  @file
 *  @copyright defined in zdt/LICENSE
 */

#include <zdtio/chain/chain_id_type.hpp>
#include <zdtio/chain/exceptions.hpp>

namespace zdtio { namespace chain {

   void chain_id_type::reflector_init()const {
      ZDT_ASSERT( *reinterpret_cast<const fc::sha256*>(this) != fc::sha256(), chain_id_type_exception, "chain_id_type cannot be zero" );
   }

} }  // namespace zdtio::chain

namespace fc {

   void to_variant(const zdtio::chain::chain_id_type& cid, fc::variant& v) {
      to_variant( static_cast<const fc::sha256&>(cid), v);
   }

   void from_variant(const fc::variant& v, zdtio::chain::chain_id_type& cid) {
      from_variant( v, static_cast<fc::sha256&>(cid) );
   }

} // fc
