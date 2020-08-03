#pragma once

/**
 * 
 * Loads a plugin to memory 
 * 
 * 
 * @param plugin_name The file path to the dynamic lib
 * 
 */
extern do_err do_load_plugin(const car* plugin_name, t_do_plugin* o_plugin);


/**
 * 
 * 
 * Loads a function from a Plugin
 * 
 * @param plugin The plugin pointer retrieved from do_load_plugin
 * @param function_name The Name of the function to load in
 * 
 * @return o_func The return function. Currently void()
 * */
extern do_err do_load_plugin_func(t_do_plugin plugin, const car* function_name, t_load_fn* o_func);