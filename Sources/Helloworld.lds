ENTRY(main)

SECTIONS
{
    . = 0x00400000 + SIZEOF_HEADERS;
    tinytxt : { *(.text) *(.data) *(.rodata) }
    /DISCARD/ : { *(.comment) }
}