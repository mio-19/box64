#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(hb_aat_layout_feature_type_get_name_id, uFpu)
GO(hb_aat_layout_feature_type_get_selector_infos, uFpuuppp)
GO(hb_aat_layout_get_feature_types, uFpupp)
//GO(hb_aat_layout_has_positioning, 
//GO(hb_aat_layout_has_substitution, 
GO(hb_aat_layout_has_tracking, iFp)
//GO(hb_blob_copy_writable_or_fail, 
//GO(hb_blob_create, 
//GO(hb_blob_create_from_file, 
GO(hb_blob_create_from_file_or_fail, pFp)
//GO(hb_blob_create_or_fail, 
GO(hb_blob_create_sub_blob, pFpuu)
//GO(hb_blob_destroy, 
GO(hb_blob_get_data, pFpp)
GO(hb_blob_get_data_writable, pFpp)
GO(hb_blob_get_empty, pFv)
//GO(hb_blob_get_length, 
GO(hb_blob_get_user_data, pFpp)
GO(hb_blob_is_immutable, iFp)
GO(hb_blob_make_immutable, vFp)
GO(hb_blob_reference, pFp)
//GO(hb_blob_set_user_data, 
GO(hb_buffer_add, vFpuu)
GO(hb_buffer_add_codepoints, vFppiui)
GO(hb_buffer_add_latin1, vFppiui)
GO(hb_buffer_add_utf16, vFppiui)
GO(hb_buffer_add_utf32, vFppiui)
GO(hb_buffer_add_utf8, vFppiui)
//GO(hb_buffer_allocation_successful, 
GO(hb_buffer_append, vFppuu)
//GO(hb_buffer_clear_contents, 
//GO(hb_buffer_create, 
GO(hb_buffer_create_similar, pFp)
GO(hb_buffer_deserialize_glyphs, iFppippu)
GO(hb_buffer_deserialize_unicode, iFppipu)
//GO(hb_buffer_destroy, 
GO(hb_buffer_diff, uFppuu)
GO(hb_buffer_get_cluster_level, uFp)
GO(hb_buffer_get_content_type, uFp)
GO(hb_buffer_get_direction, uFp)
GO(hb_buffer_get_empty, pFv)
GO(hb_buffer_get_flags, uFp)
GO(hb_buffer_get_glyph_infos, pFpp)
GO(hb_buffer_get_glyph_positions, pFpp)
//GO(hb_buffer_get_invisible_glyph, 
GO(hb_buffer_get_language, pFp)
GO(hb_buffer_get_length, uFp)
GO(hb_buffer_get_not_found_glyph, uFp)
//GO(hb_buffer_get_replacement_codepoint, 
GO(hb_buffer_get_script, uFp)
GO(hb_buffer_get_segment_properties, vFpp)
GO(hb_buffer_get_unicode_funcs, pFp)
GO(hb_buffer_get_user_data, pFpp)
//GO(hb_buffer_guess_segment_properties, 
GO(hb_buffer_has_positions, iFp)
GO(hb_buffer_normalize_glyphs, vFp)
//GO(hb_buffer_pre_allocate, 
GO(hb_buffer_reference, pFp)
//GO(hb_buffer_reset, 
//GO(hb_buffer_reverse, 
//GO(hb_buffer_reverse_clusters, 
GO(hb_buffer_reverse_range, vFpuu)
GO(hb_buffer_serialize, uFpuupuppuu)
GO(hb_buffer_serialize_format_from_string, uFpi)
GO(hb_buffer_serialize_format_to_string, pFu)
//GO(hb_buffer_serialize_glyphs, 
//GO(hb_buffer_serialize_list_formats, 
GO(hb_buffer_serialize_unicode, uFpuupupuu)
GO(hb_buffer_set_cluster_level, vFpu)
GO(hb_buffer_set_content_type, vFpu)
GO(hb_buffer_set_direction, vFpu)
GO(hb_buffer_set_flags, vFpu)
//GO(hb_buffer_set_invisible_glyph, 
GO(hb_buffer_set_language, vFpp)
GO(hb_buffer_set_length, iFpu)
//GO(hb_buffer_set_message_func, 
GO(hb_buffer_set_not_found_glyph, vFpu)
//GO(hb_buffer_set_replacement_codepoint, 
GO(hb_buffer_set_script, vFpu)
GO(hb_buffer_set_segment_properties, vFpp)
GO(hb_buffer_set_unicode_funcs, vFpp)
//GO(hb_buffer_set_user_data, 
//GO(hb_color_get_alpha, 
GO(hb_color_get_blue, CFu)
//GO(hb_color_get_green, 
//GO(hb_color_get_red, 
GO(hb_direction_from_string, uFpi)
GO(hb_direction_to_string, pFu)
GO(hb_draw_close_path, vFppp)
GO(hb_draw_cubic_to, vFpppffffff)
GO(hb_draw_funcs_create, pFv)
//GO(hb_draw_funcs_destroy, 
GO(hb_draw_funcs_is_immutable, iFp)
GO(hb_draw_funcs_make_immutable, vFp)
GO(hb_draw_funcs_reference, pFp)
//GO(hb_draw_funcs_set_close_path_func, 
//GO(hb_draw_funcs_set_cubic_to_func, 
//GO(hb_draw_funcs_set_line_to_func, 
//GO(hb_draw_funcs_set_move_to_func, 
//GO(hb_draw_funcs_set_quadratic_to_func, 
GO(hb_draw_line_to, vFpppff)
//GO(hb_draw_move_to, 
GO(hb_draw_quadratic_to, vFpppffff)
GO(hb_face_builder_add_table, iFpup)
GO(hb_face_builder_create, pFv)
GO(hb_face_builder_sort_tables, vFpp)
//GO(hb_face_collect_unicodes, 
GO(hb_face_collect_variation_selectors, vFpp)
GO(hb_face_collect_variation_unicodes, vFpup)
GO(hb_face_count, uFp)
GO(hb_face_create, pFpu)
//GO(hb_face_create_for_tables, 
//GO(hb_face_destroy, 
//GO(hb_face_get_empty, 
GO(hb_face_get_glyph_count, uFp)
//GO(hb_face_get_index, 
GO(hb_face_get_table_tags, uFpupp)
//GO(hb_face_get_upem, 
GO(hb_face_get_user_data, pFpp)
GO(hb_face_is_immutable, iFp)
GO(hb_face_make_immutable, vFp)
GO(hb_face_reference, pFp)
GO(hb_face_reference_blob, pFp)
GO(hb_face_reference_table, pFpu)
GO(hb_face_set_glyph_count, vFpu)
//GO(hb_face_set_index, 
//GO(hb_face_set_upem, 
//GO(hb_face_set_user_data, 
GO(hb_feature_from_string, iFpip)
GO(hb_feature_to_string, vFppu)
//GO(hb_font_add_glyph_origin_for_direction, 
GO(hb_font_changed, vFp)
GO(hb_font_create, pFp)
//GO(hb_font_create_sub_font, 
//GO(hb_font_destroy, 
//GO(hb_font_funcs_create, 
//GO(hb_font_funcs_destroy, 
GO(hb_font_funcs_get_empty, pFv)
GO(hb_font_funcs_get_user_data, pFpp)
GO(hb_font_funcs_is_immutable, iFp)
GO(hb_font_funcs_make_immutable, vFp)
GO(hb_font_funcs_reference, pFp)
//GO(hb_font_funcs_set_font_h_extents_func, 
//GO(hb_font_funcs_set_font_v_extents_func, 
//GO(hb_font_funcs_set_glyph_contour_point_func, 
//GO(hb_font_funcs_set_glyph_extents_func, 
//GO(hb_font_funcs_set_glyph_from_name_func, 
//GO(hb_font_funcs_set_glyph_func, 
//GO(hb_font_funcs_set_glyph_h_advance_func, 
//GO(hb_font_funcs_set_glyph_h_advances_func, 
//GO(hb_font_funcs_set_glyph_h_kerning_func, 
//GO(hb_font_funcs_set_glyph_h_origin_func, 
//GO(hb_font_funcs_set_glyph_name_func, 
//GO(hb_font_funcs_set_glyph_shape_func, 
//GO(hb_font_funcs_set_glyph_v_advance_func, 
//GO(hb_font_funcs_set_glyph_v_advances_func, 
//GO(hb_font_funcs_set_glyph_v_kerning_func, 
//GO(hb_font_funcs_set_glyph_v_origin_func, 
//GO(hb_font_funcs_set_nominal_glyph_func, 
//GO(hb_font_funcs_set_nominal_glyphs_func, 
//GO(hb_font_funcs_set_user_data, 
//GO(hb_font_funcs_set_variation_glyph_func, 
GO(hb_font_get_empty, pFv)
GO(hb_font_get_extents_for_direction, vFpup)
GO(hb_font_get_face, pFp)
GO(hb_font_get_glyph, iFpuup)
//GO(hb_font_get_glyph_advance_for_direction, 
GO(hb_font_get_glyph_advances_for_direction, vFpuupupu)
GO(hb_font_get_glyph_contour_point, iFpuupp)
GO(hb_font_get_glyph_contour_point_for_origin, iFpuuupp)
GO(hb_font_get_glyph_extents, iFpup)
GO(hb_font_get_glyph_extents_for_origin, iFpuup)
//GO(hb_font_get_glyph_from_name, 
//GO(hb_font_get_glyph_h_advance, 
//GO(hb_font_get_glyph_h_advances, 
//GO(hb_font_get_glyph_h_kerning, 
//GO(hb_font_get_glyph_h_origin, 
GO(hb_font_get_glyph_kerning_for_direction, vFpuuupp)
GO(hb_font_get_glyph_name, iFpupu)
//GO(hb_font_get_glyph_origin_for_direction, 
GO(hb_font_get_glyph_shape, vFpupp)
GO(hb_font_get_glyph_v_advance, iFpu)
GO(hb_font_get_glyph_v_advances, vFpupupu)
GO(hb_font_get_glyph_v_kerning, iFpuu)
GO(hb_font_get_glyph_v_origin, iFpupp)
//GO(hb_font_get_h_extents, 
GO(hb_font_get_nominal_glyph, iFpup)
GO(hb_font_get_nominal_glyphs, uFpupupu)
GO(hb_font_get_parent, pFp)
GO(hb_font_get_ppem, vFppp)
//GO(hb_font_get_ptem, 
GO(hb_font_get_scale, vFppp)
GO(hb_font_get_serial, uFp)
GO(hb_font_get_synthetic_slant, fFp)
GO(hb_font_get_user_data, pFpp)
GO(hb_font_get_var_coords_design, pFpp)
GO(hb_font_get_var_coords_normalized, pFpp)
//GO(hb_font_get_variation_glyph, 
GO(hb_font_get_v_extents, iFpp)
GO(hb_font_glyph_from_string, iFppip)
GO(hb_font_glyph_to_string, vFpupu)
GO(hb_font_is_immutable, iFp)
//GO(hb_font_make_immutable, 
//GO(hb_font_reference, 
GO(hb_font_set_face, vFpp)
//GO(hb_font_set_funcs, 
//GO(hb_font_set_funcs_data, 
GO(hb_font_set_parent, vFpp)
GO(hb_font_set_ppem, vFpuu)
//GO(hb_font_set_ptem, 
GO(hb_font_set_scale, vFpii)
GO(hb_font_set_synthetic_slant, vFpf)
//GO(hb_font_set_user_data, 
GO(hb_font_set_var_coords_design, vFppu)
GO(hb_font_set_var_coords_normalized, vFppu)
GO(hb_font_set_variations, vFppu)
GO(hb_font_set_var_named_instance, vFpu)
GO(hb_font_subtract_glyph_origin_for_direction, vFpuupp)
//GO(hb_ft_face_create, 
//GO(hb_ft_face_create_cached, 
//GO(hb_ft_face_create_referenced, 
//GO(hb_ft_font_changed, 
//GO(hb_ft_font_create, 
//GO(hb_ft_font_create_referenced, 
//GO(hb_ft_font_get_face, 
GO(hb_ft_font_get_load_flags, iFp)
//GO(hb_ft_font_lock_face, 
GO(hb_ft_font_set_funcs, vFp)
GO(hb_ft_font_set_load_flags, vFpi)
//GO(hb_ft_font_unlock_face, 
GO(hb_ft_hb_font_changed, iFp)
//GO(hb_glib_blob_create, 
//GO(hb_glib_get_unicode_funcs, 
//GO(hb_glib_script_from_script, 
//GO(hb_glib_script_to_script, 
GO(hb_glyph_info_get_glyph_flags, uFp)
//GO(hb_graphite2_face_get_gr_face, 
//GO(hb_graphite2_font_get_gr_font, 
GO(hb_language_from_string, pFpi)
GO(hb_language_get_default, pFv)
GO(hb_language_matches, iFpp)
GO(hb_language_to_string, pFp)
//GO(hb_map_allocation_successful, 
GO(hb_map_clear, vFp)
GO(hb_map_copy, pFp)
//GO(hb_map_create, 
GO(hb_map_del, vFpu)
//GO(hb_map_destroy, 
GO(hb_map_get, uFpu)
GO(hb_map_get_empty, pFv)
//GO(hb_map_get_population, 
GO(hb_map_get_user_data, pFpp)
GO(hb_map_has, iFpu)
GO(hb_map_hash, uFp)
GO(hb_map_is_empty, iFp)
GO(hb_map_is_equal, iFpp)
GO(hb_map_reference, pFp)
GO(hb_map_set, vFpuu)
//GO(hb_map_set_user_data, 
GO(hb_ot_color_glyph_get_layers, uFpuupp)
GO(hb_ot_color_glyph_reference_png, pFpu)
GO(hb_ot_color_glyph_reference_svg, pFpu)
//GO(hb_ot_color_has_layers, 
//GO(hb_ot_color_has_palettes, 
//GO(hb_ot_color_has_png, 
//GO(hb_ot_color_has_svg, 
//GO(hb_ot_color_palette_color_get_name_id, 
GO(hb_ot_color_palette_get_colors, uFpuupp)
//GO(hb_ot_color_palette_get_count, 
GO(hb_ot_color_palette_get_flags, uFpu)
//GO(hb_ot_color_palette_get_name_id, 
GO(hb_ot_font_set_funcs, vFp)
//GO(hb_ot_layout_collect_features, 
GO(hb_ot_layout_collect_lookups, vFpupppp)
GO(hb_ot_layout_feature_get_characters, uFpuuupp)
GO(hb_ot_layout_feature_get_lookups, uFpuuupp)
GO(hb_ot_layout_feature_get_name_ids, iFpuuppppp)
GO(hb_ot_layout_feature_with_variations_get_lookups, uFpuuuupp)
GO(hb_ot_layout_get_attach_points, uFpuupp)
GO(hb_ot_layout_get_baseline, iFpuuuup)
GO(hb_ot_layout_get_baseline_with_fallback, vFpuuuup)
GO(hb_ot_layout_get_glyph_class, uFpu)
GO(hb_ot_layout_get_glyphs_in_class, vFpup)
GO(hb_ot_layout_get_horizontal_baseline_tag_for_script, uFu)
GO(hb_ot_layout_get_ligature_carets, uFpuuupp)
GO(hb_ot_layout_get_size_params, iFpppppp)
//GO(hb_ot_layout_has_glyph_classes, 
//GO(hb_ot_layout_has_positioning, 
//GO(hb_ot_layout_has_substitution, 
GO(hb_ot_layout_language_find_feature, iFpuuuup)
//GO(hb_ot_layout_language_get_feature_indexes, 
GO(hb_ot_layout_language_get_feature_tags, uFpuuuupp)
GO(hb_ot_layout_language_get_required_feature, iFpuuupp)
GO(hb_ot_layout_language_get_required_feature_index, iFpuuup)
GO(hb_ot_layout_lookup_collect_glyphs, vFpuupppp)
GO(hb_ot_layout_lookup_get_glyph_alternates, uFpuuupp)
GO(hb_ot_layout_lookup_get_optical_bound, iFpuuu)
GO(hb_ot_layout_lookups_substitute_closure, vFppp)
GO(hb_ot_layout_lookup_substitute_closure, vFpup)
GO(hb_ot_layout_lookup_would_substitute, iFpupui)
GO(hb_ot_layout_script_find_language, iFpuuup)
GO(hb_ot_layout_script_get_language_tags, uFpuuupp)
GO(hb_ot_layout_script_select_language, iFpuuupp)
GO(hb_ot_layout_table_choose_script, iFpuppp)
GO(hb_ot_layout_table_find_feature_variations, iFpupup)
GO(hb_ot_layout_table_find_script, iFpuup)
GO(hb_ot_layout_table_get_feature_tags, uFpuupp)
GO(hb_ot_layout_table_get_lookup_count, uFpu)
//GO(hb_ot_layout_table_get_script_tags, 
GO(hb_ot_layout_table_select_script, iFpuuppp)
GO(hb_ot_math_get_constant, iFpu)
GO(hb_ot_math_get_glyph_assembly, uFpuuuppp)
//GO(hb_ot_math_get_glyph_italics_correction, 
GO(hb_ot_math_get_glyph_kerning, iFpuui)
GO(hb_ot_math_get_glyph_kernings, uFpuuupp)
GO(hb_ot_math_get_glyph_top_accent_attachment, iFpu)
GO(hb_ot_math_get_glyph_variants, uFpuuupp)
GO(hb_ot_math_get_min_connector_overlap, iFpu)
//GO(hb_ot_math_has_data, 
GO(hb_ot_math_is_glyph_extended_shape, iFpu)
GO(hb_ot_meta_get_entry_tags, uFpupp)
GO(hb_ot_meta_reference_entry, pFpu)
GO(hb_ot_metrics_get_position, iFpup)
GO(hb_ot_metrics_get_position_with_fallback, vFpup)
GO(hb_ot_metrics_get_variation, fFpu)
//GO(hb_ot_metrics_get_x_variation, 
GO(hb_ot_metrics_get_y_variation, iFpu)
GO(hb_ot_name_get_utf16, uFpuppp)
GO(hb_ot_name_get_utf32, uFpuppp)
GO(hb_ot_name_get_utf8, uFpuppp)
GO(hb_ot_name_list_names, pFpp)
GO(hb_ot_shape_glyphs_closure, vFpppup)
GO(hb_ot_shape_plan_collect_lookups, vFpup)
GO(hb_ot_tag_from_language, uFp)
GO(hb_ot_tags_from_script, vFupp)
GO(hb_ot_tags_from_script_and_language, vFuppppp)
GO(hb_ot_tags_to_script_and_language, vFuupp)
GO(hb_ot_tag_to_language, pFu)
GO(hb_ot_tag_to_script, uFu)
GO(hb_ot_var_find_axis, iFpupp)
GO(hb_ot_var_find_axis_info, iFpup)
GO(hb_ot_var_get_axes, uFpupp)
//GO(hb_ot_var_get_axis_count, 
GO(hb_ot_var_get_axis_infos, uFpupp)
GO(hb_ot_var_get_named_instance_count, uFp)
//GO(hb_ot_var_has_data, 
GO(hb_ot_var_named_instance_get_design_coords, uFpupp)
GO(hb_ot_var_named_instance_get_postscript_name_id, uFpu)
//GO(hb_ot_var_named_instance_get_subfamily_name_id, 
GO(hb_ot_var_normalize_coords, vFpupp)
GO(hb_ot_var_normalize_variations, vFppupu)
GO(hb_script_from_iso15924_tag, uFu)
GO(hb_script_from_string, uFpi)
GO(hb_script_get_horizontal_direction, uFu)
GO(hb_script_to_iso15924_tag, uFu)
GO(hb_segment_properties_equal, iFpp)
GO(hb_segment_properties_hash, uFp)
GO(hb_segment_properties_overlay, vFpp)
//GO(hb_set_add, 
//GO(hb_set_add_range, 
GO(hb_set_add_sorted_array, vFppu)
//GO(hb_set_allocation_successful, 
//GO(hb_set_clear, 
GO(hb_set_copy, pFp)
//GO(hb_set_create, 
GO(hb_set_del, vFpu)
GO(hb_set_del_range, vFpuu)
//GO(hb_set_destroy, 
GO(hb_set_get_empty, pFv)
GO(hb_set_get_max, uFp)
//GO(hb_set_get_min, 
GO(hb_set_get_population, uFp)
GO(hb_set_get_user_data, pFpp)
GO(hb_set_has, iFpu)
//GO(hb_set_hash, 
//GO(hb_set_intersect, 
GO(hb_set_invert, vFp)
GO(hb_set_is_empty, iFp)
//GO(hb_set_is_equal, 
GO(hb_set_is_subset, iFpp)
//GO(hb_set_next, 
GO(hb_set_next_many, uFpupu)
//GO(hb_set_next_range, 
GO(hb_set_previous, iFpp)
GO(hb_set_previous_range, iFppp)
GO(hb_set_reference, pFp)
//GO(hb_set_set, 
//GO(hb_set_set_user_data, 
//GO(hb_set_subtract, 
GO(hb_set_symmetric_difference, vFpp)
//GO(hb_set_union, 
GO(hb_shape, vFpppu)
GO(hb_shape_full, iFpppup)
GO(hb_shape_list_shapers, pFv)
//GO(hb_shape_plan_create, 
//GO(hb_shape_plan_create2, 
GO(hb_shape_plan_create_cached, pFpppup)
GO(hb_shape_plan_create_cached2, pFpppupup)
GO(hb_shape_plan_destroy, vFp)
GO(hb_shape_plan_execute, iFppppu)
GO(hb_shape_plan_get_empty, pFv)
GO(hb_shape_plan_get_shaper, pFp)
GO(hb_shape_plan_get_user_data, pFpp)
GO(hb_shape_plan_reference, pFp)
//GO(hb_shape_plan_set_user_data, 
GO(hb_style_get_value, fFpu)
GO(hb_tag_from_string, uFpi)
GO(hb_tag_to_string, vFup)
GO(hb_unicode_combining_class, uFpu)
GO(hb_unicode_compose, iFpuup)
GO(hb_unicode_decompose, iFpupp)
GO(hb_unicode_decompose_compatibility, uFpup)
GO(hb_unicode_eastasian_width, uFpu)
//GO(hb_unicode_funcs_create, 
//GO(hb_unicode_funcs_destroy, 
//GO(hb_unicode_funcs_get_default, 
GO(hb_unicode_funcs_get_empty, pFv)
GO(hb_unicode_funcs_get_parent, pFp)
GO(hb_unicode_funcs_get_user_data, pFpp)
GO(hb_unicode_funcs_is_immutable, iFp)
GO(hb_unicode_funcs_make_immutable, vFp)
//GO(hb_unicode_funcs_reference, 
//GO(hb_unicode_funcs_set_combining_class_func, 
//GO(hb_unicode_funcs_set_compose_func, 
//GO(hb_unicode_funcs_set_decompose_compatibility_func, 
//GO(hb_unicode_funcs_set_decompose_func, 
//GO(hb_unicode_funcs_set_eastasian_width_func, 
//GO(hb_unicode_funcs_set_general_category_func, 
//GO(hb_unicode_funcs_set_mirroring_func, 
//GO(hb_unicode_funcs_set_script_func, 
//GO(hb_unicode_funcs_set_user_data, 
GO(hb_unicode_general_category, uFpu)
GO(hb_unicode_mirroring, uFpu)
GO(hb_unicode_script, uFpu)
GO(hb_variation_from_string, iFpip)
GO(hb_variation_to_string, vFppu)
GO(hb_version, vFppp)
GO(hb_version_atleast, iFuuu)
GO(hb_version_string, pFv)
