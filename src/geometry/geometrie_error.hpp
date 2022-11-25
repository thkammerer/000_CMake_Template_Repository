#ifndef __GEOMETRIE_ERROR_H__
#define __GEOMETRIE_ERROR_H__

#include <stdexcept>

class GeometryError : public std::runtime_error {
  public:
    GeometryError( const std::string&  message ) 
      : std::runtime_error( message ) {}
};


#endif // __GEOMETRIE_ERROR_H__