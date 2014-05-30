
/*
void gdiInvertRect();
void gdiSetRect();
void gdiClearRect();
void gdiDrawingAreaInvertRect();
void gdiDrawingAreaClearRect();
void gdiClearDrawingArea();
void gdiInitDrawingAreaGC();
void gdiResizeDrawingArea();
*/

void UpdateMenuStatusTo();
void SetMouseHelp();
void InitMouseHelp();

void add_arc_moving(struct arc_object *cur_arc,
		    int             to_delete);
int	add_lisp() ;
int	add_mpar() ;
int	add_mpar_v() ;
int	add_point() ;
int	add_res() ;
int	add_rpar() ;
int	add_rpar_v() ;
int	add_segment() ;
int	add_selected_layer() ;
int	adjust_point() ;
void	afire_trans() ;
int	ask_comm() ;
void	auto_simulation() ;
int	backup_modify() ;
int	backup_not_modify() ;
void	backwrd_enabled() ;
void backwrd_imm_enabled(struct group_object *gp);
struct net_object *create_net() ;
int	calc_point() ;
int	calc_ver() ;
int	calctang() ;
// void cambia_blocco(struct ind_prest_list *pp, int *pt_x);
// int	cambia_scala() ;
void	cancel_selected_net() ;
int	change_arc_type() ;
int	change_enabl() ;
int	change_layer_name() ;
int	change_line() ;
int	change_lisp() ;
int	change_md() ;
int	change_point() ;
int	change_res() ;
int	change_tr_knd() ;
int	check_confusion() ;

int	circle() ;
int	cleanup_arc() ;
void	clear_canvas() ;
int	clear_cc() ;
int	clear_deadl() ;
int	clear_ecs() ;
int	clear_implp() ;
int	clear_live() ;
int	clear_me() ;
int	clear_menu() ;
void	clear_message() ;
int	clear_pinv() ;
void clear_proc_f();
void clear_proc_m();
int	clear_res() ;
int	clear_sc() ;
int	clear_throughputs() ;
int	clear_tinv() ;
int	clear_trap() ;
int	clear_unbound() ;
void	clonate() ;
void clonate_drop_arcs(struct trans_object *oldtrans,struct trans_object *trans) ;
void	close_int_sim() ;
int	close_msg_f() ;
int close_to_vector(float x1,float  y1,float  x2,float  y2,float  xp,float  yp,float  tol,
		    float  *px, float  *py);
void	collect_all() ;
int	collect_ccsets() ;
int	collect_deadl() ;
int	collect_ecsets() ;
int	collect_implp() ;
int	collect_mesets() ;
int	collect_pinvar() ;
int	collect_res() ;
int	collect_scsets() ;
int	collect_tinvar() ;
int	collect_trap() ;
int	collect_unbound() ;
int	color_tracking() ;
void	compute_enabled() ;
void cont_dragging(int x, int y);
// void conv_num(struct ind_prest_list *pp, int *nn,float *nm, float *nM);
int	copy_place_model() ;
struct net_object *create_net() ;
void	decr_token() ;
void	dehighlight_all() ;
int	dehighlight_cc() ;
int	dehighlight_deadl() ;
int	dehighlight_ecs() ;
int	dehighlight_implp() ;
void dehighlight_list(struct coordinate *list,
		      int rad);
int	dehighlight_me() ;
int	dehighlight_pinv() ;
int	dehighlight_sc() ;
void	dehighlight_search() ;
int	dehighlight_tinv() ;
void dehighlight_trans();
int	dehighlight_trap() ;
int	dehighlight_unbound() ;
int	del_point() ;
int	delete_arc() ;
int	delete_layers() ;
int	delete_lisp() ;
int	delete_mpar() ;
int	delete_place() ;
int	delete_result() ;
int	delete_rpar() ;
void	delete_s_a() ;
void	delete_sel_params() ;
void	delete_selected() ;
int	delete_trans() ;
void	delete_unsel_arcs() ;
void	destroy_menu_proc() ;
// void disegno_x(struct ind_prest_list *pp,int *pt_x);
// void disegno_y(struct ind_prest_list *pp,int *pt_y);
int	display_cc() ;
void	display_curtime() ;
int	display_deadl() ;
int	display_ecs() ;
int	display_grid() ;
int	display_implp() ;
int	display_me() ;
int	display_pinv() ;
int	display_sc() ;
void	display_selected_net() ;
int	display_tinv() ;
int	display_trap() ;
int	display_unbound() ;
void do_fire(struct trans_object *t_p);
int	dot() ;
void	drag() ;
int	draw_arc() ;
int	draw_arrow() ;
int	draw_circle() ;
int	draw_curv() ;
int	draw_marking() ;
int	draw_net() ;
int	draw_net_marking() ;
int	draw_not_hd() ;
int	draw_place() ;
int	draw_seg() ;
int	draw_spline() ;
int	draw_t_row() ;
int	draw_tokens() ;
int	draw_trans() ;
int	draw_vector() ;
void	drop() ;
int	drop_color() ;
void drop_selected(int x, int y,
		   struct net_object *net);
int	drop_t_rate() ;
int	drop_tag() ;
int	edit_color() ;
int	edit_lisp() ;
int	edit_marking() ;
int	edit_md() ;
int	edit_mpar() ;
int	edit_rate() ;
int	edit_res() ;
int	edit_tag() ;
int	elastic_box() ;
int	elastic_line() ;
char    *emalloc() ;
void	end_boxtracking(int,int) ;
int	end_conf() ;
int	erase_live() ;
int	erase_net_marking() ;
char	*erealloc() ;
int	f_norm_trans() ;
void	fire_close_proc() ;
void	fire_close_proc_alt() ;
void	fire_trans() ;
void	force_simulation() ;
void	free_bkup_netobj() ;
void free_netobj(struct net_object *net);
void get_answer_proc(Widget item, XEvent *event);
int	get_arc_mult() ;
struct arc_token * get_arc_struct() ;
int	get_arc_type() ;
int	get_comm() ;
struct coordinate * get_coo_struct() ;
char    *getenv() ;
int	get_group() ;
int	get_layer_name() ;
int	get_lisp_kind() ;
int	get_new_color() ;
int	get_new_kind() ;
int	get_new_layer() ;
int	get_new_load() ;
int	get_new_mark() ;
int	get_new_rate() ;
int	get_new_tag() ;
void	get_number_step() ;
int	get_pascal_real() ;
int	get_throughputs() ;
int	get_token_distr() ;
int	get_totime() ;
void getarcs(struct net_object *netobj,
	     char            kind,
	     struct trans_object *trans,
	     int             noar);
void getname(char *name_pr);
// void gradua_y(struct ind_prest_list *pp);
void	help(int n) ;
int	help_co_a_proc() ;
int	help_co_b_proc() ;
int	help_co_c_proc() ;
int	help_co_d_proc() ;
int	help_co_e_proc() ;
int	help_co_g_proc() ;
void help_md_e_proc(Widget            m,Widget       mi);
void help_md_g_proc(Widget            m,Widget       mi);
void	help_popup_menu() ;
void help_re_e_proc(Widget m,Widget mi);
void help_re_g_proc(Widget m,Widget mi);
void highlight_arc(struct arc_object *arc);
int	highlight_cc() ;
int	highlight_deadl() ;
int	highlight_ecs() ;
void	highlight_entranslist() ;
int	highlight_implp() ;
void highlight_item(DrawingSurfacePun ds,
		    float           x, float y,
		    int             rad);
void highlight_list(struct coordinate *list,
		    int    rad, int flashing,
		    struct arc_object *arc);
int	highlight_me() ;
int	highlight_pinv() ;
void highlight_place(struct place_object *place);
int	highlight_sc() ;
void highlight_search(struct coordinate coor);
int	highlight_tinv() ;
void highlight_trans(struct trans_object *trans);
int	highlight_trap() ;
int	highlight_unbound() ;
void histogram(struct place_object *place,XButtonEvent *ie);
void	histogram_list_new() ;
int	hor_line_up() ;
void	incr_token() ;
void ind_prest_list_new() ;
void ind_prestazione(struct res_object *res);
// void ind_prestazione_list(struct ind_prest_list *pp);
void	init_animation() ;
int	init_boxtracking() ;
void	init_break() ;
void	init_canvas() ;
int	init_color() ;
void	init_command_menu() ;
int	init_commands() ;
void InitCommands();
int	init_dirs() ;
int	init_fire() ;
void	init_getmsg() ;
int	init_grill() ;
void 	init_help2_menu() ;
void	init_help_menu() ;
void init_highlight();
void	init_int_sim() ;
int	init_layer() ;
int	init_linetrack() ;
int	init_moveline() ;
void InitMouseHelpDialog(void);
void init_msg();
void init_msgreceiving(   char * message);
int	init_overview() ;
void	init_panel() ;
void	init_pflag_menu() ;
int	init_rescale() ;
int	init_search() ;
int	init_simpan() ;
int	init_simulation() ;
void	init_tflag_menu() ;
int	init_zoom() ;
int	init_net() ;
int	name_cmp() ;
int	rot_trans() ;
int	trans_to_n() ;
int	inv_line() ;
int	inv_vector() ;
int	is_in_move() ;
int	l_tracking() ;
void	limit_selected() ;
int	line_tracking() ;
int	line_up() ;
void load_file(struct net_object *netobj);
int	load_live() ;
// void memorizza(struct ind_prest_list *pp);
void	menu_action() ;
void merge_file(char *netname);
void	mirror_drop() ;
void mirror_drop_arcs(struct trans_object *oldtrans,struct trans_object  *trans);
void	mirror_horizontal() ;
void	mirror_vertical() ;
void	modify_evlist() ;
void	modify_selected(int how) ;
void modify_trans(int how, struct trans_object *trans);
int	move_color() ;
int	move_place() ;
int	move_t_rate() ;
int	move_tag() ;
int	move_trans() ;
int	msgrec() ;

int HowManyLayers();
Layer NewLayer();
LayerPun NewLayerList();
void SetLayerName();
void ReinitializeLayers();
void MakeLayerVisible();
void SetInitialLayerDimension();
Boolean IsLayerListVisible();
void ResetVisibleLayers();
Boolean IsLayerVisible();
void encode_layer();
void SetVisibleResGrammarDialog();
void ShowResGrammarDialog();

struct arc_object   *near_arc_obj(float x_loc, float y_loc,char *arc_type) ;
struct trans_object *near_imtrans_obj(float x_loc, float y_loc,struct group_object **group) ;
struct lisp_object  *near_lisp_obj(float x_loc, float y_loc) ;
struct mpar_object * near_mpar_obj(float x_loc, float y_loc);
struct net_object   *near_node_obj(float x_loc, float y_loc,int *object_type) ;
struct net_object   *near_obj(float x_loc, float y_locint,int  *object_type) ;
struct place_object *near_place_obj(float x_loc, float y_loc) ;
struct res_object   *near_res_obj(float x_loc, float y_loc) ;
struct rpar_object  *near_rpar_obj(float x_loc, float y_loc) ;
struct trans_object *near_titrans_obj(float x_loc, float y_loc) ;
struct place_object *n_to_place(int np) ;
struct trans_object *n_to_trans(int nt) ;


int	new_arc() ;
int	new_imtrans() ;
int	new_inhib() ;
int	new_line() ;
int	new_lisp() ;
int	new_mpar() ;
int	new_panel_s() ;
int	new_place() ;

int	new_res() ;
int	new_rpar() ;
int	new_titrans() ;
int	newpoints() ;
int	next_conf() ;
void next_msg(int level,...);

void	null_proc(void) ;
void	one_step_anim() ;
void	one_step_simulation(char  fw_bw) ;
void	open_break_proc() ;
int	open_msg_f() ;
void	open_s_a() ;
int	open_s_proc() ;
void	open_s_r() ;
int	open_simpan_proc() ;
int	open_usl() ;
void	pflag_popup_menu() ;
int	place_drop() ;
int	place_tracking() ;
int	popdown_modify() ;
int	popup_modify() ;
void PrepareLPMark(void);
void PrepareLPBounds(void);
void	prepare_lp_mark() ;
void	prepare_lp_bounds() ;
int	prepare_place_model() ;
void print_layer(LayerPun           layer);
void purge_netobj(struct net_object *net);
int	put_file() ;
void	put_msg(int level,...) ;
void put_trans(struct net_object *netobj,
	       struct trans_object *trans,
	       short           knd,
	       int             num);
void putarcs(struct net_object *netobj,
	     char            kind,
	     struct trans_object *trans);
void putname(FILE           *outfile,
	     char           *name_pr);
void	quit_popup(Widget pw) ;
int	r_norm_trans() ;
int	read_dirs() ;
void read_file(char           *netname);
void	read_us() ;

void	receive_newstate() ;
void	receive_transition() ;
void	recompute_images() ;

int	redisplay_net() ;
int	rem_B_save() ;
int	rem_R_save() ;
int	remove() ;
int	remove_arc() ;
void remove_histogram(DrawingSurfacePun   pw_p);
void remove_ind_prestazione(DrawingSurfacePun       pw_p);
int	remove_lisp() ;
// int	remove_mem_list() ;
int	remove_mpar() ;
int	remove_place() ;
int	remove_result() ;
int	remove_rpar() ;
void	remove_selected() ;
int	remove_trans() ;
int	rescale_net() ;
void RescaleList(double howmuch);
void	reset_canvas_reader() ;
void	reset_canvas_scroll() ;
int	reset_color() ;
void	reset_entranslist() ;
int	reset_grill() ;
void reset_object();
void	reset_mode_proc() ;
void reset_net_object(struct net_object *net);
int	reset_selected_layer() ;
void	reset_simulation_screen() ;
void	reset_simulator(float ftime) ;
int	reset_zoom() ;
void	restore_obj() ;
int	result_sim() ;
int	riadjust() ;
int	rmsomething() ;
int	rotate_trans() ;
int save_file(struct net_object *netobj);
void ScheduleSwn(int whichHandler,int p1,int p2,int p3,int p4,int p5,int p6,int p7,int p8);
int	search_proc() ;
int	see_point() ;
void	select_objects() ;
int	set_backup_R_proc() ;
void set_bw_enabl(struct trans_object *trans,
		  struct group_object *group);
void	set_canvas_tracker() ;
int	set_color() ;
int	set_confidence_level_proc() ;
int	set_delete_proc() ;
void	set_enabled() ;
int	set_grill() ;
void set_immenabled(struct group_object *gp);
void	set_int_sim_visibility() ;
int	set_memory_proc() ;
void	set_no_shots() ;
void	set_simulation_clock() ;
void	set_t_fire_name() ;
int	set_type_B_proc() ;
int	set_type_R_proc() ;
int	set_type_proc() ;
int	set_zoom() ;
void	setup_initialstate() ;
void setup_mark(int mode);
int	show_cc() ;
int	show_deadl() ;
int	show_ecs() ;
int	show_implp() ;
int	show_lisp() ;
int	show_live() ;
void	show_lp_lamb() ;
void	show_lp_lmmb() ;
void	show_lp_lxb() ;
void	show_lp_uamb() ;
void	show_lp_ueb() ;
void	show_lp_ummb() ;
void	show_lp_uxb() ;
int	show_me() ;
int	show_moving_place() ;
int	show_moving_trans() ;
int	show_mpar() ;
void show_one_shot(int             n);
int	show_pinv() ;
int	show_place_color() ;
int	show_place_mark() ;
int	show_place_tag() ;
int	show_rate() ;
int	show_res() ;
int	show_rpar() ;
int	show_sc() ;
int	show_tag() ;
int	show_throughputs() ;
int	show_tinv() ;
int	show_token_distr() ;
int	show_trans_color() ;
int	show_trans_pri() ;
int	show_trans_rate() ;
int	show_trans_tag() ;
int	show_trap() ;
int	show_unbound() ;
int	simpan_start_proc() ;
void	start_simula() ;

void	synchro_s_r() ;
int	t_rate_tracking() ;
int	tag_tracking() ;
void	tflag_popup_menu() ;
void	timed_fire_modify() ;
int	tok_f_proc() ;
int	trans_drop() ;
int	trans_moving() ;
int	trans_tracking() ;
void transform_coord(int             how,
		     float           oldx, float oldy,
		     float          *newx, float *newy);
int	type_initial() ;
int	type_lisp() ;
int	type_lisp_def() ;
void type_md_def(struct trans_object *trans);
int	type_modify() ;
int	type_not_modify() ;
int	type_rate() ;
int	type_res() ;
int	type_res_def() ;
void	untimed_fire_modify() ;
int	update_layer() ;
void	update_mode() ;
int	val_proc() ;
int	vert_line_up() ;
int	w_put_arc() ;
int	w_put_place() ;
int write_file(char *netname);
// void    write_pt(struct ind_prest_list *pp,int *pt_x,int *pt_y);
int	xv_vector() ;
void	xv_writebackground() ;
void	zoom_selected_images() ;
void    SetFunction();
