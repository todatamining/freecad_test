include(../FreeCadMacros.cmake)

add_subdirectory(App)
if(BUILD_GUI)
    add_subdirectory(Gui)
endif(BUILD_GUI)

INSTALL(
    FILES
        Init.py
        InitGui.py
        TestSpreadsheet.py
        importXLSX.py
    DESTINATION
        Mod/Spreadsheet
)
