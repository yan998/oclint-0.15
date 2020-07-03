/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Option Parsing Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/////////
// Prefixes

#ifdef PREFIX
#define COMMA ,
PREFIX(prefix_0, {nullptr})
PREFIX(prefix_2, {"-" COMMA nullptr})
PREFIX(prefix_1, {"-" COMMA "--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION
OPTION(nullptr, "action group", action_group, Group, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "archs", archs, Flag, action_group, INVALID, nullptr, 0, 0,
       "Display the arch_types present in the input file", nullptr, nullptr)
OPTION(prefix_1, "help", help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, "h", h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "output", output, Separate, INVALID, INVALID, nullptr, 0, 0,
       "Create output file with specified name", nullptr, nullptr)
OPTION(prefix_2, "o", o, JoinedOrSeparate, INVALID, output, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "thin", thin, Separate, action_group, INVALID, nullptr, 0, 0,
       "Create a thin output file of specified arch_type from the fat input file. Requires -output option", nullptr, nullptr)
OPTION(prefix_1, "verify_arch", verify_arch, RemainingArgs, action_group, INVALID, nullptr, 0, 0,
       "Verify that the specified arch_types are present in the input file", nullptr, nullptr)
OPTION(prefix_1, "version", version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the version and exit.", nullptr, nullptr)
#endif // OPTION

#ifdef OPTTABLE_ARG_INIT
//////////
// Option Values


#endif // OPTTABLE_ARG_INIT
