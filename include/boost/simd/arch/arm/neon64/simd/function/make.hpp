#ifndef BOOST_SIMD_ARCH_ARM_NEON64_SIMD_FUNCTION_MAKE_HPP_INCLUDED
#define BOOST_SIMD_ARCH_ARM_NEON64_SIMD_FUNCTION_MAKE_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;

//   BOOST_DISPATCH_OVERLOAD ( make_
//                           , (typename Target, typename... Values)
//                           , bs::neon64_
//                           , bd::target_<bs::pack_<bd::double_<Target>,bs::neon64_>>
//                           , bd::scalar_<bd::unspecified_<Values>>...
//                           )
//   {
//     using target_t  = typename Target::type;

//     static_assert ( sizeof...(Values) == 1
//                   , "boost::simd::make - Invalid number of parameters"
//                   );

//     BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
//     {
//       return double{static_cast<typename target_t::value_type>(vs)...};
//     }
//   };

  BOOST_DISPATCH_OVERLOAD ( make_
                          , (typename Target, typename... Values)
                          , bs::neon64_
                          , bd::target_<bs::pack_<bd::single_<Target>,bs::neon64_>>
                          , bd::scalar_<bd::unspecified_<Values>>...
                          )
  {
    using target_t  = typename Target::type;

    static_assert ( sizeof...(Values) == 2
                  , "boost::simd::make - Invalid number of parameters"
                  );

    BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
    {
      return float32x2_t{static_cast<typename target_t::value_type>(vs)...};
    }
  };

//   BOOST_DISPATCH_OVERLOAD ( make_
//                           , (typename Target, typename... Values)
//                           , bs::neon64_
//                           , bd::target_<bs::pack_<bd::int64_<Target>,bs::neon64_>>
//                           , bd::scalar_<bd::unspecified_<Values>>...
//                           )
//   {
//     using target_t  = typename Target::type;

//     static_assert ( sizeof...(Values) == 1
//                   , "boost::simd::make - Invalid number of parameters"
//                   );

//     BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
//     {
//       using value_t = typename target_t::value_type;
//       return int64_t{static_cast<value_t>(vs)...};
//     }
//   };

//   BOOST_DISPATCH_OVERLOAD ( make_
//                           , (typename Target, typename... Values)
//                           , bs::neon64_
//                           , bd::target_<bs::pack_<bd::uint64_<Target>,bs::neon64_>>
//                           , bd::scalar_<bd::unspecified_<Values>>...
//                           )
//   {
//     using target_t  = typename Target::type;

//     static_assert ( sizeof...(Values) == 1
//                   , "boost::simd::make - Invalid number of parameters"
//                   );

//     BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
//     {
//       using value_t = typename target_t::value_type;
//       return uint64_t{static_cast<value_t>(vs)...};
//     }
//   };

  BOOST_DISPATCH_OVERLOAD ( make_
                          , (typename Target, typename... Values)
                          , bs::neon64_
                          , bd::target_<bs::pack_<bd::int32_<Target>,bs::neon64_>>
                          , bd::scalar_<bd::unspecified_<Values>>...
                          )
  {
    using target_t  = typename Target::type;

    static_assert ( sizeof...(Values) == 2
                  , "boost::simd::make - Invalid number of parameters"
                  );

    BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
    {
      return int32x2_t{static_cast<typename target_t::value_type>(vs)...};
    }
  };

  BOOST_DISPATCH_OVERLOAD ( make_
                          , (typename Target, typename... Values)
                          , bs::neon64_
                          , bd::target_<bs::pack_<bd::uint32_<Target>,bs::neon64_>>
                          , bd::scalar_<bd::unspecified_<Values>>...
                          )
  {
    using target_t  = typename Target::type;

    static_assert ( sizeof...(Values) == 2
                  , "boost::simd::make - Invalid number of parameters"
                  );

    BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
    {
        return uint32x2_t{static_cast<typename target_t::value_type>(vs)...};
    }
  };

  BOOST_DISPATCH_OVERLOAD ( make_
                          , (typename Target, typename... Values)
                          , bs::neon64_
                          , bd::target_<bs::pack_<bd::int16_<Target>,bs::neon64_>>
                          , bd::scalar_<bd::unspecified_<Values>>...
                          )
  {
    using target_t  = typename Target::type;

    static_assert ( sizeof...(Values) == 4
                  , "boost::simd::make - Invalid number of parameters"
                  );

    BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
    {
      return int16x4_t{static_cast<typename target_t::value_type>(vs)...};
    }
  };

  BOOST_DISPATCH_OVERLOAD ( make_
                          , (typename Target, typename... Values)
                          , bs::neon64_
                          , bd::target_<bs::pack_<bd::uint16_<Target>,bs::neon64_>>
                          , bd::scalar_<bd::unspecified_<Values>>...
                          )
  {
    using target_t  = typename Target::type;

    static_assert ( sizeof...(Values) == 4
                  , "boost::simd::make - Invalid number of parameters"
                  );

    BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
    {
      return uint16x4_t{static_cast<typename target_t::value_type>(vs)...};
    }
  };

  BOOST_DISPATCH_OVERLOAD ( make_
                          , (typename Target, typename... Values)
                          , bs::neon64_
                          , bd::target_<bs::pack_<bd::int8_<Target>,bs::neon64_>>
                          , bd::scalar_<bd::unspecified_<Values>>...
                          )
  {
    using target_t  = typename Target::type;

    static_assert ( sizeof...(Values) == 8
                  , "boost::simd::make - Invalid number of parameters"
                  );

    BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
    {
      return int8x8_t{static_cast<typename target_t::value_type>(vs)...};
    }
  };

  BOOST_DISPATCH_OVERLOAD ( make_
                          , (typename Target, typename... Values)
                          , bs::neon64_
                          , bd::target_<bs::pack_<bd::uint8_<Target>,bs::neon64_>>
                          , bd::scalar_<bd::unspecified_<Values>>...
                          )
  {
    using target_t  = typename Target::type;

    static_assert ( sizeof...(Values) == 8
                  , "boost::simd::make - Invalid number of parameters"
                  );

    BOOST_FORCEINLINE target_t operator()(Target const&, Values const&... vs) const BOOST_NOEXCEPT
    {
      return uint8x8_t{static_cast<typename target_t::value_type>(vs)...};
    }
  };
} } }

#endif
