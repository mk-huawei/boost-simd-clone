#ifndef BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_ANY_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON_SIMD_FUNCTION_ANY_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/function/bitwise_cast.hpp>
#include <boost/simd/function/maximum.hpp>
#include <boost/simd/function/sum.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd =  boost::dispatch;
  namespace bs =  boost::simd;

  BOOST_DISPATCH_OVERLOAD ( any_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::signed_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE bool operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      using itype = bd::as_integer_t<A0, unsigned>;
      return any(bitwise_cast<itype>(a0));
    }
  };

  BOOST_DISPATCH_OVERLOAD ( any_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::unsigned_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE bool operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      return maximum(a0) != 0;
    }
  };

  BOOST_DISPATCH_OVERLOAD ( any_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bd::uint64_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE bool operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      // This is not generally correct for all inputs, but ok for logical values.
      return sum(a0) != 0;
    }
  };

  BOOST_DISPATCH_OVERLOAD ( any_
                          , (typename A0)
                          , bs::neon_
                          , bs::pack_<bs::logical_<A0>, bs::neon_>
                         )
  {
    BOOST_FORCEINLINE bool operator() ( const A0 & a0) const BOOST_NOEXCEPT
    {
      using a_t = bs::as_arithmetic_t<A0>;
      a_t tmp{a0.storage()};
      return any(tmp);
    }
  };

} } }

#endif
