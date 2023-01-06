README file on project's level

Gathered files from:
- [0x02-functions_nested_loops](https://github.com/codepraycode/alx-low_level_programming/tree/master/0x02-functions_nested_loops)
- [0x04-more_functions_nested_loops](https://github.com/codepraycode/alx-low_level_programming/tree/master/0x04-more_functions_nested_loops)
- [0x05-pointers_arrays_strings](https://github.com/codepraycode/alx-low_level_programming/tree/master/0x05-pointers_arrays_strings)
- [0x06-pointers_arrays_strings](https://github.com/codepraycode/alx-low_level_programming/tree/master/0x06-pointers_arrays_strings)
- [0x07-pointers_arrays_strings](https://github.com/codepraycode/alx-low_level_programming/tree/master/0x07-pointers_arrays_strings)

<p>I didn't get the explanation from the resource on the alx platform, but I understood better when I [visited a site](https://mrojasv.medium.com/static-libraries-in-c-bfb30ec1a591#:~:text=Therefore%2C%20static%20libraries%20in%20C%20are%20collections%20of,that%20are%20generally%20grouped%20according%20to%20their%20usefulness.). and I took notes, some of which are [below](#notes-taken).</p>

## Notes taken
- using `*.c` will include all the C files in directory.
- using `*.o` will include all the object (.o) files in directory.
- using `-c` will compile C file to object code of `.o` extension.
- use `ar` to create archive, e.g `ar -rc libholberton.a * .o`.
- using `-r` flag with *ar* will tell the program to insert, replace or update the oldest files in the library, with the new object files.
- using `-c` flag with *ar* will tesll the program to create a library if it doesn't already exits.
> we can use `-rc` together with *ar*.
- `ranlib` is used to index the library, indexing is to speed up the searching for symbols (e.g functions) withing the library so that the order won't matter.
- using `-t` with *ar* will list the object files in the library.


In this project there are bash scripts to create libraies
- `create_library`: you'll pass the desired libray name, and it will create the library with that name.
- `create_static_lib.sh`: this one is required by ht platform, so don't use it actually.
