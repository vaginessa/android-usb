/* Copyright (c) 2012 Cheese and Bacon Games, LLC */
/* This file is licensed under the MIT License. */
/* See the file docs/LICENSE.txt for the full license text. */

#ifndef game_world_h
#define game_world_h

#include "file_data.h"

#include <vector>
#include <string>

class Game_World{
public:

    std::vector<std::string> files;
    std::vector<std::string> selected_files;

    std::string starting_path;

    std::string current_path;

    void clear_world();
    void generate_world();

    std::string get_current_path();
    std::string path_to_filename(std::string path);
    std::string directory_up(std::string path);
    std::string run_command(std::string command);
    File_Data check_file(std::string path);
    void change_directory(std::string directory,bool rebuild=true);
    bool remove_file(std::string path);
    bool is_selected(std::string path);
    void update_selected_buttons();
    void select_file(std::string path,bool only_select=false);
    void select_all();
    void deselect_all();
    void rename_file();
    void create_directory();
    void copy_selected();
    void copy_selected_on_device();
    void move_files();
    void delete_selected();
    void adb_push(std::string path,std::string cd="");
    void adb_pull(std::string starting_path,std::string file,std::string cd="");
    std::vector<std::string> get_directory_list(std::string path,bool allow_parent_directory);

    void tick();
    void ai();
    void movement();
    void events();
    void animate();
    void render();

    void update_background();
    void render_background();
};

#endif
