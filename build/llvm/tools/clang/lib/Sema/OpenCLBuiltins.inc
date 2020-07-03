/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* OpenCL Builtin handling                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/ADT/StringRef.h"
using namespace clang;

enum OpenCLTypeID {
  OCLT_double,
  OCLT_char,
  OCLT_uchar,
  OCLT_short,
  OCLT_ushort,
  OCLT_int,
  OCLT_float,
  OCLT_uint,
  OCLT_long,
  OCLT_half,
  OCLT_ulong,
  OCLT_bool,
  OCLT_event_t,
  OCLT_image1d_t,
  OCLT_image1d_array_t,
  OCLT_image1d_buffer_t,
  OCLT_image2d_t,
  OCLT_image2d_array_t,
  OCLT_image3d_t,
  OCLT_intptr_t,
  OCLT_ptrdiff_t,
  OCLT_sampler_t,
  OCLT_size_t,
  OCLT_uintptr_t,
  OCLT_void,
};


// Type used in a prototype of an OpenCL builtin function.
struct OpenCLType {
  // A type (e.g.: float, int, ...)
  OpenCLTypeID ID;
  // Size of vector (if applicable)
  unsigned VectorWidth;
  // Address space of the pointer (if applicable)
  LangAS AS;
  // Whether the type is a pointer
  bool isPointer;
};

// One overload of an OpenCL builtin function.
struct OpenCLBuiltinDecl {
  // Number of arguments for the signature
  unsigned NumArgs;
  // Index in the OpenCLSignature table to get the required types
  unsigned ArgTableIndex;
  // Extension to which it belongs (e.g. cl_khr_subgroups)
  const char *Extension;
  // Version in which it was introduced (e.g. CL20)
  unsigned Version;
};

static const OpenCLType OpenCLSignature[] = {
// 0
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 2
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 4
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 6
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 8
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 10
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 12
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 14
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 16
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 18
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 20
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 22
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 24
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 26
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 28
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 30
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 32
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 34
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 36
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 38
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 40
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 42
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 44
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 46
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 48
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 50
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 52
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 54
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 56
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 58
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 60
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 62
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 64
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 66
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 68
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 70
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 72
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 74
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 76
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 78
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 80
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 82
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 84
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 86
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 88
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 90
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 92
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 94
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 96
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 98
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 100
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 102
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 104
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 106
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 108
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 110
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 112
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 114
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 116
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 118
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 120
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 122
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 124
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 126
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 128
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 130
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 132
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 134
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 136
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 138
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 140
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 142
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 144
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 146
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 148
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 150
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 152
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 154
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 156
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 158
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 160
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 162
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 164
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 166
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 168
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 170
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 172
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 174
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 176
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 178
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 180
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 182
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 184
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 186
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 188
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 190
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 192
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 194
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 196
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 198
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 200
{ OCLT_char, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 202
{ OCLT_char, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 204
{ OCLT_char, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 206
{ OCLT_char, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 208
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 210
{ OCLT_char, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 212
{ OCLT_char, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 214
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 216
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 218
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 220
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 222
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 224
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 226
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 228
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 230
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 232
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 234
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 236
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 238
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 240
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 242
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 244
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 246
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 248
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 250
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 252
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 254
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 256
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 258
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 260
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 262
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 264
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 266
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 268
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 270
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 272
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 274
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 276
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 278
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 280
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 282
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 284
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 286
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 288
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 290
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 292
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 294
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 296
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 298
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 300
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 302
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 304
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 306
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 308
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 310
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 312
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 314
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 316
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 318
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 320
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 322
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 324
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 326
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 328
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 330
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 332
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 334
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 336
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 338
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 340
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 342
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 344
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 346
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 348
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 350
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 352
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 354
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 356
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 358
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 360
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 362
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 364
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 366
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 368
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 370
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 372
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 374
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 376
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 378
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 380
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 382
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 384
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 386
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 388
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 390
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 392
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 394
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 396
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 398
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 400
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 402
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 404
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 406
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 408
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 410
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 412
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 414
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 416
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 418
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 420
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 422
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 424
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 426
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 428
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 430
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 432
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 434
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 436
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 438
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 440
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 442
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 444
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 446
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 448
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 450
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 452
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 454
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 456
{ OCLT_short, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 458
{ OCLT_short, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 460
{ OCLT_short, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 462
{ OCLT_short, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 464
{ OCLT_short, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 466
{ OCLT_short, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 468
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 470
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 472
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 474
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 476
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 478
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 480
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 482
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 484
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 486
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 488
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 490
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 492
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 494
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 496
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 498
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 500
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 502
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 504
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 506
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 508
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 510
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 512
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 514
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 516
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 518
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 520
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 522
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 524
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 526
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 528
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 530
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 532
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 534
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 536
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 538
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 540
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 542
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 544
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 546
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 548
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 550
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 552
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 554
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 556
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 558
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 560
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 562
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 564
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 566
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 568
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 570
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 572
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 574
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 576
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 578
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 580
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 582
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 584
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 586
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 588
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 590
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 592
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 594
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 596
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 598
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 600
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 602
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 604
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 606
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 608
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 610
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 612
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 614
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 616
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 618
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 620
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 622
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 624
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 626
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 628
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 630
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 632
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 634
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 636
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 638
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 640
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 642
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 644
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 646
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 648
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 650
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 652
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 654
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 656
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 658
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 660
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 662
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 664
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 666
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 668
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 670
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 672
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 674
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 676
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 678
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 680
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 683
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 685
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 687
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 689
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 691
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 693
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 695
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 697
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 699
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 701
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 703
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 705
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 707
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 709
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 711
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 713
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 715
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 717
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 719
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 721
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 723
{ OCLT_int, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 725
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 727
{ OCLT_int, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 729
{ OCLT_int, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 731
{ OCLT_int, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 733
{ OCLT_int, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 735
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 737
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 739
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 741
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 743
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 745
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 747
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 749
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 751
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 753
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 755
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 757
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 759
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 761
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 763
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 765
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 767
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 769
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 771
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 773
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 775
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 777
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 779
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 781
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 783
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 785
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 787
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 789
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 791
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 793
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 795
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 797
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 799
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 801
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 803
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 805
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 807
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 809
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 811
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 813
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 815
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 817
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 819
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 821
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 823
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 825
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 827
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 829
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 831
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 833
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 835
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 837
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 839
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 841
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 843
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 845
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 847
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 849
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 851
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 853
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 855
{ OCLT_uint, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 857
{ OCLT_uint, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 859
{ OCLT_uint, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 861
{ OCLT_uint, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 863
{ OCLT_uint, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 865
{ OCLT_uint, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 867
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 869
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 871
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 873
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 875
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 877
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 879
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 881
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 883
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 885
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 887
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 889
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 891
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 894
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 896
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 898
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 900
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 902
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 904
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 906
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 908
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 910
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 912
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 914
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 916
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 918
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 920
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 922
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 924
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 926
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 928
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 930
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 932
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 934
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 936
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 938
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 940
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 942
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 944
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 946
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 948
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 950
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 952
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 954
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 956
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 958
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 960
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 962
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 964
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 966
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 968
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 970
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 972
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 974
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 976
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 978
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 980
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 982
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 984
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 986
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 988
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 990
{ OCLT_long, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 992
{ OCLT_long, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 994
{ OCLT_long, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 996
{ OCLT_long, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 998
{ OCLT_long, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 1000
{ OCLT_long, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 1002
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 1004
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 1006
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 1008
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 1010
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 1012
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 1014
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1016
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 1018
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 1020
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 1022
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 1024
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 1026
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 1028
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 1030
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 1032
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 1034
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 1036
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 1038
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 1040
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 1042
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 1044
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 1046
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 1048
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 1050
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 1052
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 1054
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 1056
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 1058
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 1060
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 1062
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 1064
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 1066
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 1068
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 1070
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 1072
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 1074
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_ushort, 0, clang::LangAS::Default, 0},
// 1076
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_ushort, 2, clang::LangAS::Default, 0},
// 1078
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_ushort, 3, clang::LangAS::Default, 0},
// 1080
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_ushort, 4, clang::LangAS::Default, 0},
// 1082
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_ushort, 8, clang::LangAS::Default, 0},
// 1084
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_ushort, 16, clang::LangAS::Default, 0},
// 1086
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_int, 0, clang::LangAS::Default, 0},
// 1088
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 1090
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_int, 3, clang::LangAS::Default, 0},
// 1092
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_int, 4, clang::LangAS::Default, 0},
// 1094
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_int, 8, clang::LangAS::Default, 0},
// 1096
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_int, 16, clang::LangAS::Default, 0},
// 1098
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 1100
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_uint, 2, clang::LangAS::Default, 0},
// 1102
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_uint, 3, clang::LangAS::Default, 0},
// 1104
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_uint, 4, clang::LangAS::Default, 0},
// 1106
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_uint, 8, clang::LangAS::Default, 0},
// 1108
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_uint, 16, clang::LangAS::Default, 0},
// 1110
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_long, 0, clang::LangAS::Default, 0},
// 1112
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_long, 2, clang::LangAS::Default, 0},
// 1114
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_long, 3, clang::LangAS::Default, 0},
// 1116
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_long, 4, clang::LangAS::Default, 0},
// 1118
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_long, 8, clang::LangAS::Default, 0},
// 1120
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_long, 16, clang::LangAS::Default, 0},
// 1122
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 1124
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 1126
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 1128
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 1130
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 1132
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 1134
{ OCLT_size_t, 0, clang::LangAS::Default, 0},
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 1136
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1138
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 1140
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 1142
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 1144
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 1146
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 1148
{ OCLT_half, 0, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
// 1150
{ OCLT_half, 2, clang::LangAS::Default, 0},
{ OCLT_half, 2, clang::LangAS::Default, 0},
// 1152
{ OCLT_half, 3, clang::LangAS::Default, 0},
{ OCLT_half, 3, clang::LangAS::Default, 0},
// 1154
{ OCLT_half, 4, clang::LangAS::Default, 0},
{ OCLT_half, 4, clang::LangAS::Default, 0},
// 1156
{ OCLT_half, 8, clang::LangAS::Default, 0},
{ OCLT_half, 8, clang::LangAS::Default, 0},
// 1158
{ OCLT_half, 16, clang::LangAS::Default, 0},
{ OCLT_half, 16, clang::LangAS::Default, 0},
// 1160
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 1163
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 1166
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 1169
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 1172
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1175
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
// 1178
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
// 1181
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
// 1184
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
// 1187
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
// 1190
{ OCLT_half, 0, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
// 1193
{ OCLT_half, 2, clang::LangAS::Default, 0},
{ OCLT_half, 2, clang::LangAS::Default, 0},
{ OCLT_half, 2, clang::LangAS::Default, 0},
// 1196
{ OCLT_half, 3, clang::LangAS::Default, 0},
{ OCLT_half, 3, clang::LangAS::Default, 0},
{ OCLT_half, 3, clang::LangAS::Default, 0},
// 1199
{ OCLT_half, 4, clang::LangAS::Default, 0},
{ OCLT_half, 4, clang::LangAS::Default, 0},
{ OCLT_half, 4, clang::LangAS::Default, 0},
// 1202
{ OCLT_half, 8, clang::LangAS::Default, 0},
{ OCLT_half, 8, clang::LangAS::Default, 0},
{ OCLT_half, 8, clang::LangAS::Default, 0},
// 1205
{ OCLT_half, 16, clang::LangAS::Default, 0},
{ OCLT_half, 16, clang::LangAS::Default, 0},
{ OCLT_half, 16, clang::LangAS::Default, 0},
// 1208
{ OCLT_float, 0, clang::LangAS::Default, 0},
{ OCLT_ulong, 0, clang::LangAS::Default, 0},
// 1210
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 1213
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 1216
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 1219
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 1222
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 1225
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1228
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1231
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1234
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1237
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_double, 0, clang::LangAS::Default, 0},
// 1240
{ OCLT_float, 2, clang::LangAS::Default, 0},
{ OCLT_ulong, 2, clang::LangAS::Default, 0},
// 1242
{ OCLT_half, 2, clang::LangAS::Default, 0},
{ OCLT_half, 2, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
// 1245
{ OCLT_half, 3, clang::LangAS::Default, 0},
{ OCLT_half, 3, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
// 1248
{ OCLT_half, 4, clang::LangAS::Default, 0},
{ OCLT_half, 4, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
// 1251
{ OCLT_half, 8, clang::LangAS::Default, 0},
{ OCLT_half, 8, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
// 1254
{ OCLT_half, 16, clang::LangAS::Default, 0},
{ OCLT_half, 16, clang::LangAS::Default, 0},
{ OCLT_half, 0, clang::LangAS::Default, 0},
// 1257
{ OCLT_float, 3, clang::LangAS::Default, 0},
{ OCLT_ulong, 3, clang::LangAS::Default, 0},
// 1259
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_ulong, 4, clang::LangAS::Default, 0},
// 1261
{ OCLT_float, 8, clang::LangAS::Default, 0},
{ OCLT_ulong, 8, clang::LangAS::Default, 0},
// 1263
{ OCLT_float, 16, clang::LangAS::Default, 0},
{ OCLT_ulong, 16, clang::LangAS::Default, 0},
// 1265
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_float, 0, clang::LangAS::Default, 0},
// 1267
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_float, 2, clang::LangAS::Default, 0},
// 1269
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_float, 3, clang::LangAS::Default, 0},
// 1271
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
// 1273
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_float, 8, clang::LangAS::Default, 0},
// 1275
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_float, 16, clang::LangAS::Default, 0},
// 1277
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_char, 0, clang::LangAS::Default, 0},
// 1279
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_char, 2, clang::LangAS::Default, 0},
// 1281
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_char, 3, clang::LangAS::Default, 0},
// 1283
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_char, 4, clang::LangAS::Default, 0},
// 1285
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_char, 8, clang::LangAS::Default, 0},
// 1287
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_char, 16, clang::LangAS::Default, 0},
// 1289
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_uchar, 0, clang::LangAS::Default, 0},
// 1291
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_uchar, 2, clang::LangAS::Default, 0},
// 1293
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_uchar, 3, clang::LangAS::Default, 0},
// 1295
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_uchar, 4, clang::LangAS::Default, 0},
// 1297
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_uchar, 8, clang::LangAS::Default, 0},
// 1299
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_uchar, 16, clang::LangAS::Default, 0},
// 1301
{ OCLT_double, 0, clang::LangAS::Default, 0},
{ OCLT_short, 0, clang::LangAS::Default, 0},
// 1303
{ OCLT_double, 2, clang::LangAS::Default, 0},
{ OCLT_short, 2, clang::LangAS::Default, 0},
// 1305
{ OCLT_double, 3, clang::LangAS::Default, 0},
{ OCLT_short, 3, clang::LangAS::Default, 0},
// 1307
{ OCLT_double, 4, clang::LangAS::Default, 0},
{ OCLT_short, 4, clang::LangAS::Default, 0},
// 1309
{ OCLT_double, 8, clang::LangAS::Default, 0},
{ OCLT_short, 8, clang::LangAS::Default, 0},
// 1311
{ OCLT_double, 16, clang::LangAS::Default, 0},
{ OCLT_short, 16, clang::LangAS::Default, 0},
// 1313
{ OCLT_uint, 0, clang::LangAS::Default, 0},
// 1314
{ OCLT_float, 4, clang::LangAS::Default, 0},
{ OCLT_image2d_t, 0, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
// 1317
{ OCLT_void, 0, clang::LangAS::Default, 0},
{ OCLT_image2d_t, 0, clang::LangAS::Default, 0},
{ OCLT_int, 2, clang::LangAS::Default, 0},
{ OCLT_float, 4, clang::LangAS::Default, 0},
};

static const OpenCLBuiltinDecl OpenCLBuiltins[] = {
// convert_float2_sat_rtp
  { 2, 0, "", 100 },
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
// convert_double8
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double_rte
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_rte
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_double3_rte
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_rte
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_rte
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_rte
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double_rtz
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_rtz
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_float3_sat_rtp
  { 2, 14, "", 100 },
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
// convert_double3_rtz
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_rtz
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_rtz
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_rtz
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double_rtp
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_rtp
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_double3_rtp
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_rtp
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_rtp
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_rtp
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_float4_sat_rtp
  { 2, 16, "", 100 },
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
// convert_double_rtn
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_rtn
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_double3_rtn
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_rtn
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_rtn
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_rtn
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double_sat
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_sat
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_double3_sat
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_sat
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_float8_sat_rtp
  { 2, 18, "", 100 },
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
// convert_double8_sat
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_sat
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double_sat_rte
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_sat_rte
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_double3_sat_rte
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_sat_rte
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_sat_rte
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_sat_rte
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double_sat_rtz
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_sat_rtz
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_float16_sat_rtp
  { 2, 20, "", 100 },
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
// convert_double3_sat_rtz
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_sat_rtz
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_sat_rtz
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_sat_rtz
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double_sat_rtp
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_sat_rtp
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_double3_sat_rtp
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_sat_rtp
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_sat_rtp
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_sat_rtp
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_float_sat_rtn
  { 2, 22, "", 100 },
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
// convert_double_sat_rtn
  { 2, 6, "", 100 },
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
// convert_double2_sat_rtn
  { 2, 8, "", 100 },
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
// convert_double3_sat_rtn
  { 2, 10, "", 100 },
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
// convert_double4_sat_rtn
  { 2, 12, "", 100 },
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
// convert_double8_sat_rtn
  { 2, 2, "", 100 },
  { 2, 32, "", 100 },
  { 2, 46, "", 100 },
  { 2, 64, "", 100 },
  { 2, 80, "", 100 },
  { 2, 1273, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1285, "", 100 },
  { 2, 1297, "", 100 },
  { 2, 1309, "", 100 },
// convert_double16_sat_rtn
  { 2, 4, "", 100 },
  { 2, 34, "", 100 },
  { 2, 48, "", 100 },
  { 2, 66, "", 100 },
  { 2, 82, "", 100 },
  { 2, 1275, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1287, "", 100 },
  { 2, 1299, "", 100 },
  { 2, 1311, "", 100 },
// convert_double
  { 2, 24, "", 100 },
  { 2, 38, "", 100 },
  { 2, 56, "", 100 },
  { 2, 72, "", 100 },
  { 2, 1265, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1277, "", 100 },
  { 2, 1289, "", 100 },
  { 2, 1301, "", 100 },
  { 2, 6, "", 100 },
// convert_double2
  { 2, 26, "", 100 },
  { 2, 40, "", 100 },
  { 2, 58, "", 100 },
  { 2, 74, "", 100 },
  { 2, 1267, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1279, "", 100 },
  { 2, 1291, "", 100 },
  { 2, 1303, "", 100 },
  { 2, 8, "", 100 },
// convert_double3
  { 2, 28, "", 100 },
  { 2, 42, "", 100 },
  { 2, 60, "", 100 },
  { 2, 76, "", 100 },
  { 2, 1269, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1281, "", 100 },
  { 2, 1293, "", 100 },
  { 2, 1305, "", 100 },
  { 2, 10, "", 100 },
// convert_double4
  { 2, 30, "", 100 },
  { 2, 44, "", 100 },
  { 2, 62, "", 100 },
  { 2, 78, "", 100 },
  { 2, 1271, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1283, "", 100 },
  { 2, 1295, "", 100 },
  { 2, 1307, "", 100 },
  { 2, 12, "", 100 },
// convert_float2_sat_rtn
  { 2, 0, "", 100 },
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
// convert_float3_sat_rtn
  { 2, 14, "", 100 },
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
// convert_float4_sat_rtn
  { 2, 16, "", 100 },
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
// convert_float8_sat_rtn
  { 2, 18, "", 100 },
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
// convert_float16_sat_rtn
  { 2, 20, "", 100 },
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
// convert_float
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 22, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
// convert_float2
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 0, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
// convert_float3
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 14, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
// convert_float4
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 16, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
// convert_float8
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 18, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
// convert_float16
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
// convert_float_rte
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 22, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
// convert_float2_rte
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 0, "", 100 },
  { 2, 1240, "", 100 },
// convert_float3_rte
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 14, "", 100 },
  { 2, 1257, "", 100 },
// convert_float4_rte
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 16, "", 100 },
  { 2, 1259, "", 100 },
// convert_float8_rte
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 18, "", 100 },
  { 2, 1261, "", 100 },
// convert_float16_rte
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1263, "", 100 },
// convert_float_rtz
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 22, "", 100 },
  { 2, 1208, "", 100 },
// convert_float2_rtz
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 0, "", 100 },
  { 2, 1240, "", 100 },
// convert_char
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_float3_rtz
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 14, "", 100 },
  { 2, 1257, "", 100 },
// convert_char8
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_char_rte
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_rte
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3_rte
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_rte
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_rte
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_rte
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_char_rtz
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_rtz
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_float4_rtz
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
  { 2, 16, "", 100 },
// convert_char3_rtz
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_rtz
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_rtz
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_rtz
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_char_rtp
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_rtp
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3_rtp
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_rtp
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_rtp
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_rtp
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_float8_rtz
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
  { 2, 18, "", 100 },
// convert_char_rtn
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_rtn
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3_rtn
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_rtn
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_rtn
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_rtn
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_char_sat
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_sat
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3_sat
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_sat
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_float16_rtz
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
  { 2, 20, "", 100 },
// convert_char8_sat
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_sat
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_char_sat_rte
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_sat_rte
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3_sat_rte
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_sat_rte
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_sat_rte
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_sat_rte
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_char_sat_rtz
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_sat_rtz
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_float_rtp
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
  { 2, 22, "", 100 },
// convert_char3_sat_rtz
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_sat_rtz
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_sat_rtz
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_sat_rtz
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_char_sat_rtp
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_sat_rtp
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3_sat_rtp
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_sat_rtp
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_sat_rtp
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_sat_rtp
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_float2_rtp
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
  { 2, 0, "", 100 },
// convert_char_sat_rtn
  { 2, 84, "", 100 },
  { 2, 96, "", 100 },
  { 2, 108, "", 100 },
  { 2, 120, "", 100 },
  { 2, 132, "", 100 },
  { 2, 144, "", 100 },
  { 2, 156, "", 100 },
  { 2, 168, "", 100 },
  { 2, 182, "", 100 },
  { 2, 200, "", 100 },
// convert_char2_sat_rtn
  { 2, 86, "", 100 },
  { 2, 98, "", 100 },
  { 2, 110, "", 100 },
  { 2, 122, "", 100 },
  { 2, 134, "", 100 },
  { 2, 146, "", 100 },
  { 2, 158, "", 100 },
  { 2, 170, "", 100 },
  { 2, 184, "", 100 },
  { 2, 202, "", 100 },
// convert_char3_sat_rtn
  { 2, 88, "", 100 },
  { 2, 100, "", 100 },
  { 2, 112, "", 100 },
  { 2, 124, "", 100 },
  { 2, 136, "", 100 },
  { 2, 148, "", 100 },
  { 2, 160, "", 100 },
  { 2, 172, "", 100 },
  { 2, 186, "", 100 },
  { 2, 204, "", 100 },
// convert_char4_sat_rtn
  { 2, 90, "", 100 },
  { 2, 102, "", 100 },
  { 2, 114, "", 100 },
  { 2, 126, "", 100 },
  { 2, 138, "", 100 },
  { 2, 150, "", 100 },
  { 2, 162, "", 100 },
  { 2, 174, "", 100 },
  { 2, 188, "", 100 },
  { 2, 206, "", 100 },
// convert_char8_sat_rtn
  { 2, 92, "", 100 },
  { 2, 104, "", 100 },
  { 2, 116, "", 100 },
  { 2, 128, "", 100 },
  { 2, 140, "", 100 },
  { 2, 152, "", 100 },
  { 2, 164, "", 100 },
  { 2, 176, "", 100 },
  { 2, 192, "", 100 },
  { 2, 210, "", 100 },
// convert_char16_sat_rtn
  { 2, 94, "", 100 },
  { 2, 106, "", 100 },
  { 2, 118, "", 100 },
  { 2, 130, "", 100 },
  { 2, 142, "", 100 },
  { 2, 154, "", 100 },
  { 2, 166, "", 100 },
  { 2, 178, "", 100 },
  { 2, 194, "", 100 },
  { 2, 212, "", 100 },
// convert_float3_rtp
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
  { 2, 14, "", 100 },
// convert_float4_rtp
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
  { 2, 16, "", 100 },
// convert_float8_rtp
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
  { 2, 18, "", 100 },
// convert_float16_rtp
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
  { 2, 20, "", 100 },
// convert_float_rtn
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
  { 2, 22, "", 100 },
// convert_float2_rtn
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
  { 2, 0, "", 100 },
// convert_float3_rtn
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
  { 2, 14, "", 100 },
// convert_float4_rtn
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
  { 2, 16, "", 100 },
// convert_float8_rtn
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
  { 2, 18, "", 100 },
// convert_float16_rtn
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
  { 2, 20, "", 100 },
// convert_float_sat
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
  { 2, 22, "", 100 },
// convert_float2_sat
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
  { 2, 0, "", 100 },
// convert_float3_sat
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
  { 2, 14, "", 100 },
// convert_float4_sat
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
  { 2, 16, "", 100 },
// convert_float8_sat
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
  { 2, 18, "", 100 },
// convert_float16_sat
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
  { 2, 20, "", 100 },
// convert_float_sat_rte
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
  { 2, 22, "", 100 },
// convert_float2_sat_rte
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
  { 2, 0, "", 100 },
// convert_float3_sat_rte
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
  { 2, 14, "", 100 },
// convert_float4_sat_rte
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
  { 2, 16, "", 100 },
// convert_float8_sat_rte
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
  { 2, 18, "", 100 },
// convert_float16_sat_rte
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
  { 2, 20, "", 100 },
// convert_float_sat_rtz
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
  { 2, 22, "", 100 },
// convert_float2_sat_rtz
  { 2, 50, "", 100 },
  { 2, 190, "", 100 },
  { 2, 326, "", 100 },
  { 2, 470, "", 100 },
  { 2, 614, "", 100 },
  { 2, 761, "", 100 },
  { 2, 908, "", 100 },
  { 2, 1048, "", 100 },
  { 2, 1240, "", 100 },
  { 2, 0, "", 100 },
// convert_float3_sat_rtz
  { 2, 52, "", 100 },
  { 2, 196, "", 100 },
  { 2, 340, "", 100 },
  { 2, 480, "", 100 },
  { 2, 616, "", 100 },
  { 2, 763, "", 100 },
  { 2, 910, "", 100 },
  { 2, 1054, "", 100 },
  { 2, 1257, "", 100 },
  { 2, 14, "", 100 },
// convert_float4_sat_rtz
  { 2, 54, "", 100 },
  { 2, 198, "", 100 },
  { 2, 342, "", 100 },
  { 2, 486, "", 100 },
  { 2, 630, "", 100 },
  { 2, 773, "", 100 },
  { 2, 912, "", 100 },
  { 2, 1056, "", 100 },
  { 2, 1259, "", 100 },
  { 2, 16, "", 100 },
// convert_float8_sat_rtz
  { 2, 68, "", 100 },
  { 2, 208, "", 100 },
  { 2, 344, "", 100 },
  { 2, 488, "", 100 },
  { 2, 632, "", 100 },
  { 2, 779, "", 100 },
  { 2, 926, "", 100 },
  { 2, 1066, "", 100 },
  { 2, 1261, "", 100 },
  { 2, 18, "", 100 },
// convert_float16_sat_rtz
  { 2, 70, "", 100 },
  { 2, 214, "", 100 },
  { 2, 358, "", 100 },
  { 2, 498, "", 100 },
  { 2, 634, "", 100 },
  { 2, 781, "", 100 },
  { 2, 928, "", 100 },
  { 2, 1072, "", 100 },
  { 2, 1263, "", 100 },
  { 2, 20, "", 100 },
// convert_float_sat_rtp
  { 2, 36, "", 100 },
  { 2, 180, "", 100 },
  { 2, 324, "", 100 },
  { 2, 468, "", 100 },
  { 2, 612, "", 100 },
  { 2, 755, "", 100 },
  { 2, 894, "", 100 },
  { 2, 1038, "", 100 },
  { 2, 1208, "", 100 },
  { 2, 22, "", 100 },
// convert_uchar
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_rte
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_rte
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_rte
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_rte
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_rte
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_rte
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_rtz
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_rtz
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_rtz
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_rtz
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_rtz
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_rtz
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_rtp
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_rtp
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_rtp
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_rtp
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_rtp
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_rtp
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_rtn
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_rtn
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_rtn
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_rtn
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_rtn
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_rtn
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_sat
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_sat
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_sat
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_sat
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_sat
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_sat
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_sat_rte
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_sat_rte
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_sat_rte
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_sat_rte
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_sat_rte
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_sat_rte
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_sat_rtz
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_sat_rtz
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_sat_rtz
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_sat_rtz
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_sat_rtz
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_sat_rtz
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_sat_rtp
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_sat_rtp
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_sat_rtp
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_sat_rtp
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_sat_rtp
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_sat_rtp
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// convert_uchar_sat_rtn
  { 2, 216, "", 100 },
  { 2, 228, "", 100 },
  { 2, 240, "", 100 },
  { 2, 252, "", 100 },
  { 2, 264, "", 100 },
  { 2, 276, "", 100 },
  { 2, 288, "", 100 },
  { 2, 300, "", 100 },
  { 2, 312, "", 100 },
  { 2, 328, "", 100 },
// convert_uchar2_sat_rtn
  { 2, 218, "", 100 },
  { 2, 230, "", 100 },
  { 2, 242, "", 100 },
  { 2, 254, "", 100 },
  { 2, 266, "", 100 },
  { 2, 278, "", 100 },
  { 2, 290, "", 100 },
  { 2, 302, "", 100 },
  { 2, 314, "", 100 },
  { 2, 330, "", 100 },
// convert_uchar3_sat_rtn
  { 2, 220, "", 100 },
  { 2, 232, "", 100 },
  { 2, 244, "", 100 },
  { 2, 256, "", 100 },
  { 2, 268, "", 100 },
  { 2, 280, "", 100 },
  { 2, 292, "", 100 },
  { 2, 304, "", 100 },
  { 2, 316, "", 100 },
  { 2, 332, "", 100 },
// convert_uchar4_sat_rtn
  { 2, 222, "", 100 },
  { 2, 234, "", 100 },
  { 2, 246, "", 100 },
  { 2, 258, "", 100 },
  { 2, 270, "", 100 },
  { 2, 282, "", 100 },
  { 2, 294, "", 100 },
  { 2, 306, "", 100 },
  { 2, 318, "", 100 },
  { 2, 334, "", 100 },
// convert_uchar8_sat_rtn
  { 2, 224, "", 100 },
  { 2, 236, "", 100 },
  { 2, 248, "", 100 },
  { 2, 260, "", 100 },
  { 2, 272, "", 100 },
  { 2, 284, "", 100 },
  { 2, 296, "", 100 },
  { 2, 308, "", 100 },
  { 2, 320, "", 100 },
  { 2, 336, "", 100 },
// convert_uchar16_sat_rtn
  { 2, 226, "", 100 },
  { 2, 238, "", 100 },
  { 2, 250, "", 100 },
  { 2, 262, "", 100 },
  { 2, 274, "", 100 },
  { 2, 286, "", 100 },
  { 2, 298, "", 100 },
  { 2, 310, "", 100 },
  { 2, 322, "", 100 },
  { 2, 338, "", 100 },
// acos
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// convert_short
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_rte
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_rte
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_rte
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_rte
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_rte
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_rte
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_rtz
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_rtz
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_rtz
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_rtz
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_rtz
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_rtz
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_rtp
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_rtp
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_rtp
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_rtp
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_rtp
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_rtp
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_rtn
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_rtn
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_rtn
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_rtn
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_rtn
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_rtn
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_sat
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_sat
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_sat
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_sat
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_sat
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_sat
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_sat_rte
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_sat_rte
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_sat_rte
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_sat_rte
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_sat_rte
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_sat_rte
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_sat_rtz
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_sat_rtz
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_sat_rtz
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_sat_rtz
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_sat_rtz
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_sat_rtz
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_sat_rtp
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_sat_rtp
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_sat_rtp
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_sat_rtp
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_sat_rtp
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_sat_rtp
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_short_sat_rtn
  { 2, 346, "", 100 },
  { 2, 360, "", 100 },
  { 2, 372, "", 100 },
  { 2, 384, "", 100 },
  { 2, 396, "", 100 },
  { 2, 408, "", 100 },
  { 2, 420, "", 100 },
  { 2, 432, "", 100 },
  { 2, 444, "", 100 },
  { 2, 456, "", 100 },
// convert_short2_sat_rtn
  { 2, 348, "", 100 },
  { 2, 362, "", 100 },
  { 2, 374, "", 100 },
  { 2, 386, "", 100 },
  { 2, 398, "", 100 },
  { 2, 410, "", 100 },
  { 2, 422, "", 100 },
  { 2, 434, "", 100 },
  { 2, 446, "", 100 },
  { 2, 458, "", 100 },
// convert_short3_sat_rtn
  { 2, 350, "", 100 },
  { 2, 364, "", 100 },
  { 2, 376, "", 100 },
  { 2, 388, "", 100 },
  { 2, 400, "", 100 },
  { 2, 412, "", 100 },
  { 2, 424, "", 100 },
  { 2, 436, "", 100 },
  { 2, 448, "", 100 },
  { 2, 460, "", 100 },
// convert_short4_sat_rtn
  { 2, 352, "", 100 },
  { 2, 366, "", 100 },
  { 2, 378, "", 100 },
  { 2, 390, "", 100 },
  { 2, 402, "", 100 },
  { 2, 414, "", 100 },
  { 2, 426, "", 100 },
  { 2, 438, "", 100 },
  { 2, 450, "", 100 },
  { 2, 462, "", 100 },
// convert_short8_sat_rtn
  { 2, 354, "", 100 },
  { 2, 368, "", 100 },
  { 2, 380, "", 100 },
  { 2, 392, "", 100 },
  { 2, 404, "", 100 },
  { 2, 416, "", 100 },
  { 2, 428, "", 100 },
  { 2, 440, "", 100 },
  { 2, 452, "", 100 },
  { 2, 464, "", 100 },
// convert_short16_sat_rtn
  { 2, 356, "", 100 },
  { 2, 370, "", 100 },
  { 2, 382, "", 100 },
  { 2, 394, "", 100 },
  { 2, 406, "", 100 },
  { 2, 418, "", 100 },
  { 2, 430, "", 100 },
  { 2, 442, "", 100 },
  { 2, 454, "", 100 },
  { 2, 466, "", 100 },
// convert_ushort
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_rte
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_rte
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_rte
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_rte
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_rte
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_rte
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_rtz
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_rtz
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_rtz
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_rtz
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_rtz
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_rtz
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_rtp
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_rtp
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_rtp
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_rtp
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_rtp
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_rtp
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_rtn
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_rtn
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_rtn
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_rtn
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_rtn
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_rtn
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_sat
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_sat
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_sat
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_sat
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_sat
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_sat
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_sat_rte
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_sat_rte
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_sat_rte
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_sat_rte
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_sat_rte
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_sat_rte
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_sat_rtz
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_sat_rtz
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_sat_rtz
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_sat_rtz
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_sat_rtz
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_sat_rtz
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_sat_rtp
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_sat_rtp
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_sat_rtp
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_sat_rtp
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_sat_rtp
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_sat_rtp
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_ushort_sat_rtn
  { 2, 472, "", 100 },
  { 2, 490, "", 100 },
  { 2, 504, "", 100 },
  { 2, 516, "", 100 },
  { 2, 528, "", 100 },
  { 2, 540, "", 100 },
  { 2, 552, "", 100 },
  { 2, 564, "", 100 },
  { 2, 576, "", 100 },
  { 2, 588, "", 100 },
// convert_ushort2_sat_rtn
  { 2, 474, "", 100 },
  { 2, 492, "", 100 },
  { 2, 506, "", 100 },
  { 2, 518, "", 100 },
  { 2, 530, "", 100 },
  { 2, 542, "", 100 },
  { 2, 554, "", 100 },
  { 2, 566, "", 100 },
  { 2, 578, "", 100 },
  { 2, 590, "", 100 },
// convert_ushort3_sat_rtn
  { 2, 476, "", 100 },
  { 2, 494, "", 100 },
  { 2, 508, "", 100 },
  { 2, 520, "", 100 },
  { 2, 532, "", 100 },
  { 2, 544, "", 100 },
  { 2, 556, "", 100 },
  { 2, 568, "", 100 },
  { 2, 580, "", 100 },
  { 2, 592, "", 100 },
// convert_ushort4_sat_rtn
  { 2, 478, "", 100 },
  { 2, 496, "", 100 },
  { 2, 510, "", 100 },
  { 2, 522, "", 100 },
  { 2, 534, "", 100 },
  { 2, 546, "", 100 },
  { 2, 558, "", 100 },
  { 2, 570, "", 100 },
  { 2, 582, "", 100 },
  { 2, 594, "", 100 },
// convert_ushort8_sat_rtn
  { 2, 482, "", 100 },
  { 2, 500, "", 100 },
  { 2, 512, "", 100 },
  { 2, 524, "", 100 },
  { 2, 536, "", 100 },
  { 2, 548, "", 100 },
  { 2, 560, "", 100 },
  { 2, 572, "", 100 },
  { 2, 584, "", 100 },
  { 2, 596, "", 100 },
// convert_ushort16_sat_rtn
  { 2, 484, "", 100 },
  { 2, 502, "", 100 },
  { 2, 514, "", 100 },
  { 2, 526, "", 100 },
  { 2, 538, "", 100 },
  { 2, 550, "", 100 },
  { 2, 562, "", 100 },
  { 2, 574, "", 100 },
  { 2, 586, "", 100 },
  { 2, 598, "", 100 },
// convert_int
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_rte
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_rte
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_rte
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_rte
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_rte
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_rte
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_rtz
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_rtz
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_rtz
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_rtz
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_rtz
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_rtz
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_rtp
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_rtp
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_rtp
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_rtp
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_rtp
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_rtp
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_rtn
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_rtn
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_rtn
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_rtn
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_rtn
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_rtn
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_sat
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_sat
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_sat
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_sat
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_sat
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_sat
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_sat_rte
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_sat_rte
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_sat_rte
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_sat_rte
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_sat_rte
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_sat_rte
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_sat_rtz
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_sat_rtz
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_sat_rtz
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_sat_rtz
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_sat_rtz
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_sat_rtz
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_sat_rtp
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_sat_rtp
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_sat_rtp
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_sat_rtp
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_sat_rtp
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_sat_rtp
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// convert_int_sat_rtn
  { 2, 600, "", 100 },
  { 2, 618, "", 100 },
  { 2, 636, "", 100 },
  { 2, 648, "", 100 },
  { 2, 660, "", 100 },
  { 2, 672, "", 100 },
  { 2, 687, "", 100 },
  { 2, 699, "", 100 },
  { 2, 711, "", 100 },
  { 2, 723, "", 100 },
// convert_int2_sat_rtn
  { 2, 602, "", 100 },
  { 2, 620, "", 100 },
  { 2, 638, "", 100 },
  { 2, 650, "", 100 },
  { 2, 662, "", 100 },
  { 2, 674, "", 100 },
  { 2, 689, "", 100 },
  { 2, 701, "", 100 },
  { 2, 713, "", 100 },
  { 2, 725, "", 100 },
// convert_int3_sat_rtn
  { 2, 604, "", 100 },
  { 2, 622, "", 100 },
  { 2, 640, "", 100 },
  { 2, 652, "", 100 },
  { 2, 664, "", 100 },
  { 2, 676, "", 100 },
  { 2, 691, "", 100 },
  { 2, 703, "", 100 },
  { 2, 715, "", 100 },
  { 2, 727, "", 100 },
// convert_int4_sat_rtn
  { 2, 606, "", 100 },
  { 2, 624, "", 100 },
  { 2, 642, "", 100 },
  { 2, 654, "", 100 },
  { 2, 666, "", 100 },
  { 2, 678, "", 100 },
  { 2, 693, "", 100 },
  { 2, 705, "", 100 },
  { 2, 717, "", 100 },
  { 2, 729, "", 100 },
// convert_int8_sat_rtn
  { 2, 608, "", 100 },
  { 2, 626, "", 100 },
  { 2, 644, "", 100 },
  { 2, 656, "", 100 },
  { 2, 668, "", 100 },
  { 2, 683, "", 100 },
  { 2, 695, "", 100 },
  { 2, 707, "", 100 },
  { 2, 719, "", 100 },
  { 2, 731, "", 100 },
// convert_int16_sat_rtn
  { 2, 610, "", 100 },
  { 2, 628, "", 100 },
  { 2, 646, "", 100 },
  { 2, 658, "", 100 },
  { 2, 670, "", 100 },
  { 2, 685, "", 100 },
  { 2, 697, "", 100 },
  { 2, 709, "", 100 },
  { 2, 721, "", 100 },
  { 2, 733, "", 100 },
// atan2
  { 3, 680, "", 100 },
  { 3, 891, "", 100 },
  { 3, 1160, "", 100 },
  { 3, 1163, "", 100 },
  { 3, 1166, "", 100 },
  { 3, 1169, "", 100 },
  { 3, 1172, "", 100 },
  { 3, 1175, "", 100 },
  { 3, 1178, "", 100 },
  { 3, 1181, "", 100 },
  { 3, 1184, "", 100 },
  { 3, 1187, "", 100 },
  { 3, 1190, "", 100 },
  { 3, 1193, "", 100 },
  { 3, 1196, "", 100 },
  { 3, 1199, "", 100 },
  { 3, 1202, "", 100 },
  { 3, 1205, "", 100 },
// convert_uint
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_rte
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_rte
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_rte
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_rte
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_rte
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_rte
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_rtz
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_rtz
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_rtz
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_rtz
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_rtz
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_rtz
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_rtp
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_rtp
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_rtp
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_rtp
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_rtp
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_rtp
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_rtn
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_rtn
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_rtn
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_rtn
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_rtn
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_rtn
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_sat
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_sat
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_sat
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_sat
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_sat
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_sat
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_sat_rte
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_sat_rte
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_sat_rte
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_sat_rte
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_sat_rte
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_sat_rte
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_sat_rtz
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_sat_rtz
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_sat_rtz
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_sat_rtz
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_sat_rtz
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_sat_rtz
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_sat_rtp
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_sat_rtp
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_sat_rtp
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_sat_rtp
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_sat_rtp
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_sat_rtp
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_uint_sat_rtn
  { 2, 735, "", 100 },
  { 2, 747, "", 100 },
  { 2, 765, "", 100 },
  { 2, 783, "", 100 },
  { 2, 795, "", 100 },
  { 2, 807, "", 100 },
  { 2, 819, "", 100 },
  { 2, 831, "", 100 },
  { 2, 843, "", 100 },
  { 2, 855, "", 100 },
// convert_uint2_sat_rtn
  { 2, 737, "", 100 },
  { 2, 749, "", 100 },
  { 2, 767, "", 100 },
  { 2, 785, "", 100 },
  { 2, 797, "", 100 },
  { 2, 809, "", 100 },
  { 2, 821, "", 100 },
  { 2, 833, "", 100 },
  { 2, 845, "", 100 },
  { 2, 857, "", 100 },
// convert_uint3_sat_rtn
  { 2, 739, "", 100 },
  { 2, 751, "", 100 },
  { 2, 769, "", 100 },
  { 2, 787, "", 100 },
  { 2, 799, "", 100 },
  { 2, 811, "", 100 },
  { 2, 823, "", 100 },
  { 2, 835, "", 100 },
  { 2, 847, "", 100 },
  { 2, 859, "", 100 },
// convert_uint4_sat_rtn
  { 2, 741, "", 100 },
  { 2, 753, "", 100 },
  { 2, 771, "", 100 },
  { 2, 789, "", 100 },
  { 2, 801, "", 100 },
  { 2, 813, "", 100 },
  { 2, 825, "", 100 },
  { 2, 837, "", 100 },
  { 2, 849, "", 100 },
  { 2, 861, "", 100 },
// convert_uint8_sat_rtn
  { 2, 743, "", 100 },
  { 2, 757, "", 100 },
  { 2, 775, "", 100 },
  { 2, 791, "", 100 },
  { 2, 803, "", 100 },
  { 2, 815, "", 100 },
  { 2, 827, "", 100 },
  { 2, 839, "", 100 },
  { 2, 851, "", 100 },
  { 2, 863, "", 100 },
// convert_uint16_sat_rtn
  { 2, 745, "", 100 },
  { 2, 759, "", 100 },
  { 2, 777, "", 100 },
  { 2, 793, "", 100 },
  { 2, 805, "", 100 },
  { 2, 817, "", 100 },
  { 2, 829, "", 100 },
  { 2, 841, "", 100 },
  { 2, 853, "", 100 },
  { 2, 865, "", 100 },
// convert_long
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_rte
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_rte
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_rte
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_rte
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_rte
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_rte
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_rtz
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_rtz
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_rtz
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_rtz
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_rtz
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_rtz
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_rtp
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_rtp
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_rtp
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_rtp
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_rtp
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_rtp
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_rtn
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_rtn
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_rtn
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_rtn
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_rtn
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_rtn
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_sat
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_sat
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_sat
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_sat
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_sat
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_sat
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_sat_rte
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_sat_rte
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_sat_rte
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_sat_rte
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_sat_rte
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_sat_rte
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_sat_rtz
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_sat_rtz
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_sat_rtz
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_sat_rtz
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_sat_rtz
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_sat_rtz
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_sat_rtp
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_sat_rtp
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_sat_rtp
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_sat_rtp
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_sat_rtp
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_sat_rtp
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_long_sat_rtn
  { 2, 867, "", 100 },
  { 2, 879, "", 100 },
  { 2, 896, "", 100 },
  { 2, 914, "", 100 },
  { 2, 930, "", 100 },
  { 2, 942, "", 100 },
  { 2, 954, "", 100 },
  { 2, 966, "", 100 },
  { 2, 978, "", 100 },
  { 2, 990, "", 100 },
// convert_long2_sat_rtn
  { 2, 869, "", 100 },
  { 2, 881, "", 100 },
  { 2, 898, "", 100 },
  { 2, 916, "", 100 },
  { 2, 932, "", 100 },
  { 2, 944, "", 100 },
  { 2, 956, "", 100 },
  { 2, 968, "", 100 },
  { 2, 980, "", 100 },
  { 2, 992, "", 100 },
// convert_long3_sat_rtn
  { 2, 871, "", 100 },
  { 2, 883, "", 100 },
  { 2, 900, "", 100 },
  { 2, 918, "", 100 },
  { 2, 934, "", 100 },
  { 2, 946, "", 100 },
  { 2, 958, "", 100 },
  { 2, 970, "", 100 },
  { 2, 982, "", 100 },
  { 2, 994, "", 100 },
// convert_long4_sat_rtn
  { 2, 873, "", 100 },
  { 2, 885, "", 100 },
  { 2, 902, "", 100 },
  { 2, 920, "", 100 },
  { 2, 936, "", 100 },
  { 2, 948, "", 100 },
  { 2, 960, "", 100 },
  { 2, 972, "", 100 },
  { 2, 984, "", 100 },
  { 2, 996, "", 100 },
// convert_long8_sat_rtn
  { 2, 875, "", 100 },
  { 2, 887, "", 100 },
  { 2, 904, "", 100 },
  { 2, 922, "", 100 },
  { 2, 938, "", 100 },
  { 2, 950, "", 100 },
  { 2, 962, "", 100 },
  { 2, 974, "", 100 },
  { 2, 986, "", 100 },
  { 2, 998, "", 100 },
// convert_long16_sat_rtn
  { 2, 877, "", 100 },
  { 2, 889, "", 100 },
  { 2, 906, "", 100 },
  { 2, 924, "", 100 },
  { 2, 940, "", 100 },
  { 2, 952, "", 100 },
  { 2, 964, "", 100 },
  { 2, 976, "", 100 },
  { 2, 988, "", 100 },
  { 2, 1000, "", 100 },
// convert_ulong
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_rte
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_rte
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_rte
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_rte
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_rte
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_rte
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_rtz
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_rtz
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_rtz
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_rtz
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_rtz
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_rtz
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_rtp
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_rtp
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_rtp
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_rtp
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_rtp
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_rtp
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_rtn
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_rtn
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_rtn
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_rtn
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_rtn
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_rtn
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_sat
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_sat
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_sat
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_sat
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_sat
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_sat
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_sat_rte
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_sat_rte
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_sat_rte
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_sat_rte
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_sat_rte
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_sat_rte
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_sat_rtz
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_sat_rtz
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_sat_rtz
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_sat_rtz
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_sat_rtz
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_sat_rtz
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_sat_rtp
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_sat_rtp
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_sat_rtp
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_sat_rtp
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_sat_rtp
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_sat_rtp
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// convert_ulong_sat_rtn
  { 2, 1002, "", 100 },
  { 2, 1014, "", 100 },
  { 2, 1026, "", 100 },
  { 2, 1040, "", 100 },
  { 2, 1058, "", 100 },
  { 2, 1074, "", 100 },
  { 2, 1086, "", 100 },
  { 2, 1098, "", 100 },
  { 2, 1110, "", 100 },
  { 2, 1122, "", 100 },
// convert_ulong2_sat_rtn
  { 2, 1004, "", 100 },
  { 2, 1016, "", 100 },
  { 2, 1028, "", 100 },
  { 2, 1042, "", 100 },
  { 2, 1060, "", 100 },
  { 2, 1076, "", 100 },
  { 2, 1088, "", 100 },
  { 2, 1100, "", 100 },
  { 2, 1112, "", 100 },
  { 2, 1124, "", 100 },
// convert_ulong3_sat_rtn
  { 2, 1006, "", 100 },
  { 2, 1018, "", 100 },
  { 2, 1030, "", 100 },
  { 2, 1044, "", 100 },
  { 2, 1062, "", 100 },
  { 2, 1078, "", 100 },
  { 2, 1090, "", 100 },
  { 2, 1102, "", 100 },
  { 2, 1114, "", 100 },
  { 2, 1126, "", 100 },
// convert_ulong4_sat_rtn
  { 2, 1008, "", 100 },
  { 2, 1020, "", 100 },
  { 2, 1032, "", 100 },
  { 2, 1046, "", 100 },
  { 2, 1064, "", 100 },
  { 2, 1080, "", 100 },
  { 2, 1092, "", 100 },
  { 2, 1104, "", 100 },
  { 2, 1116, "", 100 },
  { 2, 1128, "", 100 },
// convert_ulong8_sat_rtn
  { 2, 1010, "", 100 },
  { 2, 1022, "", 100 },
  { 2, 1034, "", 100 },
  { 2, 1050, "", 100 },
  { 2, 1068, "", 100 },
  { 2, 1082, "", 100 },
  { 2, 1094, "", 100 },
  { 2, 1106, "", 100 },
  { 2, 1118, "", 100 },
  { 2, 1130, "", 100 },
// convert_ulong16_sat_rtn
  { 2, 1012, "", 100 },
  { 2, 1024, "", 100 },
  { 2, 1036, "", 100 },
  { 2, 1052, "", 100 },
  { 2, 1070, "", 100 },
  { 2, 1084, "", 100 },
  { 2, 1096, "", 100 },
  { 2, 1108, "", 100 },
  { 2, 1120, "", 100 },
  { 2, 1132, "", 100 },
// get_global_size
  { 2, 1134, "", 100 },
// get_global_id
  { 2, 1134, "", 100 },
// get_local_size
  { 2, 1134, "", 100 },
// get_local_id
  { 2, 1134, "", 100 },
// get_num_groups
  { 2, 1134, "", 100 },
// get_group_id
  { 2, 1134, "", 100 },
// get_global_offset
  { 2, 1134, "", 100 },
// acosh
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// acospi
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// asin
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// asinh
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// asinpi
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// atan
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// atanh
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// atanpi
  { 2, 22, "", 100 },
  { 2, 0, "", 100 },
  { 2, 14, "", 100 },
  { 2, 16, "", 100 },
  { 2, 18, "", 100 },
  { 2, 20, "", 100 },
  { 2, 1136, "", 100 },
  { 2, 1138, "", 100 },
  { 2, 1140, "", 100 },
  { 2, 1142, "", 100 },
  { 2, 1144, "", 100 },
  { 2, 1146, "", 100 },
  { 2, 1148, "", 100 },
  { 2, 1150, "", 100 },
  { 2, 1152, "", 100 },
  { 2, 1154, "", 100 },
  { 2, 1156, "", 100 },
  { 2, 1158, "", 100 },
// atan2pi
  { 3, 680, "", 100 },
  { 3, 891, "", 100 },
  { 3, 1160, "", 100 },
  { 3, 1163, "", 100 },
  { 3, 1166, "", 100 },
  { 3, 1169, "", 100 },
  { 3, 1172, "", 100 },
  { 3, 1175, "", 100 },
  { 3, 1178, "", 100 },
  { 3, 1181, "", 100 },
  { 3, 1184, "", 100 },
  { 3, 1187, "", 100 },
  { 3, 1190, "", 100 },
  { 3, 1193, "", 100 },
  { 3, 1196, "", 100 },
  { 3, 1199, "", 100 },
  { 3, 1202, "", 100 },
  { 3, 1205, "", 100 },
// fmax
  { 3, 680, "", 100 },
  { 3, 891, "", 100 },
  { 3, 1160, "", 100 },
  { 3, 1163, "", 100 },
  { 3, 1166, "", 100 },
  { 3, 1169, "", 100 },
  { 3, 680, "", 100 },
  { 3, 1210, "", 100 },
  { 3, 1213, "", 100 },
  { 3, 1216, "", 100 },
  { 3, 1219, "", 100 },
  { 3, 1222, "", 100 },
  { 3, 1172, "", 100 },
  { 3, 1175, "", 100 },
  { 3, 1178, "", 100 },
  { 3, 1181, "", 100 },
  { 3, 1184, "", 100 },
  { 3, 1187, "", 100 },
  { 3, 1172, "", 100 },
  { 3, 1225, "", 100 },
  { 3, 1228, "", 100 },
  { 3, 1231, "", 100 },
  { 3, 1234, "", 100 },
  { 3, 1237, "", 100 },
  { 3, 1190, "", 100 },
  { 3, 1193, "", 100 },
  { 3, 1196, "", 100 },
  { 3, 1199, "", 100 },
  { 3, 1202, "", 100 },
  { 3, 1205, "", 100 },
  { 3, 1190, "", 100 },
  { 3, 1242, "", 100 },
  { 3, 1245, "", 100 },
  { 3, 1248, "", 100 },
  { 3, 1251, "", 100 },
  { 3, 1254, "", 100 },
// fmin
  { 3, 680, "", 100 },
  { 3, 891, "", 100 },
  { 3, 1160, "", 100 },
  { 3, 1163, "", 100 },
  { 3, 1166, "", 100 },
  { 3, 1169, "", 100 },
  { 3, 680, "", 100 },
  { 3, 1210, "", 100 },
  { 3, 1213, "", 100 },
  { 3, 1216, "", 100 },
  { 3, 1219, "", 100 },
  { 3, 1222, "", 100 },
  { 3, 1172, "", 100 },
  { 3, 1175, "", 100 },
  { 3, 1178, "", 100 },
  { 3, 1181, "", 100 },
  { 3, 1184, "", 100 },
  { 3, 1187, "", 100 },
  { 3, 1172, "", 100 },
  { 3, 1225, "", 100 },
  { 3, 1228, "", 100 },
  { 3, 1231, "", 100 },
  { 3, 1234, "", 100 },
  { 3, 1237, "", 100 },
  { 3, 1190, "", 100 },
  { 3, 1193, "", 100 },
  { 3, 1196, "", 100 },
  { 3, 1199, "", 100 },
  { 3, 1202, "", 100 },
  { 3, 1205, "", 100 },
  { 3, 1190, "", 100 },
  { 3, 1242, "", 100 },
  { 3, 1245, "", 100 },
  { 3, 1248, "", 100 },
  { 3, 1251, "", 100 },
  { 3, 1254, "", 100 },
// get_max_sub_group_size
  { 1, 1313, "cl_khr_subgroups", 200 },
// get_num_sub_groups
  { 1, 1313, "cl_khr_subgroups", 200 },
// get_sub_group_size
  { 1, 1313, "cl_khr_subgroups", 200 },
// get_work_dim
  { 1, 1313, "", 100 },
// read_imagef
  { 3, 1314, "", 100 },
// write_imagef
  { 4, 1317, "", 100 },
};


// Return 0 if name is not a recognized OpenCL builtin, or an index
// into a table of declarations if it is an OpenCL builtin.
static std::pair<unsigned, unsigned> isOpenCLBuiltin(llvm::StringRef name) {

  switch (name.size()) {
  default: break;
  case 4:	 // 5 strings to match.
    switch (name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(name.data()+2, "os", 2) != 0)
          break;
        return std::make_pair(2401, 18);	 // "acos"
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+2, "in", 2) != 0)
          break;
        return std::make_pair(6080, 18);	 // "asin"
      case 't':	 // 1 string to match.
        if (memcmp(name.data()+2, "an", 2) != 0)
          break;
        return std::make_pair(6134, 18);	 // "atan"
      }
      break;
    case 'f':	 // 2 strings to match.
      if (name[1] != 'm')
        break;
      switch (name[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (name[3] != 'x')
          break;
        return std::make_pair(6206, 36);	 // "fmax"
      case 'i':	 // 1 string to match.
        if (name[3] != 'n')
          break;
        return std::make_pair(6242, 36);	 // "fmin"
      }
      break;
    }
    break;
  case 5:	 // 4 strings to match.
    if (name[0] != 'a')
      break;
    switch (name[1]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(name.data()+2, "osh", 3) != 0)
        break;
      return std::make_pair(6044, 18);	 // "acosh"
    case 's':	 // 1 string to match.
      if (memcmp(name.data()+2, "inh", 3) != 0)
        break;
      return std::make_pair(6098, 18);	 // "asinh"
    case 't':	 // 2 strings to match.
      if (memcmp(name.data()+2, "an", 2) != 0)
        break;
      switch (name[4]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(4219, 18);	 // "atan2"
      case 'h':	 // 1 string to match.
        return std::make_pair(6152, 18);	 // "atanh"
      }
      break;
    }
    break;
  case 6:	 // 3 strings to match.
    if (name[0] != 'a')
      break;
    switch (name[1]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(name.data()+2, "ospi", 4) != 0)
        break;
      return std::make_pair(6062, 18);	 // "acospi"
    case 's':	 // 1 string to match.
      if (memcmp(name.data()+2, "inpi", 4) != 0)
        break;
      return std::make_pair(6116, 18);	 // "asinpi"
    case 't':	 // 1 string to match.
      if (memcmp(name.data()+2, "anpi", 4) != 0)
        break;
      return std::make_pair(6170, 18);	 // "atanpi"
    }
    break;
  case 7:	 // 1 string to match.
    if (memcmp(name.data()+0, "atan2pi", 7) != 0)
      break;
    return std::make_pair(6188, 18);	 // "atan2pi"
  case 11:	 // 2 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 1 string to match.
      if (memcmp(name.data()+1, "onvert_int", 10) != 0)
        break;
      return std::make_pair(3619, 10);	 // "convert_int"
    case 'r':	 // 1 string to match.
      if (memcmp(name.data()+1, "ead_imagef", 10) != 0)
        break;
      return std::make_pair(6282, 1);	 // "read_imagef"
    }
    break;
  case 12:	 // 11 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 7 strings to match.
      if (memcmp(name.data()+1, "onvert_", 7) != 0)
        break;
      switch (name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(name.data()+9, "har", 3) != 0)
          break;
        return std::make_pair(851, 10);	 // "convert_char"
      case 'i':	 // 4 strings to match.
        if (memcmp(name.data()+9, "nt", 2) != 0)
          break;
        switch (name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(3629, 10);	 // "convert_int2"
        case '3':	 // 1 string to match.
          return std::make_pair(3639, 10);	 // "convert_int3"
        case '4':	 // 1 string to match.
          return std::make_pair(3649, 10);	 // "convert_int4"
        case '8':	 // 1 string to match.
          return std::make_pair(3659, 10);	 // "convert_int8"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(name.data()+9, "ong", 3) != 0)
          break;
        return std::make_pair(4837, 10);	 // "convert_long"
      case 'u':	 // 1 string to match.
        if (memcmp(name.data()+9, "int", 3) != 0)
          break;
        return std::make_pair(4237, 10);	 // "convert_uint"
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(name.data()+1, "et_", 3) != 0)
        break;
      switch (name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(name.data()+5, "roup_id", 7) != 0)
          break;
        return std::make_pair(6042, 1);	 // "get_group_id"
      case 'l':	 // 1 string to match.
        if (memcmp(name.data()+5, "ocal_id", 7) != 0)
          break;
        return std::make_pair(6040, 1);	 // "get_local_id"
      case 'w':	 // 1 string to match.
        if (memcmp(name.data()+5, "ork_dim", 7) != 0)
          break;
        return std::make_pair(6281, 1);	 // "get_work_dim"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(name.data()+1, "rite_imagef", 11) != 0)
        break;
      return std::make_pair(6283, 1);	 // "write_imagef"
    }
    break;
  case 13:	 // 18 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 17 strings to match.
      if (memcmp(name.data()+1, "onvert_", 7) != 0)
        break;
      switch (name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(name.data()+9, "har", 3) != 0)
          break;
        switch (name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(861, 10);	 // "convert_char2"
        case '3':	 // 1 string to match.
          return std::make_pair(871, 10);	 // "convert_char3"
        case '4':	 // 1 string to match.
          return std::make_pair(881, 10);	 // "convert_char4"
        case '8':	 // 1 string to match.
          return std::make_pair(901, 10);	 // "convert_char8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(name.data()+9, "loat", 4) != 0)
          break;
        return std::make_pair(711, 10);	 // "convert_float"
      case 'i':	 // 1 string to match.
        if (memcmp(name.data()+9, "nt16", 4) != 0)
          break;
        return std::make_pair(3669, 10);	 // "convert_int16"
      case 'l':	 // 4 strings to match.
        if (memcmp(name.data()+9, "ong", 3) != 0)
          break;
        switch (name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(4847, 10);	 // "convert_long2"
        case '3':	 // 1 string to match.
          return std::make_pair(4857, 10);	 // "convert_long3"
        case '4':	 // 1 string to match.
          return std::make_pair(4867, 10);	 // "convert_long4"
        case '8':	 // 1 string to match.
          return std::make_pair(4877, 10);	 // "convert_long8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+9, "hort", 4) != 0)
          break;
        return std::make_pair(2419, 10);	 // "convert_short"
      case 'u':	 // 6 strings to match.
        switch (name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(name.data()+10, "har", 3) != 0)
            break;
          return std::make_pair(1801, 10);	 // "convert_uchar"
        case 'i':	 // 4 strings to match.
          if (memcmp(name.data()+10, "nt", 2) != 0)
            break;
          switch (name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(4247, 10);	 // "convert_uint2"
          case '3':	 // 1 string to match.
            return std::make_pair(4257, 10);	 // "convert_uint3"
          case '4':	 // 1 string to match.
            return std::make_pair(4267, 10);	 // "convert_uint4"
          case '8':	 // 1 string to match.
            return std::make_pair(4277, 10);	 // "convert_uint8"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(name.data()+10, "ong", 3) != 0)
            break;
          return std::make_pair(5437, 10);	 // "convert_ulong"
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(name.data()+1, "et_global_id", 12) != 0)
        break;
      return std::make_pair(6038, 1);	 // "get_global_id"
    }
    break;
  case 14:	 // 23 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 21 strings to match.
      if (memcmp(name.data()+1, "onvert_", 7) != 0)
        break;
      switch (name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(name.data()+9, "har16", 5) != 0)
          break;
        return std::make_pair(911, 10);	 // "convert_char16"
      case 'd':	 // 1 string to match.
        if (memcmp(name.data()+9, "ouble", 5) != 0)
          break;
        return std::make_pair(621, 10);	 // "convert_double"
      case 'f':	 // 4 strings to match.
        if (memcmp(name.data()+9, "loat", 4) != 0)
          break;
        switch (name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(721, 10);	 // "convert_float2"
        case '3':	 // 1 string to match.
          return std::make_pair(731, 10);	 // "convert_float3"
        case '4':	 // 1 string to match.
          return std::make_pair(741, 10);	 // "convert_float4"
        case '8':	 // 1 string to match.
          return std::make_pair(751, 10);	 // "convert_float8"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(name.data()+9, "ong16", 5) != 0)
          break;
        return std::make_pair(4887, 10);	 // "convert_long16"
      case 's':	 // 4 strings to match.
        if (memcmp(name.data()+9, "hort", 4) != 0)
          break;
        switch (name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(2429, 10);	 // "convert_short2"
        case '3':	 // 1 string to match.
          return std::make_pair(2439, 10);	 // "convert_short3"
        case '4':	 // 1 string to match.
          return std::make_pair(2449, 10);	 // "convert_short4"
        case '8':	 // 1 string to match.
          return std::make_pair(2459, 10);	 // "convert_short8"
        }
        break;
      case 'u':	 // 10 strings to match.
        switch (name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(name.data()+10, "har", 3) != 0)
            break;
          switch (name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(1811, 10);	 // "convert_uchar2"
          case '3':	 // 1 string to match.
            return std::make_pair(1821, 10);	 // "convert_uchar3"
          case '4':	 // 1 string to match.
            return std::make_pair(1831, 10);	 // "convert_uchar4"
          case '8':	 // 1 string to match.
            return std::make_pair(1841, 10);	 // "convert_uchar8"
          }
          break;
        case 'i':	 // 1 string to match.
          if (memcmp(name.data()+10, "nt16", 4) != 0)
            break;
          return std::make_pair(4287, 10);	 // "convert_uint16"
        case 'l':	 // 4 strings to match.
          if (memcmp(name.data()+10, "ong", 3) != 0)
            break;
          switch (name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(5447, 10);	 // "convert_ulong2"
          case '3':	 // 1 string to match.
            return std::make_pair(5457, 10);	 // "convert_ulong3"
          case '4':	 // 1 string to match.
            return std::make_pair(5467, 10);	 // "convert_ulong4"
          case '8':	 // 1 string to match.
            return std::make_pair(5477, 10);	 // "convert_ulong8"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+10, "hort", 4) != 0)
            break;
          return std::make_pair(3019, 10);	 // "convert_ushort"
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(name.data()+1, "et_", 3) != 0)
        break;
      switch (name[4]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(name.data()+5, "ocal_size", 9) != 0)
          break;
        return std::make_pair(6039, 1);	 // "get_local_size"
      case 'n':	 // 1 string to match.
        if (memcmp(name.data()+5, "um_groups", 9) != 0)
          break;
        return std::make_pair(6041, 1);	 // "get_num_groups"
      }
      break;
    }
    break;
  case 15:	 // 18 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 17 strings to match.
      if (memcmp(name.data()+1, "onvert_", 7) != 0)
        break;
      switch (name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        if (memcmp(name.data()+9, "ouble", 5) != 0)
          break;
        switch (name[14]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(631, 10);	 // "convert_double2"
        case '3':	 // 1 string to match.
          return std::make_pair(641, 10);	 // "convert_double3"
        case '4':	 // 1 string to match.
          return std::make_pair(651, 10);	 // "convert_double4"
        case '8':	 // 1 string to match.
          return std::make_pair(11, 10);	 // "convert_double8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(name.data()+9, "loat16", 6) != 0)
          break;
        return std::make_pair(761, 10);	 // "convert_float16"
      case 'i':	 // 5 strings to match.
        if (memcmp(name.data()+9, "nt_", 3) != 0)
          break;
        switch (name[12]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[13] != 't')
            break;
          switch (name[14]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3679, 10);	 // "convert_int_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3859, 10);	 // "convert_int_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3799, 10);	 // "convert_int_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3739, 10);	 // "convert_int_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+13, "at", 2) != 0)
            break;
          return std::make_pair(3919, 10);	 // "convert_int_sat"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+9, "hort16", 6) != 0)
          break;
        return std::make_pair(2469, 10);	 // "convert_short16"
      case 'u':	 // 6 strings to match.
        switch (name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(name.data()+10, "har16", 5) != 0)
            break;
          return std::make_pair(1851, 10);	 // "convert_uchar16"
        case 'l':	 // 1 string to match.
          if (memcmp(name.data()+10, "ong16", 5) != 0)
            break;
          return std::make_pair(5487, 10);	 // "convert_ulong16"
        case 's':	 // 4 strings to match.
          if (memcmp(name.data()+10, "hort", 4) != 0)
            break;
          switch (name[14]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(3029, 10);	 // "convert_ushort2"
          case '3':	 // 1 string to match.
            return std::make_pair(3039, 10);	 // "convert_ushort3"
          case '4':	 // 1 string to match.
            return std::make_pair(3049, 10);	 // "convert_ushort4"
          case '8':	 // 1 string to match.
            return std::make_pair(3059, 10);	 // "convert_ushort8"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(name.data()+1, "et_global_size", 14) != 0)
        break;
      return std::make_pair(6037, 1);	 // "get_global_size"
    }
    break;
  case 16:	 // 37 strings to match.
    if (memcmp(name.data()+0, "convert_", 8) != 0)
      break;
    switch (name[8]) {
    default: break;
    case 'c':	 // 5 strings to match.
      if (memcmp(name.data()+9, "har_", 4) != 0)
        break;
      switch (name[13]) {
      default: break;
      case 'r':	 // 4 strings to match.
        if (name[14] != 't')
          break;
        switch (name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(921, 10);	 // "convert_char_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1121, 10);	 // "convert_char_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1051, 10);	 // "convert_char_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(981, 10);	 // "convert_char_rtz"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+14, "at", 2) != 0)
          break;
        return std::make_pair(1181, 10);	 // "convert_char_sat"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(name.data()+9, "ouble16", 7) != 0)
        break;
      return std::make_pair(21, 10);	 // "convert_double16"
    case 'i':	 // 20 strings to match.
      if (memcmp(name.data()+9, "nt", 2) != 0)
        break;
      switch (name[11]) {
      default: break;
      case '2':	 // 5 strings to match.
        if (name[12] != '_')
          break;
        switch (name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[14] != 't')
            break;
          switch (name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3689, 10);	 // "convert_int2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3869, 10);	 // "convert_int2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3809, 10);	 // "convert_int2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3749, 10);	 // "convert_int2_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(3929, 10);	 // "convert_int2_sat"
        }
        break;
      case '3':	 // 5 strings to match.
        if (name[12] != '_')
          break;
        switch (name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[14] != 't')
            break;
          switch (name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3699, 10);	 // "convert_int3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3879, 10);	 // "convert_int3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3819, 10);	 // "convert_int3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3759, 10);	 // "convert_int3_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(3939, 10);	 // "convert_int3_sat"
        }
        break;
      case '4':	 // 5 strings to match.
        if (name[12] != '_')
          break;
        switch (name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[14] != 't')
            break;
          switch (name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3709, 10);	 // "convert_int4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3889, 10);	 // "convert_int4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3829, 10);	 // "convert_int4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3769, 10);	 // "convert_int4_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(3949, 10);	 // "convert_int4_sat"
        }
        break;
      case '8':	 // 5 strings to match.
        if (name[12] != '_')
          break;
        switch (name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[14] != 't')
            break;
          switch (name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3719, 10);	 // "convert_int8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3899, 10);	 // "convert_int8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3839, 10);	 // "convert_int8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3779, 10);	 // "convert_int8_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(3959, 10);	 // "convert_int8_sat"
        }
        break;
      }
      break;
    case 'l':	 // 5 strings to match.
      if (memcmp(name.data()+9, "ong_", 4) != 0)
        break;
      switch (name[13]) {
      default: break;
      case 'r':	 // 4 strings to match.
        if (name[14] != 't')
          break;
        switch (name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(4897, 10);	 // "convert_long_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(5077, 10);	 // "convert_long_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5017, 10);	 // "convert_long_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4957, 10);	 // "convert_long_rtz"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+14, "at", 2) != 0)
          break;
        return std::make_pair(5137, 10);	 // "convert_long_sat"
      }
      break;
    case 'u':	 // 6 strings to match.
      switch (name[9]) {
      default: break;
      case 'i':	 // 5 strings to match.
        if (memcmp(name.data()+10, "nt_", 3) != 0)
          break;
        switch (name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[14] != 't')
            break;
          switch (name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4297, 10);	 // "convert_uint_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4477, 10);	 // "convert_uint_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4417, 10);	 // "convert_uint_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4357, 10);	 // "convert_uint_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(4537, 10);	 // "convert_uint_sat"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+10, "hort16", 6) != 0)
          break;
        return std::make_pair(3069, 10);	 // "convert_ushort16"
      }
      break;
    }
    break;
  case 17:	 // 86 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 85 strings to match.
      if (memcmp(name.data()+1, "onvert_", 7) != 0)
        break;
      switch (name[8]) {
      default: break;
      case 'c':	 // 20 strings to match.
        if (memcmp(name.data()+9, "har", 3) != 0)
          break;
        switch (name[12]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(931, 10);	 // "convert_char2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1131, 10);	 // "convert_char2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1061, 10);	 // "convert_char2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(991, 10);	 // "convert_char2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(1191, 10);	 // "convert_char2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(941, 10);	 // "convert_char3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1141, 10);	 // "convert_char3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1071, 10);	 // "convert_char3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1011, 10);	 // "convert_char3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(1201, 10);	 // "convert_char3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(951, 10);	 // "convert_char4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1151, 10);	 // "convert_char4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1081, 10);	 // "convert_char4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1021, 10);	 // "convert_char4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(1211, 10);	 // "convert_char4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(961, 10);	 // "convert_char8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1161, 10);	 // "convert_char8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1091, 10);	 // "convert_char8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1031, 10);	 // "convert_char8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(1231, 10);	 // "convert_char8_sat"
          }
          break;
        }
        break;
      case 'f':	 // 5 strings to match.
        if (memcmp(name.data()+9, "loat_", 5) != 0)
          break;
        switch (name[14]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[15] != 't')
            break;
          switch (name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(771, 10);	 // "convert_float_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1551, 10);	 // "convert_float_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1331, 10);	 // "convert_float_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(831, 10);	 // "convert_float_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+15, "at", 2) != 0)
            break;
          return std::make_pair(1611, 10);	 // "convert_float_sat"
        }
        break;
      case 'i':	 // 5 strings to match.
        if (memcmp(name.data()+9, "nt16_", 5) != 0)
          break;
        switch (name[14]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[15] != 't')
            break;
          switch (name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3729, 10);	 // "convert_int16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3909, 10);	 // "convert_int16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3849, 10);	 // "convert_int16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3789, 10);	 // "convert_int16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+15, "at", 2) != 0)
            break;
          return std::make_pair(3969, 10);	 // "convert_int16_sat"
        }
        break;
      case 'l':	 // 20 strings to match.
        if (memcmp(name.data()+9, "ong", 3) != 0)
          break;
        switch (name[12]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(4907, 10);	 // "convert_long2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(5087, 10);	 // "convert_long2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5027, 10);	 // "convert_long2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(4967, 10);	 // "convert_long2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(5147, 10);	 // "convert_long2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(4917, 10);	 // "convert_long3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(5097, 10);	 // "convert_long3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5037, 10);	 // "convert_long3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(4977, 10);	 // "convert_long3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(5157, 10);	 // "convert_long3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(4927, 10);	 // "convert_long4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(5107, 10);	 // "convert_long4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5047, 10);	 // "convert_long4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(4987, 10);	 // "convert_long4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(5167, 10);	 // "convert_long4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (name[13] != '_')
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(4937, 10);	 // "convert_long8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(5117, 10);	 // "convert_long8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5057, 10);	 // "convert_long8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(4997, 10);	 // "convert_long8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(5177, 10);	 // "convert_long8_sat"
          }
          break;
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(name.data()+9, "hort_", 5) != 0)
          break;
        switch (name[14]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[15] != 't')
            break;
          switch (name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2479, 10);	 // "convert_short_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2659, 10);	 // "convert_short_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2599, 10);	 // "convert_short_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2539, 10);	 // "convert_short_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+15, "at", 2) != 0)
            break;
          return std::make_pair(2719, 10);	 // "convert_short_sat"
        }
        break;
      case 'u':	 // 30 strings to match.
        switch (name[9]) {
        default: break;
        case 'c':	 // 5 strings to match.
          if (memcmp(name.data()+10, "har_", 4) != 0)
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(1861, 10);	 // "convert_uchar_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2041, 10);	 // "convert_uchar_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1981, 10);	 // "convert_uchar_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1921, 10);	 // "convert_uchar_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(2101, 10);	 // "convert_uchar_sat"
          }
          break;
        case 'i':	 // 20 strings to match.
          if (memcmp(name.data()+10, "nt", 2) != 0)
            break;
          switch (name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (name[13] != '_')
              break;
            switch (name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[15] != 't')
                break;
              switch (name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(4307, 10);	 // "convert_uint2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(4487, 10);	 // "convert_uint2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(4427, 10);	 // "convert_uint2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(4367, 10);	 // "convert_uint2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(4547, 10);	 // "convert_uint2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (name[13] != '_')
              break;
            switch (name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[15] != 't')
                break;
              switch (name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(4317, 10);	 // "convert_uint3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(4497, 10);	 // "convert_uint3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(4437, 10);	 // "convert_uint3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(4377, 10);	 // "convert_uint3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(4557, 10);	 // "convert_uint3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (name[13] != '_')
              break;
            switch (name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[15] != 't')
                break;
              switch (name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(4327, 10);	 // "convert_uint4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(4507, 10);	 // "convert_uint4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(4447, 10);	 // "convert_uint4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(4387, 10);	 // "convert_uint4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(4567, 10);	 // "convert_uint4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (name[13] != '_')
              break;
            switch (name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[15] != 't')
                break;
              switch (name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(4337, 10);	 // "convert_uint8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(4517, 10);	 // "convert_uint8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(4457, 10);	 // "convert_uint8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(4397, 10);	 // "convert_uint8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(4577, 10);	 // "convert_uint8_sat"
            }
            break;
          }
          break;
        case 'l':	 // 5 strings to match.
          if (memcmp(name.data()+10, "ong_", 4) != 0)
            break;
          switch (name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[15] != 't')
              break;
            switch (name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(5497, 10);	 // "convert_ulong_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(5677, 10);	 // "convert_ulong_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5617, 10);	 // "convert_ulong_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(5557, 10);	 // "convert_ulong_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(5737, 10);	 // "convert_ulong_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(name.data()+1, "et_global_offset", 16) != 0)
        break;
      return std::make_pair(6043, 1);	 // "get_global_offset"
    }
    break;
  case 18:	 // 107 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 105 strings to match.
      if (memcmp(name.data()+1, "onvert_", 7) != 0)
        break;
      switch (name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(name.data()+9, "har16_", 6) != 0)
          break;
        switch (name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[16] != 't')
            break;
          switch (name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(971, 10);	 // "convert_char16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1171, 10);	 // "convert_char16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1101, 10);	 // "convert_char16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1041, 10);	 // "convert_char16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(1241, 10);	 // "convert_char16_sat"
        }
        break;
      case 'd':	 // 5 strings to match.
        if (memcmp(name.data()+9, "ouble_", 6) != 0)
          break;
        switch (name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[16] != 't')
            break;
          switch (name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(31, 10);	 // "convert_double_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(231, 10);	 // "convert_double_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(161, 10);	 // "convert_double_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(91, 10);	 // "convert_double_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(291, 10);	 // "convert_double_sat"
        }
        break;
      case 'f':	 // 20 strings to match.
        if (memcmp(name.data()+9, "loat", 4) != 0)
          break;
        switch (name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(781, 10);	 // "convert_float2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1561, 10);	 // "convert_float2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1441, 10);	 // "convert_float2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(841, 10);	 // "convert_float2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(1621, 10);	 // "convert_float2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(791, 10);	 // "convert_float3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1571, 10);	 // "convert_float3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1511, 10);	 // "convert_float3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(891, 10);	 // "convert_float3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(1631, 10);	 // "convert_float3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(801, 10);	 // "convert_float4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1581, 10);	 // "convert_float4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1521, 10);	 // "convert_float4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1001, 10);	 // "convert_float4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(1641, 10);	 // "convert_float4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(811, 10);	 // "convert_float8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(1591, 10);	 // "convert_float8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(1531, 10);	 // "convert_float8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(1111, 10);	 // "convert_float8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(1651, 10);	 // "convert_float8_sat"
          }
          break;
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(name.data()+9, "ong16_", 6) != 0)
          break;
        switch (name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[16] != 't')
            break;
          switch (name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4947, 10);	 // "convert_long16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(5127, 10);	 // "convert_long16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(5067, 10);	 // "convert_long16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(5007, 10);	 // "convert_long16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(5187, 10);	 // "convert_long16_sat"
        }
        break;
      case 's':	 // 20 strings to match.
        if (memcmp(name.data()+9, "hort", 4) != 0)
          break;
        switch (name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2489, 10);	 // "convert_short2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2669, 10);	 // "convert_short2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2609, 10);	 // "convert_short2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2549, 10);	 // "convert_short2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(2729, 10);	 // "convert_short2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2499, 10);	 // "convert_short3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2679, 10);	 // "convert_short3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2619, 10);	 // "convert_short3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2559, 10);	 // "convert_short3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(2739, 10);	 // "convert_short3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2509, 10);	 // "convert_short4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2689, 10);	 // "convert_short4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2629, 10);	 // "convert_short4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2569, 10);	 // "convert_short4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(2749, 10);	 // "convert_short4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (name[14] != '_')
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2519, 10);	 // "convert_short8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2699, 10);	 // "convert_short8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2639, 10);	 // "convert_short8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2579, 10);	 // "convert_short8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(2759, 10);	 // "convert_short8_sat"
          }
          break;
        }
        break;
      case 'u':	 // 50 strings to match.
        switch (name[9]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(name.data()+10, "har", 3) != 0)
            break;
          switch (name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(1871, 10);	 // "convert_uchar2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(2051, 10);	 // "convert_uchar2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(1991, 10);	 // "convert_uchar2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(1931, 10);	 // "convert_uchar2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(2111, 10);	 // "convert_uchar2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(1881, 10);	 // "convert_uchar3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(2061, 10);	 // "convert_uchar3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(2001, 10);	 // "convert_uchar3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(1941, 10);	 // "convert_uchar3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(2121, 10);	 // "convert_uchar3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(1891, 10);	 // "convert_uchar4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(2071, 10);	 // "convert_uchar4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(2011, 10);	 // "convert_uchar4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(1951, 10);	 // "convert_uchar4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(2131, 10);	 // "convert_uchar4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(1901, 10);	 // "convert_uchar8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(2081, 10);	 // "convert_uchar8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(2021, 10);	 // "convert_uchar8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(1961, 10);	 // "convert_uchar8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(2141, 10);	 // "convert_uchar8_sat"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(name.data()+10, "nt16_", 5) != 0)
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(4347, 10);	 // "convert_uint16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(4527, 10);	 // "convert_uint16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(4467, 10);	 // "convert_uint16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(4407, 10);	 // "convert_uint16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(4587, 10);	 // "convert_uint16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(name.data()+10, "ong", 3) != 0)
            break;
          switch (name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(5507, 10);	 // "convert_ulong2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(5687, 10);	 // "convert_ulong2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(5627, 10);	 // "convert_ulong2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(5567, 10);	 // "convert_ulong2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(5747, 10);	 // "convert_ulong2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(5517, 10);	 // "convert_ulong3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(5697, 10);	 // "convert_ulong3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(5637, 10);	 // "convert_ulong3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(5577, 10);	 // "convert_ulong3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(5757, 10);	 // "convert_ulong3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(5527, 10);	 // "convert_ulong4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(5707, 10);	 // "convert_ulong4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(5647, 10);	 // "convert_ulong4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(5587, 10);	 // "convert_ulong4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(5767, 10);	 // "convert_ulong4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (name[14] != '_')
              break;
            switch (name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (name[16] != 't')
                break;
              switch (name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(5537, 10);	 // "convert_ulong8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(5717, 10);	 // "convert_ulong8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(5657, 10);	 // "convert_ulong8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(5597, 10);	 // "convert_ulong8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(5777, 10);	 // "convert_ulong8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(name.data()+10, "hort_", 5) != 0)
            break;
          switch (name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[16] != 't')
              break;
            switch (name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3079, 10);	 // "convert_ushort_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3259, 10);	 // "convert_ushort_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3199, 10);	 // "convert_ushort_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3139, 10);	 // "convert_ushort_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(3319, 10);	 // "convert_ushort_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(name.data()+1, "et_", 3) != 0)
        break;
      switch (name[4]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(name.data()+5, "um_sub_groups", 13) != 0)
          break;
        return std::make_pair(6279, 1);	 // "get_num_sub_groups"
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+5, "ub_group_size", 13) != 0)
          break;
        return std::make_pair(6280, 1);	 // "get_sub_group_size"
      }
      break;
    }
    break;
  case 19:	 // 64 strings to match.
    if (memcmp(name.data()+0, "convert_", 8) != 0)
      break;
    switch (name[8]) {
    default: break;
    case 'd':	 // 20 strings to match.
      if (memcmp(name.data()+9, "ouble", 5) != 0)
        break;
      switch (name[14]) {
      default: break;
      case '2':	 // 5 strings to match.
        if (name[15] != '_')
          break;
        switch (name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[17] != 't')
            break;
          switch (name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(41, 10);	 // "convert_double2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(241, 10);	 // "convert_double2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(171, 10);	 // "convert_double2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(101, 10);	 // "convert_double2_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(301, 10);	 // "convert_double2_sat"
        }
        break;
      case '3':	 // 5 strings to match.
        if (name[15] != '_')
          break;
        switch (name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[17] != 't')
            break;
          switch (name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(51, 10);	 // "convert_double3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(251, 10);	 // "convert_double3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(181, 10);	 // "convert_double3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(121, 10);	 // "convert_double3_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(311, 10);	 // "convert_double3_sat"
        }
        break;
      case '4':	 // 5 strings to match.
        if (name[15] != '_')
          break;
        switch (name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[17] != 't')
            break;
          switch (name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(61, 10);	 // "convert_double4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(261, 10);	 // "convert_double4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(191, 10);	 // "convert_double4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(131, 10);	 // "convert_double4_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(321, 10);	 // "convert_double4_sat"
        }
        break;
      case '8':	 // 5 strings to match.
        if (name[15] != '_')
          break;
        switch (name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[17] != 't')
            break;
          switch (name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(71, 10);	 // "convert_double8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(271, 10);	 // "convert_double8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(201, 10);	 // "convert_double8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(141, 10);	 // "convert_double8_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(341, 10);	 // "convert_double8_sat"
        }
        break;
      }
      break;
    case 'f':	 // 5 strings to match.
      if (memcmp(name.data()+9, "loat16_", 7) != 0)
        break;
      switch (name[16]) {
      default: break;
      case 'r':	 // 4 strings to match.
        if (name[17] != 't')
          break;
        switch (name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(821, 10);	 // "convert_float16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1601, 10);	 // "convert_float16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1541, 10);	 // "convert_float16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1221, 10);	 // "convert_float16_rtz"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+17, "at", 2) != 0)
          break;
        return std::make_pair(1661, 10);	 // "convert_float16_sat"
      }
      break;
    case 'i':	 // 4 strings to match.
      if (memcmp(name.data()+9, "nt_sat_rt", 9) != 0)
        break;
      switch (name[18]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(3979, 10);	 // "convert_int_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(4159, 10);	 // "convert_int_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(4099, 10);	 // "convert_int_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(4039, 10);	 // "convert_int_sat_rtz"
      }
      break;
    case 's':	 // 5 strings to match.
      if (memcmp(name.data()+9, "hort16_", 7) != 0)
        break;
      switch (name[16]) {
      default: break;
      case 'r':	 // 4 strings to match.
        if (name[17] != 't')
          break;
        switch (name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2529, 10);	 // "convert_short16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2709, 10);	 // "convert_short16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2649, 10);	 // "convert_short16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2589, 10);	 // "convert_short16_rtz"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+17, "at", 2) != 0)
          break;
        return std::make_pair(2769, 10);	 // "convert_short16_sat"
      }
      break;
    case 'u':	 // 30 strings to match.
      switch (name[9]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(name.data()+10, "har16_", 6) != 0)
          break;
        switch (name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[17] != 't')
            break;
          switch (name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1911, 10);	 // "convert_uchar16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2091, 10);	 // "convert_uchar16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2031, 10);	 // "convert_uchar16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1971, 10);	 // "convert_uchar16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(2151, 10);	 // "convert_uchar16_sat"
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(name.data()+10, "ong16_", 6) != 0)
          break;
        switch (name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[17] != 't')
            break;
          switch (name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(5547, 10);	 // "convert_ulong16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(5727, 10);	 // "convert_ulong16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(5667, 10);	 // "convert_ulong16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(5607, 10);	 // "convert_ulong16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(5787, 10);	 // "convert_ulong16_sat"
        }
        break;
      case 's':	 // 20 strings to match.
        if (memcmp(name.data()+10, "hort", 4) != 0)
          break;
        switch (name[14]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (name[15] != '_')
            break;
          switch (name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[17] != 't')
              break;
            switch (name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3089, 10);	 // "convert_ushort2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3269, 10);	 // "convert_ushort2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3209, 10);	 // "convert_ushort2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3149, 10);	 // "convert_ushort2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(3329, 10);	 // "convert_ushort2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (name[15] != '_')
            break;
          switch (name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[17] != 't')
              break;
            switch (name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3099, 10);	 // "convert_ushort3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3279, 10);	 // "convert_ushort3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3219, 10);	 // "convert_ushort3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3159, 10);	 // "convert_ushort3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(3339, 10);	 // "convert_ushort3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (name[15] != '_')
            break;
          switch (name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[17] != 't')
              break;
            switch (name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3109, 10);	 // "convert_ushort4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3289, 10);	 // "convert_ushort4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3229, 10);	 // "convert_ushort4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3169, 10);	 // "convert_ushort4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(3349, 10);	 // "convert_ushort4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (name[15] != '_')
            break;
          switch (name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (name[17] != 't')
              break;
            switch (name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(3119, 10);	 // "convert_ushort8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(3299, 10);	 // "convert_ushort8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(3239, 10);	 // "convert_ushort8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(3179, 10);	 // "convert_ushort8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(3359, 10);	 // "convert_ushort8_sat"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 20:	 // 38 strings to match.
    if (memcmp(name.data()+0, "convert_", 8) != 0)
      break;
    switch (name[8]) {
    default: break;
    case 'c':	 // 4 strings to match.
      if (memcmp(name.data()+9, "har_sat_rt", 10) != 0)
        break;
      switch (name[19]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1251, 10);	 // "convert_char_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1451, 10);	 // "convert_char_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1381, 10);	 // "convert_char_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1311, 10);	 // "convert_char_sat_rtz"
      }
      break;
    case 'd':	 // 5 strings to match.
      if (memcmp(name.data()+9, "ouble16_", 8) != 0)
        break;
      switch (name[17]) {
      default: break;
      case 'r':	 // 4 strings to match.
        if (name[18] != 't')
          break;
        switch (name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(81, 10);	 // "convert_double16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(281, 10);	 // "convert_double16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(211, 10);	 // "convert_double16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(151, 10);	 // "convert_double16_rtz"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(name.data()+18, "at", 2) != 0)
          break;
        return std::make_pair(351, 10);	 // "convert_double16_sat"
      }
      break;
    case 'i':	 // 16 strings to match.
      if (memcmp(name.data()+9, "nt", 2) != 0)
        break;
      switch (name[11]) {
      default: break;
      case '2':	 // 4 strings to match.
        if (memcmp(name.data()+12, "_sat_rt", 7) != 0)
          break;
        switch (name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3989, 10);	 // "convert_int2_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(4169, 10);	 // "convert_int2_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(4109, 10);	 // "convert_int2_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4049, 10);	 // "convert_int2_sat_rtz"
        }
        break;
      case '3':	 // 4 strings to match.
        if (memcmp(name.data()+12, "_sat_rt", 7) != 0)
          break;
        switch (name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(3999, 10);	 // "convert_int3_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(4179, 10);	 // "convert_int3_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(4119, 10);	 // "convert_int3_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4059, 10);	 // "convert_int3_sat_rtz"
        }
        break;
      case '4':	 // 4 strings to match.
        if (memcmp(name.data()+12, "_sat_rt", 7) != 0)
          break;
        switch (name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(4009, 10);	 // "convert_int4_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(4189, 10);	 // "convert_int4_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(4129, 10);	 // "convert_int4_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4069, 10);	 // "convert_int4_sat_rtz"
        }
        break;
      case '8':	 // 4 strings to match.
        if (memcmp(name.data()+12, "_sat_rt", 7) != 0)
          break;
        switch (name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(4019, 10);	 // "convert_int8_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(4199, 10);	 // "convert_int8_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(4139, 10);	 // "convert_int8_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4079, 10);	 // "convert_int8_sat_rtz"
        }
        break;
      }
      break;
    case 'l':	 // 4 strings to match.
      if (memcmp(name.data()+9, "ong_sat_rt", 10) != 0)
        break;
      switch (name[19]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(5197, 10);	 // "convert_long_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(5377, 10);	 // "convert_long_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(5317, 10);	 // "convert_long_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(5257, 10);	 // "convert_long_sat_rtz"
      }
      break;
    case 'u':	 // 9 strings to match.
      switch (name[9]) {
      default: break;
      case 'i':	 // 4 strings to match.
        if (memcmp(name.data()+10, "nt_sat_rt", 9) != 0)
          break;
        switch (name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(4597, 10);	 // "convert_uint_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(4777, 10);	 // "convert_uint_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(4717, 10);	 // "convert_uint_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(4657, 10);	 // "convert_uint_sat_rtz"
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(name.data()+10, "hort16_", 7) != 0)
          break;
        switch (name[17]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (name[18] != 't')
            break;
          switch (name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3129, 10);	 // "convert_ushort16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3309, 10);	 // "convert_ushort16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3249, 10);	 // "convert_ushort16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3189, 10);	 // "convert_ushort16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(name.data()+18, "at", 2) != 0)
            break;
          return std::make_pair(3369, 10);	 // "convert_ushort16_sat"
        }
        break;
      }
      break;
    }
    break;
  case 21:	 // 68 strings to match.
    if (memcmp(name.data()+0, "convert_", 8) != 0)
      break;
    switch (name[8]) {
    default: break;
    case 'c':	 // 16 strings to match.
      if (memcmp(name.data()+9, "har", 3) != 0)
        break;
      switch (name[12]) {
      default: break;
      case '2':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1261, 10);	 // "convert_char2_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1461, 10);	 // "convert_char2_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1391, 10);	 // "convert_char2_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1321, 10);	 // "convert_char2_sat_rtz"
        }
        break;
      case '3':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1271, 10);	 // "convert_char3_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1471, 10);	 // "convert_char3_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1401, 10);	 // "convert_char3_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1341, 10);	 // "convert_char3_sat_rtz"
        }
        break;
      case '4':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1281, 10);	 // "convert_char4_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1481, 10);	 // "convert_char4_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1411, 10);	 // "convert_char4_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1351, 10);	 // "convert_char4_sat_rtz"
        }
        break;
      case '8':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1291, 10);	 // "convert_char8_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1491, 10);	 // "convert_char8_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1421, 10);	 // "convert_char8_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1361, 10);	 // "convert_char8_sat_rtz"
        }
        break;
      }
      break;
    case 'f':	 // 4 strings to match.
      if (memcmp(name.data()+9, "loat_sat_rt", 11) != 0)
        break;
      switch (name[20]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1671, 10);	 // "convert_float_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(551, 10);	 // "convert_float_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1791, 10);	 // "convert_float_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1731, 10);	 // "convert_float_sat_rtz"
      }
      break;
    case 'i':	 // 4 strings to match.
      if (memcmp(name.data()+9, "nt16_sat_rt", 11) != 0)
        break;
      switch (name[20]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(4029, 10);	 // "convert_int16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(4209, 10);	 // "convert_int16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(4149, 10);	 // "convert_int16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(4089, 10);	 // "convert_int16_sat_rtz"
      }
      break;
    case 'l':	 // 16 strings to match.
      if (memcmp(name.data()+9, "ong", 3) != 0)
        break;
      switch (name[12]) {
      default: break;
      case '2':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(5207, 10);	 // "convert_long2_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(5387, 10);	 // "convert_long2_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5327, 10);	 // "convert_long2_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(5267, 10);	 // "convert_long2_sat_rtz"
        }
        break;
      case '3':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(5217, 10);	 // "convert_long3_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(5397, 10);	 // "convert_long3_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5337, 10);	 // "convert_long3_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(5277, 10);	 // "convert_long3_sat_rtz"
        }
        break;
      case '4':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(5227, 10);	 // "convert_long4_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(5407, 10);	 // "convert_long4_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5347, 10);	 // "convert_long4_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(5287, 10);	 // "convert_long4_sat_rtz"
        }
        break;
      case '8':	 // 4 strings to match.
        if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(5237, 10);	 // "convert_long8_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(5417, 10);	 // "convert_long8_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5357, 10);	 // "convert_long8_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(5297, 10);	 // "convert_long8_sat_rtz"
        }
        break;
      }
      break;
    case 's':	 // 4 strings to match.
      if (memcmp(name.data()+9, "hort_sat_rt", 11) != 0)
        break;
      switch (name[20]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(2779, 10);	 // "convert_short_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(2959, 10);	 // "convert_short_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(2899, 10);	 // "convert_short_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(2839, 10);	 // "convert_short_sat_rtz"
      }
      break;
    case 'u':	 // 24 strings to match.
      switch (name[9]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(name.data()+10, "har_sat_rt", 10) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2161, 10);	 // "convert_uchar_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2341, 10);	 // "convert_uchar_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2281, 10);	 // "convert_uchar_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2221, 10);	 // "convert_uchar_sat_rtz"
        }
        break;
      case 'i':	 // 16 strings to match.
        if (memcmp(name.data()+10, "nt", 2) != 0)
          break;
        switch (name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4607, 10);	 // "convert_uint2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4787, 10);	 // "convert_uint2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4727, 10);	 // "convert_uint2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4667, 10);	 // "convert_uint2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4617, 10);	 // "convert_uint3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4797, 10);	 // "convert_uint3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4737, 10);	 // "convert_uint3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4677, 10);	 // "convert_uint3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4627, 10);	 // "convert_uint4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4807, 10);	 // "convert_uint4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4747, 10);	 // "convert_uint4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4687, 10);	 // "convert_uint4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4637, 10);	 // "convert_uint8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4817, 10);	 // "convert_uint8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4757, 10);	 // "convert_uint8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4697, 10);	 // "convert_uint8_sat_rtz"
          }
          break;
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(name.data()+10, "ong_sat_rt", 10) != 0)
          break;
        switch (name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(5797, 10);	 // "convert_ulong_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(5977, 10);	 // "convert_ulong_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5917, 10);	 // "convert_ulong_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(5857, 10);	 // "convert_ulong_sat_rtz"
        }
        break;
      }
      break;
    }
    break;
  case 22:	 // 85 strings to match.
    switch (name[0]) {
    default: break;
    case 'c':	 // 84 strings to match.
      if (memcmp(name.data()+1, "onvert_", 7) != 0)
        break;
      switch (name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(name.data()+9, "har16_sat_rt", 12) != 0)
          break;
        switch (name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1301, 10);	 // "convert_char16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1501, 10);	 // "convert_char16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1431, 10);	 // "convert_char16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1371, 10);	 // "convert_char16_sat_rtz"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(name.data()+9, "ouble_sat_rt", 12) != 0)
          break;
        switch (name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(361, 10);	 // "convert_double_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(561, 10);	 // "convert_double_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(491, 10);	 // "convert_double_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(421, 10);	 // "convert_double_sat_rtz"
        }
        break;
      case 'f':	 // 16 strings to match.
        if (memcmp(name.data()+9, "loat", 4) != 0)
          break;
        switch (name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1681, 10);	 // "convert_float2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(661, 10);	 // "convert_float2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1, 10);	 // "convert_float2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1741, 10);	 // "convert_float2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1691, 10);	 // "convert_float3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(671, 10);	 // "convert_float3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(111, 10);	 // "convert_float3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1751, 10);	 // "convert_float3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1701, 10);	 // "convert_float4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(681, 10);	 // "convert_float4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(221, 10);	 // "convert_float4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1761, 10);	 // "convert_float4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1711, 10);	 // "convert_float8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(691, 10);	 // "convert_float8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(331, 10);	 // "convert_float8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1771, 10);	 // "convert_float8_sat_rtz"
          }
          break;
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(name.data()+9, "ong16_sat_rt", 12) != 0)
          break;
        switch (name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(5247, 10);	 // "convert_long16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(5427, 10);	 // "convert_long16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5367, 10);	 // "convert_long16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(5307, 10);	 // "convert_long16_sat_rtz"
        }
        break;
      case 's':	 // 16 strings to match.
        if (memcmp(name.data()+9, "hort", 4) != 0)
          break;
        switch (name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2789, 10);	 // "convert_short2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2969, 10);	 // "convert_short2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2909, 10);	 // "convert_short2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2849, 10);	 // "convert_short2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2799, 10);	 // "convert_short3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2979, 10);	 // "convert_short3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2919, 10);	 // "convert_short3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2859, 10);	 // "convert_short3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2809, 10);	 // "convert_short4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2989, 10);	 // "convert_short4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2929, 10);	 // "convert_short4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2869, 10);	 // "convert_short4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(2819, 10);	 // "convert_short8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(2999, 10);	 // "convert_short8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(2939, 10);	 // "convert_short8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(2879, 10);	 // "convert_short8_sat_rtz"
          }
          break;
        }
        break;
      case 'u':	 // 40 strings to match.
        switch (name[9]) {
        default: break;
        case 'c':	 // 16 strings to match.
          if (memcmp(name.data()+10, "har", 3) != 0)
            break;
          switch (name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2171, 10);	 // "convert_uchar2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2351, 10);	 // "convert_uchar2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2291, 10);	 // "convert_uchar2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2231, 10);	 // "convert_uchar2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2181, 10);	 // "convert_uchar3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2361, 10);	 // "convert_uchar3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2301, 10);	 // "convert_uchar3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2241, 10);	 // "convert_uchar3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2191, 10);	 // "convert_uchar4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2371, 10);	 // "convert_uchar4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2311, 10);	 // "convert_uchar4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2251, 10);	 // "convert_uchar4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(2201, 10);	 // "convert_uchar8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(2381, 10);	 // "convert_uchar8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(2321, 10);	 // "convert_uchar8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(2261, 10);	 // "convert_uchar8_sat_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 4 strings to match.
          if (memcmp(name.data()+10, "nt16_sat_rt", 11) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(4647, 10);	 // "convert_uint16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(4827, 10);	 // "convert_uint16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(4767, 10);	 // "convert_uint16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(4707, 10);	 // "convert_uint16_sat_rtz"
          }
          break;
        case 'l':	 // 16 strings to match.
          if (memcmp(name.data()+10, "ong", 3) != 0)
            break;
          switch (name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(5807, 10);	 // "convert_ulong2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(5987, 10);	 // "convert_ulong2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5927, 10);	 // "convert_ulong2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(5867, 10);	 // "convert_ulong2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(5817, 10);	 // "convert_ulong3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(5997, 10);	 // "convert_ulong3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5937, 10);	 // "convert_ulong3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(5877, 10);	 // "convert_ulong3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(5827, 10);	 // "convert_ulong4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(6007, 10);	 // "convert_ulong4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5947, 10);	 // "convert_ulong4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(5887, 10);	 // "convert_ulong4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(5837, 10);	 // "convert_ulong8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(6017, 10);	 // "convert_ulong8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(5957, 10);	 // "convert_ulong8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(5897, 10);	 // "convert_ulong8_sat_rtz"
            }
            break;
          }
          break;
        case 's':	 // 4 strings to match.
          if (memcmp(name.data()+10, "hort_sat_rt", 11) != 0)
            break;
          switch (name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3379, 10);	 // "convert_ushort_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3559, 10);	 // "convert_ushort_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3499, 10);	 // "convert_ushort_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3439, 10);	 // "convert_ushort_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(name.data()+1, "et_max_sub_group_size", 21) != 0)
        break;
      return std::make_pair(6278, 1);	 // "get_max_sub_group_size"
    }
    break;
  case 23:	 // 48 strings to match.
    if (memcmp(name.data()+0, "convert_", 8) != 0)
      break;
    switch (name[8]) {
    default: break;
    case 'd':	 // 16 strings to match.
      if (memcmp(name.data()+9, "ouble", 5) != 0)
        break;
      switch (name[14]) {
      default: break;
      case '2':	 // 4 strings to match.
        if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
          break;
        switch (name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(371, 10);	 // "convert_double2_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(571, 10);	 // "convert_double2_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(501, 10);	 // "convert_double2_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(431, 10);	 // "convert_double2_sat_rtz"
        }
        break;
      case '3':	 // 4 strings to match.
        if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
          break;
        switch (name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(381, 10);	 // "convert_double3_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(581, 10);	 // "convert_double3_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(511, 10);	 // "convert_double3_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(451, 10);	 // "convert_double3_sat_rtz"
        }
        break;
      case '4':	 // 4 strings to match.
        if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
          break;
        switch (name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(391, 10);	 // "convert_double4_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(591, 10);	 // "convert_double4_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(521, 10);	 // "convert_double4_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(461, 10);	 // "convert_double4_sat_rtz"
        }
        break;
      case '8':	 // 4 strings to match.
        if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
          break;
        switch (name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(401, 10);	 // "convert_double8_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(601, 10);	 // "convert_double8_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(531, 10);	 // "convert_double8_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(471, 10);	 // "convert_double8_sat_rtz"
        }
        break;
      }
      break;
    case 'f':	 // 4 strings to match.
      if (memcmp(name.data()+9, "loat16_sat_rt", 13) != 0)
        break;
      switch (name[22]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1721, 10);	 // "convert_float16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(701, 10);	 // "convert_float16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(441, 10);	 // "convert_float16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1781, 10);	 // "convert_float16_sat_rtz"
      }
      break;
    case 's':	 // 4 strings to match.
      if (memcmp(name.data()+9, "hort16_sat_rt", 13) != 0)
        break;
      switch (name[22]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(2829, 10);	 // "convert_short16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(3009, 10);	 // "convert_short16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(2949, 10);	 // "convert_short16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(2889, 10);	 // "convert_short16_sat_rtz"
      }
      break;
    case 'u':	 // 24 strings to match.
      switch (name[9]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(name.data()+10, "har16_sat_rt", 12) != 0)
          break;
        switch (name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(2211, 10);	 // "convert_uchar16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(2391, 10);	 // "convert_uchar16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(2331, 10);	 // "convert_uchar16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(2271, 10);	 // "convert_uchar16_sat_rtz"
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(name.data()+10, "ong16_sat_rt", 12) != 0)
          break;
        switch (name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(5847, 10);	 // "convert_ulong16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(6027, 10);	 // "convert_ulong16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(5967, 10);	 // "convert_ulong16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(5907, 10);	 // "convert_ulong16_sat_rtz"
        }
        break;
      case 's':	 // 16 strings to match.
        if (memcmp(name.data()+10, "hort", 4) != 0)
          break;
        switch (name[14]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3389, 10);	 // "convert_ushort2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3569, 10);	 // "convert_ushort2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3509, 10);	 // "convert_ushort2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3449, 10);	 // "convert_ushort2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3399, 10);	 // "convert_ushort3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3579, 10);	 // "convert_ushort3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3519, 10);	 // "convert_ushort3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3459, 10);	 // "convert_ushort3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3409, 10);	 // "convert_ushort4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3589, 10);	 // "convert_ushort4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3529, 10);	 // "convert_ushort4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3469, 10);	 // "convert_ushort4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(name.data()+15, "_sat_rt", 7) != 0)
            break;
          switch (name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(3419, 10);	 // "convert_ushort8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(3599, 10);	 // "convert_ushort8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(3539, 10);	 // "convert_ushort8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(3479, 10);	 // "convert_ushort8_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 24:	 // 8 strings to match.
    if (memcmp(name.data()+0, "convert_", 8) != 0)
      break;
    switch (name[8]) {
    default: break;
    case 'd':	 // 4 strings to match.
      if (memcmp(name.data()+9, "ouble16_sat_rt", 14) != 0)
        break;
      switch (name[23]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(411, 10);	 // "convert_double16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(611, 10);	 // "convert_double16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(541, 10);	 // "convert_double16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(481, 10);	 // "convert_double16_sat_rtz"
      }
      break;
    case 'u':	 // 4 strings to match.
      if (memcmp(name.data()+9, "short16_sat_rt", 14) != 0)
        break;
      switch (name[23]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(3429, 10);	 // "convert_ushort16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(3609, 10);	 // "convert_ushort16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(3549, 10);	 // "convert_ushort16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(3489, 10);	 // "convert_ushort16_sat_rtz"
      }
      break;
    }
    break;
  }
  return std::make_pair(0, 0);
}


static QualType OCL2Qual(ASTContext &Context, OpenCLType Ty) {
  QualType RT = Context.VoidTy;
  switch (Ty.ID) {
  case OCLT_double:
    RT = Context.DoubleTy;
    break;
  case OCLT_char:
    RT = Context.CharTy;
    break;
  case OCLT_uchar:
    RT = Context.UnsignedCharTy;
    break;
  case OCLT_short:
    RT = Context.ShortTy;
    break;
  case OCLT_ushort:
    RT = Context.UnsignedShortTy;
    break;
  case OCLT_int:
    RT = Context.IntTy;
    break;
  case OCLT_float:
    RT = Context.FloatTy;
    break;
  case OCLT_uint:
    RT = Context.UnsignedIntTy;
    break;
  case OCLT_long:
    RT = Context.LongTy;
    break;
  case OCLT_half:
    RT = Context.HalfTy;
    break;
  case OCLT_ulong:
    RT = Context.UnsignedLongTy;
    break;
  case OCLT_bool:
    RT = Context.BoolTy;
    break;
  case OCLT_event_t:
    RT = Context.OCLEventTy;
    break;
  case OCLT_image1d_t:
    RT = Context.OCLImage1dROTy;
    break;
  case OCLT_image1d_array_t:
    RT = Context.OCLImage1dArrayROTy;
    break;
  case OCLT_image1d_buffer_t:
    RT = Context.OCLImage1dBufferROTy;
    break;
  case OCLT_image2d_t:
    RT = Context.OCLImage2dROTy;
    break;
  case OCLT_image2d_array_t:
    RT = Context.OCLImage2dArrayROTy;
    break;
  case OCLT_image3d_t:
    RT = Context.OCLImage3dROTy;
    break;
  case OCLT_intptr_t:
    RT = Context.getIntPtrType();
    break;
  case OCLT_ptrdiff_t:
    RT = Context.getPointerDiffType();
    break;
  case OCLT_sampler_t:
    RT = Context.OCLSamplerTy;
    break;
  case OCLT_size_t:
    RT = Context.getSizeType();
    break;
  case OCLT_uintptr_t:
    RT = Context.getUIntPtrType();
    break;
  case OCLT_void:
    RT = Context.VoidTy;
    break;
  }

  if (Ty.VectorWidth > 0)
    RT = Context.getExtVectorType(RT, Ty.VectorWidth);

  if (Ty.isPointer) {
    RT = Context.getAddrSpaceQualType(RT, Ty.AS);
    RT = Context.getPointerType(RT);
  }

  return RT;
}
