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
PREFIX(prefix_1, {"--" COMMA nullptr})
#undef COMMA
#endif // PREFIX

/////////
// Groups

#ifdef OPTION

//////////
// Options

OPTION(prefix_0, "<input>", INPUT, Input, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_0, "<unknown>", UNKNOWN, Unknown, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "add-gnu-debuglink=", add_gnu_debuglink_eq, Joined, INVALID, add_gnu_debuglink, nullptr, 0, 0,
       "Add a .gnu_debuglink for <debug-file>", "debug-file", nullptr)
OPTION(prefix_1, "add-gnu-debuglink", add_gnu_debuglink, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "debug-file", nullptr)
OPTION(prefix_1, "add-section=", add_section_eq, Joined, INVALID, add_section, nullptr, 0, 0,
       "Make a section named <section> with the contents of <file>.", "section=file", nullptr)
OPTION(prefix_1, "add-section", add_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section=file", nullptr)
OPTION(prefix_1, "add-symbol=", add_symbol_eq, Joined, INVALID, add_symbol, nullptr, 0, 0,
       "Add new symbol <name> to .symtab. Accepted flags: global, local, weak, default, hidden, file, section, object, function, indirect-function. Accepted but ignored for compatibility: debug, constructor, warning, indirect, synthetic, unique-object, before.", "name=[section:]value[,flags]", nullptr)
OPTION(prefix_1, "add-symbol", add_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "name=[section:]value[,flags]", nullptr)
OPTION(prefix_1, "adjust-start", adjust_start, JoinedOrSeparate, INVALID, change_start, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "allow-broken-links", allow_broken_links, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Allow llvm-objcopy to remove sections even if it would leave invalid section references. The appropriate sh_link fields will be set to zero.", nullptr, nullptr)
OPTION(prefix_1, "binary-architecture=", binary_architecture_eq, Joined, INVALID, binary_architecture, nullptr, 0, 0,
       "Used when transforming an architecture-less format (such as binary) to another format", nullptr, nullptr)
OPTION(prefix_1, "binary-architecture", binary_architecture, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "build-id-link-dir=", build_id_link_dir_eq, Joined, INVALID, build_id_link_dir, nullptr, 0, 0,
       "Set directory for --build-id-link-input and --build-id-link-output to <dir>", "dir", nullptr)
OPTION(prefix_1, "build-id-link-dir", build_id_link_dir, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "dir", nullptr)
OPTION(prefix_1, "build-id-link-input=", build_id_link_input_eq, Joined, INVALID, build_id_link_input, nullptr, 0, 0,
       "Hard-link the input to <dir>/xx/xxx<suffix> name derived from hex build ID", "suffix", nullptr)
OPTION(prefix_1, "build-id-link-input", build_id_link_input, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "suffix", nullptr)
OPTION(prefix_1, "build-id-link-output=", build_id_link_output_eq, Joined, INVALID, build_id_link_output, nullptr, 0, 0,
       "Hard-link the output to <dir>/xx/xxx<suffix> name derived from hex build ID", "suffix", nullptr)
OPTION(prefix_1, "build-id-link-output", build_id_link_output, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "suffix", nullptr)
OPTION(prefix_2, "B", B, JoinedOrSeparate, INVALID, binary_architecture, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "change-start=", change_start_eq, Joined, INVALID, change_start, nullptr, 0, 0,
       "Add <incr> to the start address. Can be specified multiple times, all values will be applied cumulatively.", "incr", nullptr)
OPTION(prefix_1, "change-start", change_start, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "incr", nullptr)
OPTION(prefix_1, "compress-debug-sections=", compress_debug_sections_eq, Joined, INVALID, INVALID, nullptr, 0, 0,
       "Compress DWARF debug sections using specified style. Supported styles: 'zlib-gnu' and 'zlib'", "[ zlib | zlib-gnu ]", nullptr)
OPTION(prefix_1, "compress-debug-sections", compress_debug_sections, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "decompress-debug-sections", decompress_debug_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Decompress DWARF debug sections.", nullptr, nullptr)
OPTION(prefix_1, "disable-deterministic-archives", disable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Disable deterministic mode when copying archives (use real values for UIDs, GIDs, and timestamps).", nullptr, nullptr)
OPTION(prefix_1, "discard-all", discard_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all local symbols except file and section symbols", nullptr, nullptr)
OPTION(prefix_1, "discard-locals", discard_locals, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove compiler-generated local symbols, (e.g. symbols starting with .L)", nullptr, nullptr)
OPTION(prefix_1, "dump-section=", dump_section_eq, Joined, INVALID, dump_section, nullptr, 0, 0,
       "Dump contents of section named <section> into file <file>", "section=file", nullptr)
OPTION(prefix_1, "dump-section", dump_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section=file", nullptr)
OPTION(prefix_2, "D", D, Flag, INVALID, enable_deterministic_archives, nullptr, 0, 0,
       "Alias for --enable-deterministic-archives", nullptr, nullptr)
OPTION(prefix_1, "enable-deterministic-archives", enable_deterministic_archives, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Enable deterministic mode when copying archives (use zero for UIDs, GIDs, and timestamps).", nullptr, nullptr)
OPTION(prefix_1, "extract-dwo", extract_dwo, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all sections that are not DWARF .dwo sections from file", nullptr, nullptr)
OPTION(prefix_1, "extract-main-partition", extract_main_partition, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Extract main partition from the input file", nullptr, nullptr)
OPTION(prefix_1, "extract-partition=", extract_partition_eq, Joined, INVALID, extract_partition, nullptr, 0, 0,
       "Extract named partition from input file", "name", nullptr)
OPTION(prefix_1, "extract-partition", extract_partition, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "name", nullptr)
OPTION(prefix_2, "F", F, JoinedOrSeparate, INVALID, target, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "globalize-symbol=", globalize_symbol_eq, Joined, INVALID, globalize_symbol, nullptr, 0, 0,
       "Mark <symbol> as global", "symbol", nullptr)
OPTION(prefix_1, "globalize-symbols=", globalize_symbols_eq, Joined, INVALID, globalize_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and marks them global.", "filename", nullptr)
OPTION(prefix_1, "globalize-symbols", globalize_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "globalize-symbol", globalize_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_2, "G", G, JoinedOrSeparate, INVALID, keep_global_symbol, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, "g", g, Flag, INVALID, strip_debug, nullptr, 0, 0,
       "Alias for --strip-debug", nullptr, nullptr)
OPTION(prefix_1, "help", help, Flag, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, "h", h, Flag, INVALID, help, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "input-target=", input_target_eq, Joined, INVALID, input_target, nullptr, 0, 0,
       "Format of the input file", nullptr, "binary")
OPTION(prefix_1, "input-target", input_target, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, "binary")
OPTION(prefix_2, "I", I, JoinedOrSeparate, INVALID, input_target, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, "j", j, JoinedOrSeparate, INVALID, only_section, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "keep-file-symbols", keep_file_symbols, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Do not remove file symbols", nullptr, nullptr)
OPTION(prefix_1, "keep-global-symbol=", keep_global_symbol_eq, Joined, INVALID, keep_global_symbol, nullptr, 0, 0,
       "Convert all symbols except <symbol> to local. May be repeated to convert all except a set of symbols to local.", "symbol", nullptr)
OPTION(prefix_1, "keep-global-symbols=", keep_global_symbols_eq, Joined, INVALID, keep_global_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and runs as if --keep-global-symbol=<symbol> is set for each one. <filename> contains one symbol per line and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files.", "filename", nullptr)
OPTION(prefix_1, "keep-global-symbols", keep_global_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "keep-global-symbol", keep_global_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, "keep-section=", keep_section_eq, Joined, INVALID, keep_section, nullptr, 0, 0,
       "Keep <section>", "section", nullptr)
OPTION(prefix_1, "keep-section", keep_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_1, "keep-symbol=", keep_symbol_eq, Joined, INVALID, keep_symbol, nullptr, 0, 0,
       "Do not remove symbol <symbol>", "symbol", nullptr)
OPTION(prefix_1, "keep-symbols=", keep_symbols_eq, Joined, INVALID, keep_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and runs as if --keep-symbol=<symbol> is set for each one. <filename> contains one symbol per line and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files.", "filename", nullptr)
OPTION(prefix_1, "keep-symbols", keep_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "keep-symbol", keep_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_2, "K", K, JoinedOrSeparate, INVALID, keep_symbol, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "localize-hidden", localize_hidden, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Mark all symbols that have hidden or internal visibility as local", nullptr, nullptr)
OPTION(prefix_1, "localize-symbol=", localize_symbol_eq, Joined, INVALID, localize_symbol, nullptr, 0, 0,
       "Mark <symbol> as local", "symbol", nullptr)
OPTION(prefix_1, "localize-symbols=", localize_symbols_eq, Joined, INVALID, localize_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and marks them local.", "filename", nullptr)
OPTION(prefix_1, "localize-symbols", localize_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "localize-symbol", localize_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_2, "L", L, JoinedOrSeparate, INVALID, localize_symbol, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, "N", N, JoinedOrSeparate, INVALID, strip_symbol, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "only-keep-debug", only_keep_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Clear sections that would not be stripped by --strip-debug. Currently only implemented for COFF.", nullptr, nullptr)
OPTION(prefix_1, "only-section=", only_section_eq, Joined, INVALID, only_section, nullptr, 0, 0,
       "Remove all but <section>", "section", nullptr)
OPTION(prefix_1, "only-section", only_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_1, "output-target=", output_target_eq, Joined, INVALID, output_target, nullptr, 0, 0,
       "Format of the output file", nullptr, "binary")
OPTION(prefix_1, "output-target", output_target, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, "binary")
OPTION(prefix_2, "O", O, JoinedOrSeparate, INVALID, output_target, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "prefix-alloc-sections=", prefix_alloc_sections_eq, Joined, INVALID, prefix_alloc_sections, nullptr, 0, 0,
       "Add <prefix> to the start of every allocated section name", "prefix", nullptr)
OPTION(prefix_1, "prefix-alloc-sections", prefix_alloc_sections, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "prefix", nullptr)
OPTION(prefix_1, "prefix-symbols=", prefix_symbols_eq, Joined, INVALID, prefix_symbols, nullptr, 0, 0,
       "Add <prefix> to the start of every symbol name", "prefix", nullptr)
OPTION(prefix_1, "prefix-symbols", prefix_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "prefix", nullptr)
OPTION(prefix_1, "preserve-dates", preserve_dates, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Preserve access and modification timestamps", nullptr, nullptr)
OPTION(prefix_2, "p", p, Flag, INVALID, preserve_dates, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "redefine-sym=", redefine_symbol_eq, Joined, INVALID, redefine_symbol, nullptr, 0, 0,
       "Change the name of a symbol old to new", "old=new", nullptr)
OPTION(prefix_1, "redefine-syms=", redefine_symbols_eq, Joined, INVALID, redefine_symbols, nullptr, 0, 0,
       "Reads a list of symbol pairs from <filename> and runs as if --redefine-sym=<old>=<new> is set for each one. <filename> contains two symbols per line separated with whitespace and may contain comments beginning with '#'. Leading and trailing whitespace is stripped from each line. May be repeated to read symbols from many files.", "filename", nullptr)
OPTION(prefix_1, "redefine-syms", redefine_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "redefine-sym", redefine_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "old=new", nullptr)
OPTION(prefix_1, "regex", regex, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Permit regular expressions in name comparison", nullptr, nullptr)
OPTION(prefix_1, "remove-section=", remove_section_eq, Joined, INVALID, remove_section, nullptr, 0, 0,
       "Remove <section>", "section", nullptr)
OPTION(prefix_1, "remove-section", remove_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section", nullptr)
OPTION(prefix_1, "rename-section=", rename_section_eq, Joined, INVALID, rename_section, nullptr, 0, 0,
       "Renames a section from old to new, optionally with specified flags. Flags supported for GNU compatibility: alloc, load, noload, readonly, debug, code, data, rom, share, contents, merge, strings.", "old=new[,flag1,...]", nullptr)
OPTION(prefix_1, "rename-section", rename_section, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "old=new[,flag1,...]", nullptr)
OPTION(prefix_2, "R", R, JoinedOrSeparate, INVALID, remove_section, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "set-section-flags=", set_section_flags_eq, Joined, INVALID, set_section_flags, nullptr, 0, 0,
       "Set section flags for a given section. Flags supported for GNU compatibility: alloc, load, noload, readonly, debug, code, data, rom, share, contents, merge, strings.", "section=flag1[,flag2,...]", nullptr)
OPTION(prefix_1, "set-section-flags", set_section_flags, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "section=flag1[,flag2,...]", nullptr)
OPTION(prefix_1, "set-start=", set_start_eq, Joined, INVALID, set_start, nullptr, 0, 0,
       "Set the start address to <addr>. Overrides any previous --change-start or --adjust-start values.", "addr", nullptr)
OPTION(prefix_1, "set-start", set_start, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "addr", nullptr)
OPTION(prefix_1, "split-dwo=", split_dwo_eq, Joined, INVALID, split_dwo, nullptr, 0, 0,
       "Equivalent to extract-dwo on the input file to <dwo-file>, then strip-dwo on the input file", "dwo-file", nullptr)
OPTION(prefix_1, "split-dwo", split_dwo, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "dwo-file", nullptr)
OPTION(prefix_1, "strip-all-gnu", strip_all_gnu, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Compatible with GNU objcopy's --strip-all", nullptr, nullptr)
OPTION(prefix_1, "strip-all", strip_all, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove non-allocated sections outside segments. .gnu.warning* sections are not removed", nullptr, nullptr)
OPTION(prefix_1, "strip-debug", strip_debug, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all debug information", nullptr, nullptr)
OPTION(prefix_1, "strip-dwo", strip_dwo, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all DWARF .dwo sections from file", nullptr, nullptr)
OPTION(prefix_1, "strip-non-alloc", strip_non_alloc, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all non-allocated sections outside segments", nullptr, nullptr)
OPTION(prefix_1, "strip-sections", strip_sections, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all section headers and all sections not in segments", nullptr, nullptr)
OPTION(prefix_1, "strip-symbol=", strip_symbol_eq, Joined, INVALID, strip_symbol, nullptr, 0, 0,
       "Remove symbol <symbol>", "symbol", nullptr)
OPTION(prefix_1, "strip-symbols=", strip_symbols_eq, Joined, INVALID, strip_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and removes them.", "filename", nullptr)
OPTION(prefix_1, "strip-symbols", strip_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "strip-symbol", strip_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, "strip-unneeded-symbol=", strip_unneeded_symbol_eq, Joined, INVALID, strip_unneeded_symbol, nullptr, 0, 0,
       "Remove symbol <symbol> if it is not needed by relocations", "symbol", nullptr)
OPTION(prefix_1, "strip-unneeded-symbols=", strip_unneeded_symbols_eq, Joined, INVALID, strip_unneeded_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and removes them if they are not needed by relocations", "filename", nullptr)
OPTION(prefix_1, "strip-unneeded-symbols", strip_unneeded_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "strip-unneeded-symbol", strip_unneeded_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, "strip-unneeded", strip_unneeded, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Remove all symbols not needed by relocations", nullptr, nullptr)
OPTION(prefix_2, "S", S, Flag, INVALID, strip_all, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "target=", target_eq, Joined, INVALID, target, nullptr, 0, 0,
       "Format of the input and output file", nullptr, "binary")
OPTION(prefix_1, "target", target, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, nullptr, "binary")
OPTION(prefix_2, "U", U, Flag, INVALID, disable_deterministic_archives, nullptr, 0, 0,
       "Alias for --disable-deterministic-archives", nullptr, nullptr)
OPTION(prefix_1, "version", version, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Print the version and exit.", nullptr, nullptr)
OPTION(prefix_2, "V", V, Flag, INVALID, version, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_1, "weaken-symbol=", weaken_symbol_eq, Joined, INVALID, weaken_symbol, nullptr, 0, 0,
       "Mark <symbol> as weak", "symbol", nullptr)
OPTION(prefix_1, "weaken-symbols=", weaken_symbols_eq, Joined, INVALID, weaken_symbols, nullptr, 0, 0,
       "Reads a list of symbols from <filename> and marks them weak.", "filename", nullptr)
OPTION(prefix_1, "weaken-symbols", weaken_symbols, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "filename", nullptr)
OPTION(prefix_1, "weaken-symbol", weaken_symbol, Separate, INVALID, INVALID, nullptr, 0, 0, nullptr, "symbol", nullptr)
OPTION(prefix_1, "weaken", weaken, Flag, INVALID, INVALID, nullptr, 0, 0,
       "Mark all global symbols as weak", nullptr, nullptr)
OPTION(prefix_2, "W", W, JoinedOrSeparate, INVALID, weaken_symbol, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, "X", X, Flag, INVALID, discard_locals, nullptr, 0, 0, nullptr, nullptr, nullptr)
OPTION(prefix_2, "x", x, Flag, INVALID, discard_all, nullptr, 0, 0, nullptr, nullptr, nullptr)
#endif // OPTION

#ifdef OPTTABLE_ARG_INIT
//////////
// Option Values


#endif // OPTTABLE_ARG_INIT
