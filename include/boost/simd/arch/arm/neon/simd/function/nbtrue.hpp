#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_NBTRUE_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_NBTRUE_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/function/is_nez.hpp>
#include <boost/simd/function/sum.hpp>

namespace boost { namespace simd { namespace ext
{
   namespace bd = boost::dispatch;
   namespace bs = boost::simd;

   BOOST_DISPATCH_OVERLOAD( nbtrue_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::integer_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE std::size_t operator()( const A0& a0) const BOOST_NOEXCEPT
      {
        return nbtrue(is_nez(a0));
      }
   };

   BOOST_DISPATCH_OVERLOAD( nbtrue_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bs::logical_<A0>, bs::neon_>
                          )
   {
      BOOST_FORCEINLINE std::size_t operator()( const A0& a0) const BOOST_NOEXCEPT
      {
        // Take the least significant bit of Allbits or Zero and sum it.
        using a_t = bs::as_arithmetic_t<A0>;
        a_t tmp{a0.storage()};
        return sum(tmp & 0x1);
      }
   };

} } }

#endif
