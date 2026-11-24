#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB700
// Address: 0x1fb700 - 0x1fbb64
void sub_001FB700_0x1fb700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB700_0x1fb700");
#endif

    ctx->pc = 0x1fb700u;

    // 0x1fb700: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1fb700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb704: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1fb704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1fb708: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x1fb708u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fb70c: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x1fb70cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb710: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x1fb710u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1fb714: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x1fb714u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb718: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb71c: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x1fb71cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1fb720: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb724: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb728: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x1fb728u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb72c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb72cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb730: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x1fb730u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb734: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb738: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fb738u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb73c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb73cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb740: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb744: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb748: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fb748u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fb74c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb74cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb750: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x1fb750u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1fb754: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb754u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fb758: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x1fb758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb75c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb75cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb760: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fb760u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fb764: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1fb764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1fb768: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb768u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb76c: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x1fb76cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x1fb770: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1fb770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1fb774: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb778: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1fb778u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x1fb77c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fb77cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fb780: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb780u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb784: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x1fb784u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1fb788: 0x28a2001e  slti        $v0, $a1, 0x1E
    ctx->pc = 0x1fb788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fb78c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fb78cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fb790: 0xaa5004  sllv        $t2, $t2, $a1
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb794: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB794u;
    {
        const bool branch_taken_0x1fb794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB794u;
        // 0x1fb798: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb794) {
            ctx->pc = 0x1FB800u;
            goto label_1fb800;
        }
    }
    ctx->pc = 0x1FB79Cu;
    // 0x1fb79c: 0x24a5ffe2  addiu       $a1, $a1, -0x1E
    ctx->pc = 0x1fb79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x1fb7a0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB7A0u;
    {
        const bool branch_taken_0x1fb7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7A0u;
        // 0x1fb7a4: 0x81042  srl         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7a0) {
            ctx->pc = 0x1FB7B8u;
            goto label_1fb7b8;
        }
    }
    ctx->pc = 0x1FB7A8u;
    // 0x1fb7a8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fb7a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fb7ac: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x1fb7acu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x1fb7b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB7B0u;
    {
        const bool branch_taken_0x1fb7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B0u;
        // 0x1fb7b4: 0x85040  sll         $t2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7b0) {
            ctx->pc = 0x1FB7C0u;
            goto label_1fb7c0;
        }
    }
    ctx->pc = 0x1FB7B8u;
label_1fb7b8:
    // 0x1fb7b8: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x1fb7b8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x1fb7bc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fb7bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fb7c0:
    // 0x1fb7c0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb7c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb7c8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb7cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb7ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb7d0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb7d4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb7d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb7d8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb7d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fb7dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb7e0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb7e4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb7e8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fb7e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fb7ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb7ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb7f0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb7f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB7F4u;
    {
        const bool branch_taken_0x1fb7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7F4u;
        // 0x1fb7f8: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7f4) {
            ctx->pc = 0x1FB80Cu;
            goto label_1fb80c;
        }
    }
    ctx->pc = 0x1FB7FCu;
    // 0x1fb7fc: 0x0  nop
    ctx->pc = 0x1fb7fcu;
    // NOP
label_1fb800:
    // 0x1fb800: 0xa6f82  srl         $t5, $t2, 30
    ctx->pc = 0x1fb800u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
    // 0x1fb804: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1fb804u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1fb808: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1fb808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1fb80c:
    // 0x1fb80c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1fb80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1fb810: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fb810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fb814: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB814u;
    {
        const bool branch_taken_0x1fb814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb814) {
            ctx->pc = 0x1FB818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB814u;
            // 0x1fb818: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB85Cu;
            goto label_1fb85c;
        }
    }
    ctx->pc = 0x1FB81Cu;
    // 0x1fb81c: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fb81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1fb820: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1fb820u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb824: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fb824u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb828: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb82c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb830: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb834: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb838: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb83c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb83cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fb840: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb844: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb848: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb84c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fb84cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fb850: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb854: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb854u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb858: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fb85c:
    // 0x1fb85c: 0x28a2001d  slti        $v0, $a1, 0x1D
    ctx->pc = 0x1fb85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1fb860: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB860u;
    {
        const bool branch_taken_0x1fb860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB860u;
        // 0x1fb864: 0xa6742  srl         $t4, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb860) {
            ctx->pc = 0x1FB8D0u;
            goto label_1fb8d0;
        }
    }
    ctx->pc = 0x1FB868u;
    // 0x1fb868: 0x24a5ffe3  addiu       $a1, $a1, -0x1D
    ctx->pc = 0x1fb868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
    // 0x1fb86c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB86Cu;
    {
        const bool branch_taken_0x1fb86c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB86Cu;
        // 0x1fb870: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb86c) {
            ctx->pc = 0x1FB890u;
            goto label_1fb890;
        }
    }
    ctx->pc = 0x1FB874u;
    // 0x1fb874: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fb874u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fb878: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fb878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fb87c: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fb87cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fb880: 0xa6742  srl         $t4, $t2, 29
    ctx->pc = 0x1fb880u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1fb884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB884u;
    {
        const bool branch_taken_0x1fb884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB884u;
        // 0x1fb888: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb884) {
            ctx->pc = 0x1FB894u;
            goto label_1fb894;
        }
    }
    ctx->pc = 0x1FB88Cu;
    // 0x1fb88c: 0x0  nop
    ctx->pc = 0x1fb88cu;
    // NOP
label_1fb890:
    // 0x1fb890: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fb890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fb894:
    // 0x1fb894: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fb894u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb898: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb89c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb8a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb8a4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb8a8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb8a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb8ac: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb8acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fb8b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb8b4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb8b8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb8bc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fb8bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fb8c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb8c4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb8c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB8C8u;
    {
        const bool branch_taken_0x1fb8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8C8u;
        // 0x1fb8cc: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8c8) {
            ctx->pc = 0x1FB8D8u;
            goto label_1fb8d8;
        }
    }
    ctx->pc = 0x1FB8D0u;
label_1fb8d0:
    // 0x1fb8d0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1fb8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1fb8d4: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x1fb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1fb8d8:
    // 0x1fb8d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fb8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fb8dc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fb8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fb8e0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB8E0u;
    {
        const bool branch_taken_0x1fb8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb8e0) {
            ctx->pc = 0x1FB8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB8E0u;
            // 0x1fb8e4: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB928u;
            goto label_1fb928;
        }
    }
    ctx->pc = 0x1FB8E8u;
    // 0x1fb8e8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1fb8ec: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1fb8ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb8f0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fb8f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb8f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb8f8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb8fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb900: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb900u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb904: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb908: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb908u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fb90c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb90cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb910: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb914: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb914u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb918: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fb918u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fb91c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb920: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb920u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb924: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fb928:
    // 0x1fb928: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x1fb928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fb92c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB92Cu;
    {
        const bool branch_taken_0x1fb92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB92Cu;
        // 0x1fb930: 0xa5c42  srl         $t3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb92c) {
            ctx->pc = 0x1FB998u;
            goto label_1fb998;
        }
    }
    ctx->pc = 0x1FB934u;
    // 0x1fb934: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x1fb934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x1fb938: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB938u;
    {
        const bool branch_taken_0x1fb938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB938u;
        // 0x1fb93c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb938) {
            ctx->pc = 0x1FB958u;
            goto label_1fb958;
        }
    }
    ctx->pc = 0x1FB940u;
    // 0x1fb940: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fb940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fb944: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fb944u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fb948: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fb948u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fb94c: 0xa5c42  srl         $t3, $t2, 17
    ctx->pc = 0x1fb94cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1fb950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB950u;
    {
        const bool branch_taken_0x1fb950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB950u;
        // 0x1fb954: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb950) {
            ctx->pc = 0x1FB95Cu;
            goto label_1fb95c;
        }
    }
    ctx->pc = 0x1FB958u;
label_1fb958:
    // 0x1fb958: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fb958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fb95c:
    // 0x1fb95c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fb95cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb960: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb964: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb968: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb96c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb96cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb970: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb974: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fb978: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb97c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb97cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb980: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb984: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fb984u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fb988: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb98c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb98cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb990: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB990u;
    {
        const bool branch_taken_0x1fb990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB990u;
        // 0x1fb994: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb990) {
            ctx->pc = 0x1FB9A0u;
            goto label_1fb9a0;
        }
    }
    ctx->pc = 0x1FB998u;
label_1fb998:
    // 0x1fb998: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1fb998u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1fb99c: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x1fb99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1fb9a0:
    // 0x1fb9a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fb9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fb9a4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fb9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fb9a8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB9A8u;
    {
        const bool branch_taken_0x1fb9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9a8) {
            ctx->pc = 0x1FB9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB9A8u;
            // 0x1fb9ac: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9F0u;
            goto label_1fb9f0;
        }
    }
    ctx->pc = 0x1FB9B0u;
    // 0x1fb9b0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fb9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1fb9b4: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fb9b8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb9bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb9bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb9c0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb9c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb9c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb9cc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb9d0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fb9d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb9d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb9d8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb9dc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fb9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb9e0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fb9e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fb9e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fb9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fb9e8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fb9ec: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fb9ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fb9f0:
    // 0x1fb9f0: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x1fb9f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fb9f4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB9F4u;
    {
        const bool branch_taken_0x1fb9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9F4u;
        // 0x1fb9f8: 0xa3c42  srl         $a3, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9f4) {
            ctx->pc = 0x1FBA60u;
            goto label_1fba60;
        }
    }
    ctx->pc = 0x1FB9FCu;
    // 0x1fb9fc: 0x24a5ffef  addiu       $a1, $a1, -0x11
    ctx->pc = 0x1fb9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x1fba00: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBA00u;
    {
        const bool branch_taken_0x1fba00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA00u;
        // 0x1fba04: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba00) {
            ctx->pc = 0x1FBA20u;
            goto label_1fba20;
        }
    }
    ctx->pc = 0x1FBA08u;
    // 0x1fba08: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fba08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fba0c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fba10: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fba10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fba14: 0xa3c42  srl         $a3, $t2, 17
    ctx->pc = 0x1fba14u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1fba18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBA18u;
    {
        const bool branch_taken_0x1fba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA18u;
        // 0x1fba1c: 0xa85004  sllv        $t2, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba18) {
            ctx->pc = 0x1FBA24u;
            goto label_1fba24;
        }
    }
    ctx->pc = 0x1FBA20u;
label_1fba20:
    // 0x1fba20: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fba20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fba24:
    // 0x1fba24: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fba24u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fba28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fba28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fba2c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fba2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fba30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fba30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fba34: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fba34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fba38: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fba38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fba3c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fba3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fba40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fba40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fba44: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fba44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fba48: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fba48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fba4c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fba4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fba50: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fba50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fba54: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fba54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fba58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBA58u;
    {
        const bool branch_taken_0x1fba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA58u;
        // 0x1fba5c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba58) {
            ctx->pc = 0x1FBA68u;
            goto label_1fba68;
        }
    }
    ctx->pc = 0x1FBA60u;
label_1fba60:
    // 0x1fba60: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1fba60u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1fba64: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x1fba64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1fba68:
    // 0x1fba68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fba6c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fba6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fba70: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FBA70u;
    {
        const bool branch_taken_0x1fba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba70) {
            ctx->pc = 0x1FBA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA70u;
            // 0x1fba74: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBAB8u;
            goto label_1fbab8;
        }
    }
    ctx->pc = 0x1FBA78u;
    // 0x1fba78: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fba78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1fba7c: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fba80: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fba80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fba84: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fba84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fba88: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fba88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fba8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fba8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fba90: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fba90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fba94: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fba94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fba98: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fba98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fba9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fba9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fbaa0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fbaa0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fbaa4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fbaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fbaa8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fbaa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fbaac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fbaacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fbab0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fbab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fbab4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fbab4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fbab8:
    // 0x1fbab8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fbab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fbabc: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1fbabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fbac0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1FBAC0u;
    {
        const bool branch_taken_0x1fbac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbac0) {
            ctx->pc = 0x1FBAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBAC0u;
            // 0x1fbac4: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB00u;
            goto label_1fbb00;
        }
    }
    ctx->pc = 0x1FBAC8u;
    // 0x1fbac8: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1fbacc: 0xa85004  sllv        $t2, $t0, $a1
    ctx->pc = 0x1fbaccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fbad0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fbad0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fbad4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fbad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fbad8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fbad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fbadc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fbadcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fbae0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fbae0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fbae4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fbae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fbae8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fbae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fbaec: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x1fbaecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1fbaf0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fbaf4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fbaf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fbaf8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fbaf8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fbafc: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x1fbafcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_1fbb00:
    // 0x1fbb00: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1fbb00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fbb04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FBB04u;
    {
        const bool branch_taken_0x1fbb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB04u;
        // 0x1fbb08: 0xa3282  srl         $a2, $t2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb04) {
            ctx->pc = 0x1FBB2Cu;
            goto label_1fbb2c;
        }
    }
    ctx->pc = 0x1FBB0Cu;
    // 0x1fbb0c: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x1fbb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x1fbb10: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBB10u;
    {
        const bool branch_taken_0x1fbb10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb10) {
            ctx->pc = 0x1FBB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBB10u;
            // 0x1fbb14: 0x31830007  andi        $v1, $t4, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB30u;
            goto label_1fbb30;
        }
    }
    ctx->pc = 0x1FBB18u;
    // 0x1fbb18: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1fbb1c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1fbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fbb20: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fbb24: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fbb24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fbb28: 0xa3282  srl         $a2, $t2, 10
    ctx->pc = 0x1fbb28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 10));
label_1fbb2c:
    // 0x1fbb2c: 0x31830007  andi        $v1, $t4, 0x7
    ctx->pc = 0x1fbb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)7);
label_1fbb30:
    // 0x1fbb30: 0x31627fff  andi        $v0, $t3, 0x7FFF
    ctx->pc = 0x1fbb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
    // 0x1fbb34: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x1fbb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x1fbb38: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1fbb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1fbb3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fbb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1fbb40: 0x2da20001  sltiu       $v0, $t5, 0x1
    ctx->pc = 0x1fbb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1fbb44: 0x30e47fff  andi        $a0, $a3, 0x7FFF
    ctx->pc = 0x1fbb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32767);
    // 0x1fbb48: 0xadc6000c  sw          $a2, 0xC($t6)
    ctx->pc = 0x1fbb48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 6));
    // 0x1fbb4c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1fbb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1fbb50: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1fbb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fbb54: 0xadc20008  sw          $v0, 0x8($t6)
    ctx->pc = 0x1fbb54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 2));
    // 0x1fbb58: 0xfdc30000  sd          $v1, 0x0($t6)
    ctx->pc = 0x1fbb58u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 3));
    // 0x1fbb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB5Cu;
        // 0x1fbb60: 0xade40000  sw          $a0, 0x0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBB64u;
}
