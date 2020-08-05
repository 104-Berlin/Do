#pragma once
/**
 * Little testing function
 * 
 */ 
extern do_err parse_do_file(const car* file_path);

/**
 * Process the current toke
 * 
 * @param current_char is the character to be processed
 * @param prev_char is the Previous processed character
 */ 
extern do_err process_char(car current_char, car previous_char);