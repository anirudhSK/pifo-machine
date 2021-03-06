#ifndef CONVENIENCE_TYPEDEFS_H_
#define CONVENIENCE_TYPEDEFS_H_

/// Use Banzai's FieldContainer to represent a packet in the PIFO pipeline
typedef FieldContainer<int> PIFOPacket;

/// Set priority_t to a 32-bit uint for now
/// Better than creating a template for it.
typedef uint32_t priority_t;

#endif  // CONVENIENCE_TYPEDEFS_H_
