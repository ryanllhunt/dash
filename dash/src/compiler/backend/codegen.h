#ifndef dash_compiler_backend_codegen_h
#define dash_compiler_backend_codegen_h

#include "common.h"

int dcg_import_procedure_list(
	dst_proc_list *list,
	dcg_proc_decl_list *module,
	dvm_context *vm,
	dsc_memory *mem
	);

int dcg_import_procedure(
	dst_proc *func,
	dcg_proc_decl_list *module,
	dvm_context *vm,
	dsc_memory *mem
	);

int dcg_import_statement(
	dst_statement *statement,
	dst_proc *procedure,
	dcg_proc_decl_list *module,
	dcg_register_allocator *reg_alloc,
	dcg_bc_emitter *bc_emit,
	dsc_memory *mem
	);

int dcg_import_expression(
	dst_exp *expression,
	size_t *out_reg,
	dst_type_list **out_type,
	dcg_proc_decl_list *module,
	dcg_register_allocator *reg_alloc,
	dcg_bc_emitter *bc_emit,
	dsc_memory *mem
	);

#endif