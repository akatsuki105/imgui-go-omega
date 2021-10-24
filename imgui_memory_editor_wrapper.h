#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

    typedef void *IggMemoryEditor;

    extern IggMemoryEditor IggNewMemoryEditor();
    extern void IggMemoryEditorDrawContents(IggMemoryEditor handle, void *mem_data, size_t mem_size, size_t base_display_addr);

#ifdef __cplusplus
}
#endif
