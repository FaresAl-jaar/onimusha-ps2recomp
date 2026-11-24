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

// Function: sub_001FC3D8
// Address: 0x1fc3d8 - 0x1fd040
void sub_001FC3D8_0x1fc3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC3D8_0x1fc3d8");
#endif

    switch (ctx->pc) {
        case 0x1fc690u: goto label_1fc690;
        default: break;
    }

    ctx->pc = 0x1fc3d8u;

    // 0x1fc3d8: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1fc3d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3dc: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1fc3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1fc3e0: 0x25820003  addiu       $v0, $t4, 0x3
    ctx->pc = 0x1fc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x1fc3e4: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x1fc3e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3e8: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x1fc3e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fc3ec: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1fc3ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3f0: 0x1891823  subu        $v1, $t4, $t1
    ctx->pc = 0x1fc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1fc3f4: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x1fc3f4u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc3f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc3f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc3fc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1fc3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1fc400: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x1fc400u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc404: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc408: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x1fc408u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc40c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc40cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc410: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x1fc410u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc414: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc418: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc418u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc41c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc420: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc424: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc428: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fc428u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fc42c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc42cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc430: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1fc430u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1fc434: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x1fc434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc438: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc438u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc43c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fc43cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fc440: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc444: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x1fc444u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x1fc448: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc448u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc44c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fc44cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fc450: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1fc450u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fc454: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc458: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1fc458u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1fc45c: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x1fc45cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1fc460: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc460u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc464: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1fc464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1fc468: 0x248700a8  addiu       $a3, $a0, 0xA8
    ctx->pc = 0x1fc468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x1fc46c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc46cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc470: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x1fc470u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fc474: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FC474u;
    {
        const bool branch_taken_0x1fc474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC474u;
        // 0x1fc478: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc474) {
            ctx->pc = 0x1FC4E8u;
            goto label_1fc4e8;
        }
    }
    ctx->pc = 0x1FC47Cu;
    // 0x1fc47c: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x1fc47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1fc480: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC480u;
    {
        const bool branch_taken_0x1fc480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC480u;
        // 0x1fc484: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc480) {
            ctx->pc = 0x1FC4A0u;
            goto label_1fc4a0;
        }
    }
    ctx->pc = 0x1FC488u;
    // 0x1fc488: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fc488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc48c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc490: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fc490u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fc494: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x1fc494u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1fc498: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC498u;
    {
        const bool branch_taken_0x1fc498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC498u;
        // 0x1fc49c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc498) {
            ctx->pc = 0x1FC4A8u;
            goto label_1fc4a8;
        }
    }
    ctx->pc = 0x1FC4A0u;
label_1fc4a0:
    // 0x1fc4a0: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x1fc4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1fc4a4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fc4a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fc4a8:
    // 0x1fc4a8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc4a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc4ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc4acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc4b0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc4b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc4b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc4bc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc4bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc4c0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc4c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc4c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc4c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc4cc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc4d0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc4d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc4d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc4d8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc4dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC4DCu;
    {
        const bool branch_taken_0x1fc4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4DCu;
        // 0x1fc4e0: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4dc) {
            ctx->pc = 0x1FC4F4u;
            goto label_1fc4f4;
        }
    }
    ctx->pc = 0x1FC4E4u;
    // 0x1fc4e4: 0x0  nop
    ctx->pc = 0x1fc4e4u;
    // NOP
label_1fc4e8:
    // 0x1fc4e8: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x1fc4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1fc4ec: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fc4ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fc4f0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1fc4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1fc4f4:
    // 0x1fc4f4: 0x24a3ff20  addiu       $v1, $a1, -0xE0
    ctx->pc = 0x1fc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x1fc4f8: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x1fc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x1fc4fc: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1fc4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fc500: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FC500u;
    {
        const bool branch_taken_0x1fc500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC500u;
        // 0x1fc504: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc500) {
            ctx->pc = 0x1FC558u;
            goto label_1fc558;
        }
    }
    ctx->pc = 0x1FC508u;
    // 0x1fc508: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x1fc508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x1fc50c: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x1fc50cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fc510: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC510u;
    {
        const bool branch_taken_0x1fc510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC510u;
        // 0x1fc514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc510) {
            ctx->pc = 0x1FC558u;
            goto label_1fc558;
        }
    }
    ctx->pc = 0x1FC518u;
    // 0x1fc518: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x1fc518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1fc51c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC51Cu;
    {
        const bool branch_taken_0x1fc51c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC51Cu;
        // 0x1fc520: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc51c) {
            ctx->pc = 0x1FC530u;
            goto label_1fc530;
        }
    }
    ctx->pc = 0x1FC524u;
    // 0x1fc524: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fc524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc528: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FC528u;
    {
        const bool branch_taken_0x1fc528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC528u;
        // 0x1fc52c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc528) {
            ctx->pc = 0x1FC558u;
            goto label_1fc558;
        }
    }
    ctx->pc = 0x1FC530u;
label_1fc530:
    // 0x1fc530: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC530u;
    {
        const bool branch_taken_0x1fc530 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC530u;
        // 0x1fc534: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc530) {
            ctx->pc = 0x1FC548u;
            goto label_1fc548;
        }
    }
    ctx->pc = 0x1FC538u;
    // 0x1fc538: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fc538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc53c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC53Cu;
    {
        const bool branch_taken_0x1fc53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC53Cu;
        // 0x1fc540: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc53c) {
            ctx->pc = 0x1FC558u;
            goto label_1fc558;
        }
    }
    ctx->pc = 0x1FC544u;
    // 0x1fc544: 0x0  nop
    ctx->pc = 0x1fc544u;
    // NOP
label_1fc548:
    // 0x1fc548: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC548u;
    {
        const bool branch_taken_0x1fc548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fc548) {
            ctx->pc = 0x1FC54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC548u;
            // 0x1fc54c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC554u;
            goto label_1fc554;
        }
    }
    ctx->pc = 0x1FC550u;
    // 0x1fc550: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fc550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fc554:
    // 0x1fc554: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fc554u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc558:
    // 0x1fc558: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc55c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1fc55cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x1fc560: 0x15620027  bne         $t3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FC560u;
    {
        const bool branch_taken_0x1fc560 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC560u;
        // 0x1fc564: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc560) {
            ctx->pc = 0x1FC600u;
            goto label_1fc600;
        }
    }
    ctx->pc = 0x1FC568u;
    // 0x1fc568: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1fc568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1fc56c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FC56Cu;
    {
        const bool branch_taken_0x1fc56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC56Cu;
        // 0x1fc570: 0xa1402  srl         $v0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc56c) {
            ctx->pc = 0x1FC5E8u;
            goto label_1fc5e8;
        }
    }
    ctx->pc = 0x1FC574u;
    // 0x1fc574: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1fc574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1fc578: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC578u;
    {
        const bool branch_taken_0x1fc578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC578u;
        // 0x1fc57c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc578) {
            ctx->pc = 0x1FC5A0u;
            goto label_1fc5a0;
        }
    }
    ctx->pc = 0x1FC580u;
    // 0x1fc580: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fc580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc584: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc588: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fc588u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fc58c: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x1fc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1fc590: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fc590u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fc594: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC594u;
    {
        const bool branch_taken_0x1fc594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC594u;
        // 0x1fc598: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc594) {
            ctx->pc = 0x1FC5ACu;
            goto label_1fc5ac;
        }
    }
    ctx->pc = 0x1FC59Cu;
    // 0x1fc59c: 0x0  nop
    ctx->pc = 0x1fc59cu;
    // NOP
label_1fc5a0:
    // 0x1fc5a0: 0xa1402  srl         $v0, $t2, 16
    ctx->pc = 0x1fc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1fc5a4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fc5a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc5a8: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1fc5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1fc5ac:
    // 0x1fc5ac: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc5acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc5b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc5b4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc5b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc5b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc5bc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc5bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc5c0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc5c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc5c4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc5c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc5c8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc5cc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc5d0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc5d4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc5d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc5d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc5dc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc5e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC5E0u;
    {
        const bool branch_taken_0x1fc5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5E0u;
        // 0x1fc5e4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5e0) {
            ctx->pc = 0x1FC5F4u;
            goto label_1fc5f4;
        }
    }
    ctx->pc = 0x1FC5E8u;
label_1fc5e8:
    // 0x1fc5e8: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1fc5e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1fc5ec: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1fc5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x1fc5f0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1fc5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1fc5f4:
    // 0x1fc5f4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FC5F4u;
    {
        const bool branch_taken_0x1fc5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5F4u;
        // 0x1fc5f8: 0x240d0006  addiu       $t5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc5f4) {
            ctx->pc = 0x1FC664u;
            goto label_1fc664;
        }
    }
    ctx->pc = 0x1FC5FCu;
    // 0x1fc5fc: 0x0  nop
    ctx->pc = 0x1fc5fcu;
    // NOP
label_1fc600:
    // 0x1fc600: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC600u;
    {
        const bool branch_taken_0x1fc600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC600u;
        // 0x1fc604: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc600) {
            ctx->pc = 0x1FC620u;
            goto label_1fc620;
        }
    }
    ctx->pc = 0x1FC608u;
    // 0x1fc608: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc608u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc60c: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x1fc60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fc610: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fc610u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fc614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC614u;
    {
        const bool branch_taken_0x1fc614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC614u;
        // 0x1fc618: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc614) {
            ctx->pc = 0x1FC628u;
            goto label_1fc628;
        }
    }
    ctx->pc = 0x1FC61Cu;
    // 0x1fc61c: 0x0  nop
    ctx->pc = 0x1fc61cu;
    // NOP
label_1fc620:
    // 0x1fc620: 0xacea001c  sw          $t2, 0x1C($a3)
    ctx->pc = 0x1fc620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 10));
    // 0x1fc624: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fc624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fc628:
    // 0x1fc628: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc628u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc62c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc630: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc634: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc638: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc638u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc63c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc640: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc640u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc644: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc648: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc648u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc64c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc64cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc650: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc650u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc654: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x1fc654u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fc658: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc658u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc65c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc65cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc660: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fc664:
    // 0x1fc664: 0x24a2ff42  addiu       $v0, $a1, -0xBE
    ctx->pc = 0x1fc664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x1fc668: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fc668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fc66c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC66Cu;
    {
        const bool branch_taken_0x1fc66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc66c) {
            ctx->pc = 0x1FC670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC66Cu;
            // 0x1fc670: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC688u;
            goto label_1fc688;
        }
    }
    ctx->pc = 0x1FC674u;
    // 0x1fc674: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1fc674u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1fc678: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x1fc678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1fc67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC67Cu;
        // 0x1fc680: 0xace20024  sw          $v0, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC684u;
    // 0x1fc684: 0x0  nop
    ctx->pc = 0x1fc684u;
    // NOP
label_1fc688:
    // 0x1fc688: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FC688u;
    {
        const bool branch_taken_0x1fc688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC688u;
        // 0x1fc68c: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc688) {
            ctx->pc = 0x1FC6E0u;
            goto label_1fc6e0;
        }
    }
    ctx->pc = 0x1FC690u;
label_1fc690:
    // 0x1fc690: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1fc694: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fc694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fc698: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC698u;
    {
        const bool branch_taken_0x1fc698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc698) {
            ctx->pc = 0x1FC69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC698u;
            // 0x1fc69c: 0xa5200  sll         $t2, $t2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC6E0u;
            goto label_1fc6e0;
        }
    }
    ctx->pc = 0x1FC6A0u;
    // 0x1fc6a0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fc6a4: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fc6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fc6a8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc6a8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc6ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc6b0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc6b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc6b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc6b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc6bc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc6bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc6c0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc6c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc6c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc6c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc6cc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc6d0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc6d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc6d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc6d8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc6d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc6dc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc6dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fc6e0:
    // 0x1fc6e0: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x1fc6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x1fc6e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC6E4u;
    {
        const bool branch_taken_0x1fc6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6E4u;
        // 0x1fc6e8: 0xa1e02  srl         $v1, $t2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6e4) {
            ctx->pc = 0x1FC6F8u;
            goto label_1fc6f8;
        }
    }
    ctx->pc = 0x1FC6ECu;
    // 0x1fc6ec: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1fc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fc6f0: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc6f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fc6f8:
    // 0x1fc6f8: 0x1064ffe5  beq         $v1, $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1FC6F8u;
    {
        const bool branch_taken_0x1fc6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6F8u;
        // 0x1fc6fc: 0x28c2001f  slti        $v0, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6f8) {
            ctx->pc = 0x1FC690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc690;
        }
    }
    ctx->pc = 0x1FC700u;
    // 0x1fc700: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC700u;
    {
        const bool branch_taken_0x1fc700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC700u;
        // 0x1fc704: 0xa1f82  srl         $v1, $t2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc700) {
            ctx->pc = 0x1FC718u;
            goto label_1fc718;
        }
    }
    ctx->pc = 0x1FC708u;
    // 0x1fc708: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1fc708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1fc70c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fc70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc710: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc710u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc714: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fc718:
    // 0x1fc718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fc718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc71c: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1FC71Cu;
    {
        const bool branch_taken_0x1fc71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC71Cu;
        // 0x1fc720: 0x28c2001d  slti        $v0, $a2, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc71c) {
            ctx->pc = 0x1FC85Cu;
            goto label_1fc85c;
        }
    }
    ctx->pc = 0x1FC724u;
    // 0x1fc724: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1fc724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1fc728: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fc728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fc72c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC72Cu;
    {
        const bool branch_taken_0x1fc72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc72c) {
            ctx->pc = 0x1FC730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC72Cu;
            // 0x1fc730: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC774u;
            goto label_1fc774;
        }
    }
    ctx->pc = 0x1FC734u;
    // 0x1fc734: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fc738: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fc738u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fc73c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc73cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc740: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc744: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc748: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc74c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc74cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc750: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc754: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc754u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc758: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc75c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc75cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc760: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc764: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc768: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc76c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc76cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc770: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fc774:
    // 0x1fc774: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1fc774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fc778: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC778u;
    {
        const bool branch_taken_0x1fc778 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC778u;
        // 0x1fc77c: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc778) {
            ctx->pc = 0x1FC7C8u;
            goto label_1fc7c8;
        }
    }
    ctx->pc = 0x1FC780u;
    // 0x1fc780: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fc780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc784: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc788: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc790: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc794: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc798: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc798u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc79c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc7a0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc7a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc7a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc7a8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc7ac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc7b0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc7b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc7b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc7b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc7b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc7bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FC7BCu;
    {
        const bool branch_taken_0x1fc7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7BCu;
        // 0x1fc7c0: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7bc) {
            ctx->pc = 0x1FC7D0u;
            goto label_1fc7d0;
        }
    }
    ctx->pc = 0x1FC7C4u;
    // 0x1fc7c4: 0x0  nop
    ctx->pc = 0x1fc7c4u;
    // NOP
label_1fc7c8:
    // 0x1fc7c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fc7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fc7cc: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1fc7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1fc7d0:
    // 0x1fc7d0: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x1fc7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x1fc7d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC7D4u;
    {
        const bool branch_taken_0x1fc7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7D4u;
        // 0x1fc7d8: 0xa24c2  srl         $a0, $t2, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7d4) {
            ctx->pc = 0x1FC840u;
            goto label_1fc840;
        }
    }
    ctx->pc = 0x1FC7DCu;
    // 0x1fc7dc: 0x24c6ffed  addiu       $a2, $a2, -0x13
    ctx->pc = 0x1fc7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967277));
    // 0x1fc7e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC7E0u;
    {
        const bool branch_taken_0x1fc7e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7E0u;
        // 0x1fc7e4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7e0) {
            ctx->pc = 0x1FC800u;
            goto label_1fc800;
        }
    }
    ctx->pc = 0x1FC7E8u;
    // 0x1fc7e8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fc7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc7ec: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc7f0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fc7f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fc7f4: 0xa24c2  srl         $a0, $t2, 19
    ctx->pc = 0x1fc7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
    // 0x1fc7f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC7F8u;
    {
        const bool branch_taken_0x1fc7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7F8u;
        // 0x1fc7fc: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7f8) {
            ctx->pc = 0x1FC804u;
            goto label_1fc804;
        }
    }
    ctx->pc = 0x1FC800u;
label_1fc800:
    // 0x1fc800: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fc800u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fc804:
    // 0x1fc804: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc804u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc808: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc80c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc80cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc810: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc814: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc814u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc818: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc81c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc81cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc820: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc824: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc824u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc828: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc82c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc82cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc830: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc834: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc838: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC838u;
    {
        const bool branch_taken_0x1fc838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC838u;
        // 0x1fc83c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc838) {
            ctx->pc = 0x1FC848u;
            goto label_1fc848;
        }
    }
    ctx->pc = 0x1FC840u;
label_1fc840:
    // 0x1fc840: 0xa5340  sll         $t2, $t2, 13
    ctx->pc = 0x1fc840u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 13));
    // 0x1fc844: 0x24c6000d  addiu       $a2, $a2, 0xD
    ctx->pc = 0x1fc844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13));
label_1fc848:
    // 0x1fc848: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1fc848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1fc84c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1fc84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fc850: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x1fc850u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1fc854: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x1fc854u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x1fc858: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1fc858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
label_1fc85c:
    // 0x1fc85c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC85Cu;
    {
        const bool branch_taken_0x1fc85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC85Cu;
        // 0x1fc860: 0xa1f02  srl         $v1, $t2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc85c) {
            ctx->pc = 0x1FC874u;
            goto label_1fc874;
        }
    }
    ctx->pc = 0x1FC864u;
    // 0x1fc864: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1fc864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1fc868: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fc868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc86c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc870: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1fc870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1fc874:
    // 0x1fc874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fc874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc878: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1FC878u;
    {
        const bool branch_taken_0x1fc878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC878u;
        // 0x1fc87c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc878) {
            ctx->pc = 0x1FCAD0u;
            goto label_1fcad0;
        }
    }
    ctx->pc = 0x1FC880u;
    // 0x1fc880: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1fc880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1fc884: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fc884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fc888: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC888u;
    {
        const bool branch_taken_0x1fc888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc888) {
            ctx->pc = 0x1FC88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC888u;
            // 0x1fc88c: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8D0u;
            goto label_1fc8d0;
        }
    }
    ctx->pc = 0x1FC890u;
    // 0x1fc890: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fc890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fc894: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fc894u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fc898: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc898u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc89c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc89cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc8a0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc8a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc8a8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc8ac: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc8acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc8b0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc8b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc8b4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc8b8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc8bc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc8c0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc8c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc8c4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc8c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc8c8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc8cc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc8ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fc8d0:
    // 0x1fc8d0: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1fc8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1fc8d4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC8D4u;
    {
        const bool branch_taken_0x1fc8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8D4u;
        // 0x1fc8d8: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8d4) {
            ctx->pc = 0x1FC940u;
            goto label_1fc940;
        }
    }
    ctx->pc = 0x1FC8DCu;
    // 0x1fc8dc: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x1fc8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x1fc8e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC8E0u;
    {
        const bool branch_taken_0x1fc8e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8E0u;
        // 0x1fc8e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8e0) {
            ctx->pc = 0x1FC900u;
            goto label_1fc900;
        }
    }
    ctx->pc = 0x1FC8E8u;
    // 0x1fc8e8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc8ec: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc8f0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fc8f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fc8f4: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x1fc8f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1fc8f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC8F8u;
    {
        const bool branch_taken_0x1fc8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F8u;
        // 0x1fc8fc: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8f8) {
            ctx->pc = 0x1FC904u;
            goto label_1fc904;
        }
    }
    ctx->pc = 0x1FC900u;
label_1fc900:
    // 0x1fc900: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fc900u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fc904:
    // 0x1fc904: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc904u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc908: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc90c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc90cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc910: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc914: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc914u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc918: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc91c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc91cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc920: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc924: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc924u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc928: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc92c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc92cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc930: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc934: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc934u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC938u;
    {
        const bool branch_taken_0x1fc938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC938u;
        // 0x1fc93c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc938) {
            ctx->pc = 0x1FC948u;
            goto label_1fc948;
        }
    }
    ctx->pc = 0x1FC940u;
label_1fc940:
    // 0x1fc940: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1fc944: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1fc944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1fc948:
    // 0x1fc948: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fc948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fc94c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fc94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fc950: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FC950u;
    {
        const bool branch_taken_0x1fc950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc950) {
            ctx->pc = 0x1FC954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC950u;
            // 0x1fc954: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC998u;
            goto label_1fc998;
        }
    }
    ctx->pc = 0x1FC958u;
    // 0x1fc958: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fc958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fc95c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fc95cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fc960: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc960u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc964: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc968: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc96c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc96cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc970: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc974: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc978: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc978u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc97c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc97cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc980: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc980u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc984: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc988: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc98c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc98cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc990: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc990u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc994: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc994u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fc998:
    // 0x1fc998: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1fc998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fc99c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FC99Cu;
    {
        const bool branch_taken_0x1fc99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC99Cu;
        // 0x1fc9a0: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc99c) {
            ctx->pc = 0x1FCA08u;
            goto label_1fca08;
        }
    }
    ctx->pc = 0x1FC9A4u;
    // 0x1fc9a4: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1fc9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1fc9a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC9A8u;
    {
        const bool branch_taken_0x1fc9a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9A8u;
        // 0x1fc9ac: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9a8) {
            ctx->pc = 0x1FC9C8u;
            goto label_1fc9c8;
        }
    }
    ctx->pc = 0x1FC9B0u;
    // 0x1fc9b0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fc9b4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fc9b8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fc9b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fc9bc: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x1fc9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1fc9c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC9C0u;
    {
        const bool branch_taken_0x1fc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9C0u;
        // 0x1fc9c4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9c0) {
            ctx->pc = 0x1FC9CCu;
            goto label_1fc9cc;
        }
    }
    ctx->pc = 0x1FC9C8u;
label_1fc9c8:
    // 0x1fc9c8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fc9c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fc9cc:
    // 0x1fc9cc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc9d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc9d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc9d4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc9d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc9dc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc9e0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fc9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc9e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fc9e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fc9e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc9e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc9ec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fc9f0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fc9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fc9f4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fc9f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fc9f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fc9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fc9fc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fc9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fca00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCA00u;
    {
        const bool branch_taken_0x1fca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA00u;
        // 0x1fca04: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca00) {
            ctx->pc = 0x1FCA10u;
            goto label_1fca10;
        }
    }
    ctx->pc = 0x1FCA08u;
label_1fca08:
    // 0x1fca08: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1fca08u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1fca0c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1fca0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fca10:
    // 0x1fca10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fca10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fca14: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fca14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fca18: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCA18u;
    {
        const bool branch_taken_0x1fca18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fca18) {
            ctx->pc = 0x1FCA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA18u;
            // 0x1fca1c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCA60u;
            goto label_1fca60;
        }
    }
    ctx->pc = 0x1FCA20u;
    // 0x1fca20: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fca20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fca24: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fca24u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fca28: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fca28u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fca2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fca2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fca30: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fca30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fca34: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fca34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fca38: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fca38u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fca3c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fca3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fca40: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fca40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fca44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fca44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fca48: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fca48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fca4c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fca4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fca50: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fca50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fca54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fca54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fca58: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fca58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fca5c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fca5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fca60:
    // 0x1fca60: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1fca60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fca64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCA64u;
    {
        const bool branch_taken_0x1fca64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA64u;
        // 0x1fca68: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca64) {
            ctx->pc = 0x1FCA90u;
            goto label_1fca90;
        }
    }
    ctx->pc = 0x1FCA6Cu;
    // 0x1fca6c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1fca6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1fca70: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCA70u;
    {
        const bool branch_taken_0x1fca70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA70u;
        // 0x1fca74: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca70) {
            ctx->pc = 0x1FCA88u;
            goto label_1fca88;
        }
    }
    ctx->pc = 0x1FCA78u;
    // 0x1fca78: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fca78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fca7c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fca80: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fca80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fca84: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x1fca84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_1fca88:
    // 0x1fca88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCA88u;
    {
        const bool branch_taken_0x1fca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA88u;
        // 0x1fca8c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca88) {
            ctx->pc = 0x1FCA94u;
            goto label_1fca94;
        }
    }
    ctx->pc = 0x1FCA90u;
label_1fca90:
    // 0x1fca90: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1fca90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fca94:
    // 0x1fca94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fca94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fca98: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fca98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fca9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCA9Cu;
    {
        const bool branch_taken_0x1fca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA9Cu;
        // 0x1fcaa0: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca9c) {
            ctx->pc = 0x1FCAACu;
            goto label_1fcaac;
        }
    }
    ctx->pc = 0x1FCAA4u;
    // 0x1fcaa4: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcaa8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1fcaa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1fcaac:
    // 0x1fcaac: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1fcaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1fcab0: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1fcab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1fcab4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1fcab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1fcab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fcab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fcabc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fcabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcac0: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1fcac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1fcac4: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1fcac4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1fcac8: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1FCAC8u;
    {
        const bool branch_taken_0x1fcac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAC8u;
        // 0x1fcacc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcac8) {
            ctx->pc = 0x1FD010u;
            goto label_1fd010;
        }
    }
    ctx->pc = 0x1FCAD0u;
label_1fcad0:
    // 0x1fcad0: 0x54620149  bnel        $v1, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x1FCAD0u;
    {
        const bool branch_taken_0x1fcad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fcad0) {
            ctx->pc = 0x1FCAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCAD0u;
            // 0x1fcad4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFF8u;
            goto label_1fcff8;
        }
    }
    ctx->pc = 0x1FCAD8u;
    // 0x1fcad8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1fcad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1fcadc: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fcadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcae0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCAE0u;
    {
        const bool branch_taken_0x1fcae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcae0) {
            ctx->pc = 0x1FCAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCAE0u;
            // 0x1fcae4: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCB28u;
            goto label_1fcb28;
        }
    }
    ctx->pc = 0x1FCAE8u;
    // 0x1fcae8: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcaec: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fcaecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fcaf0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcaf0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcaf4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcaf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcaf8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcafc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcb00: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcb00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcb04: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcb08: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcb08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcb0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcb0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcb10: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcb10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcb14: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcb14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcb18: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcb18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcb1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcb1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcb20: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcb20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcb24: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcb24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fcb28:
    // 0x1fcb28: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1fcb28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1fcb2c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCB2Cu;
    {
        const bool branch_taken_0x1fcb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB2Cu;
        // 0x1fcb30: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb2c) {
            ctx->pc = 0x1FCB98u;
            goto label_1fcb98;
        }
    }
    ctx->pc = 0x1FCB34u;
    // 0x1fcb34: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x1fcb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x1fcb38: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCB38u;
    {
        const bool branch_taken_0x1fcb38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB38u;
        // 0x1fcb3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb38) {
            ctx->pc = 0x1FCB58u;
            goto label_1fcb58;
        }
    }
    ctx->pc = 0x1FCB40u;
    // 0x1fcb40: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fcb44: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fcb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fcb48: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fcb48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fcb4c: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x1fcb4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1fcb50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCB50u;
    {
        const bool branch_taken_0x1fcb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB50u;
        // 0x1fcb54: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb50) {
            ctx->pc = 0x1FCB5Cu;
            goto label_1fcb5c;
        }
    }
    ctx->pc = 0x1FCB58u;
label_1fcb58:
    // 0x1fcb58: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fcb58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fcb5c:
    // 0x1fcb5c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcb5cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcb60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcb60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcb64: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcb64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcb68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcb68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcb6c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcb6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcb70: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcb74: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcb74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcb78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcb7c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcb80: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcb80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcb84: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcb84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcb88: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcb88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcb8c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcb90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCB90u;
    {
        const bool branch_taken_0x1fcb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB90u;
        // 0x1fcb94: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb90) {
            ctx->pc = 0x1FCBA0u;
            goto label_1fcba0;
        }
    }
    ctx->pc = 0x1FCB98u;
label_1fcb98:
    // 0x1fcb98: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1fcb98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1fcb9c: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1fcb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1fcba0:
    // 0x1fcba0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcba4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fcba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcba8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCBA8u;
    {
        const bool branch_taken_0x1fcba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcba8) {
            ctx->pc = 0x1FCBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCBA8u;
            // 0x1fcbac: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCBF0u;
            goto label_1fcbf0;
        }
    }
    ctx->pc = 0x1FCBB0u;
    // 0x1fcbb0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcbb4: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fcbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fcbb8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcbb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcbbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcbc0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcbc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcbc4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcbc8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcbcc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcbccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcbd0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcbd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcbd4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcbd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcbd8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcbdc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcbdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcbe0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcbe0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcbe4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcbe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcbe8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcbe8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcbec: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcbecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fcbf0:
    // 0x1fcbf0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1fcbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fcbf4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCBF4u;
    {
        const bool branch_taken_0x1fcbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF4u;
        // 0x1fcbf8: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbf4) {
            ctx->pc = 0x1FCC60u;
            goto label_1fcc60;
        }
    }
    ctx->pc = 0x1FCBFCu;
    // 0x1fcbfc: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1fcbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1fcc00: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCC00u;
    {
        const bool branch_taken_0x1fcc00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC00u;
        // 0x1fcc04: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc00) {
            ctx->pc = 0x1FCC20u;
            goto label_1fcc20;
        }
    }
    ctx->pc = 0x1FCC08u;
    // 0x1fcc08: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fcc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fcc0c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fcc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fcc10: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fcc10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fcc14: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x1fcc14u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1fcc18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCC18u;
    {
        const bool branch_taken_0x1fcc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC18u;
        // 0x1fcc1c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc18) {
            ctx->pc = 0x1FCC24u;
            goto label_1fcc24;
        }
    }
    ctx->pc = 0x1FCC20u;
label_1fcc20:
    // 0x1fcc20: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fcc20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fcc24:
    // 0x1fcc24: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcc28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcc28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcc2c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcc30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcc34: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcc34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcc38: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcc38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcc3c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcc3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcc40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcc40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcc44: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcc44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcc48: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcc4c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcc4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcc50: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcc50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcc54: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcc54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcc58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCC58u;
    {
        const bool branch_taken_0x1fcc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC58u;
        // 0x1fcc5c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc58) {
            ctx->pc = 0x1FCC68u;
            goto label_1fcc68;
        }
    }
    ctx->pc = 0x1FCC60u;
label_1fcc60:
    // 0x1fcc60: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1fcc60u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1fcc64: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1fcc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fcc68:
    // 0x1fcc68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fcc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcc6c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fcc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcc70: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCC70u;
    {
        const bool branch_taken_0x1fcc70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcc70) {
            ctx->pc = 0x1FCC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCC70u;
            // 0x1fcc74: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCCB8u;
            goto label_1fccb8;
        }
    }
    ctx->pc = 0x1FCC78u;
    // 0x1fcc78: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcc7c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fcc7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fcc80: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcc84: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcc84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcc88: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcc8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcc8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcc90: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcc94: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcc94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcc98: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcc98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcc9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcca0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcca0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcca4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcca8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcca8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fccac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fccacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fccb0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fccb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fccb4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fccb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fccb8:
    // 0x1fccb8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1fccb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fccbc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCCBCu;
    {
        const bool branch_taken_0x1fccbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCBCu;
        // 0x1fccc0: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccbc) {
            ctx->pc = 0x1FCD28u;
            goto label_1fcd28;
        }
    }
    ctx->pc = 0x1FCCC4u;
    // 0x1fccc4: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1fccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1fccc8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCCC8u;
    {
        const bool branch_taken_0x1fccc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCC8u;
        // 0x1fcccc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fccc8) {
            ctx->pc = 0x1FCCE8u;
            goto label_1fcce8;
        }
    }
    ctx->pc = 0x1FCCD0u;
    // 0x1fccd0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fccd4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fccd8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fccd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fccdc: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x1fccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1fcce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCCE0u;
    {
        const bool branch_taken_0x1fcce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCE0u;
        // 0x1fcce4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcce0) {
            ctx->pc = 0x1FCCECu;
            goto label_1fccec;
        }
    }
    ctx->pc = 0x1FCCE8u;
label_1fcce8:
    // 0x1fcce8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fcce8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fccec:
    // 0x1fccec: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fccecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fccf0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fccf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fccf4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fccf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fccf8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fccf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fccfc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fccfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcd00: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcd00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcd04: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcd04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcd08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcd08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcd0c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcd0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcd10: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcd10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcd14: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcd14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcd18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcd18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcd1c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcd20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCD20u;
    {
        const bool branch_taken_0x1fcd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD20u;
        // 0x1fcd24: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd20) {
            ctx->pc = 0x1FCD30u;
            goto label_1fcd30;
        }
    }
    ctx->pc = 0x1FCD28u;
label_1fcd28:
    // 0x1fcd28: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1fcd28u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1fcd2c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1fcd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fcd30:
    // 0x1fcd30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fcd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcd34: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fcd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcd38: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCD38u;
    {
        const bool branch_taken_0x1fcd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd38) {
            ctx->pc = 0x1FCD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCD38u;
            // 0x1fcd3c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCD80u;
            goto label_1fcd80;
        }
    }
    ctx->pc = 0x1FCD40u;
    // 0x1fcd40: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcd40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcd44: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fcd44u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fcd48: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcd4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcd4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcd50: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcd50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcd54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcd54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcd58: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcd58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcd5c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcd5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcd60: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcd60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcd64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcd64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcd68: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcd6c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcd6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcd70: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcd70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcd74: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcd74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcd78: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcd78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcd7c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcd7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fcd80:
    // 0x1fcd80: 0x31620007  andi        $v0, $t3, 0x7
    ctx->pc = 0x1fcd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x1fcd84: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1fcd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1fcd88: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1fcd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1fcd8c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1fcd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1fcd90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fcd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fcd94: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1fcd94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1fcd98: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1fcd9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1fcd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1fcda0: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x1fcda0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcda4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FCDA4u;
    {
        const bool branch_taken_0x1fcda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDA4u;
        // 0x1fcda8: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcda4) {
            ctx->pc = 0x1FCDF0u;
            goto label_1fcdf0;
        }
    }
    ctx->pc = 0x1FCDACu;
    // 0x1fcdac: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcdb0: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fcdb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fcdb4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcdb4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcdb8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcdb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcdbc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcdbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcdc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcdc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcdc4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcdc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcdc8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcdc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcdcc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcdccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcdd0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcdd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcdd4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcdd8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcdd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcddc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcde0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcde0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcde4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcde4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcde8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCDE8u;
    {
        const bool branch_taken_0x1fcde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDE8u;
        // 0x1fcdec: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcde8) {
            ctx->pc = 0x1FCDF4u;
            goto label_1fcdf4;
        }
    }
    ctx->pc = 0x1FCDF0u;
label_1fcdf0:
    // 0x1fcdf0: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1fcdf0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1fcdf4:
    // 0x1fcdf4: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1fcdf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1fcdf8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FCDF8u;
    {
        const bool branch_taken_0x1fcdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDF8u;
        // 0x1fcdfc: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdf8) {
            ctx->pc = 0x1FCE68u;
            goto label_1fce68;
        }
    }
    ctx->pc = 0x1FCE00u;
    // 0x1fce00: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x1fce00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x1fce04: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCE04u;
    {
        const bool branch_taken_0x1fce04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE04u;
        // 0x1fce08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce04) {
            ctx->pc = 0x1FCE28u;
            goto label_1fce28;
        }
    }
    ctx->pc = 0x1FCE0Cu;
    // 0x1fce0c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fce10: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fce10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fce14: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fce14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fce18: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x1fce18u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1fce1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCE1Cu;
    {
        const bool branch_taken_0x1fce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE1Cu;
        // 0x1fce20: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce1c) {
            ctx->pc = 0x1FCE2Cu;
            goto label_1fce2c;
        }
    }
    ctx->pc = 0x1FCE24u;
    // 0x1fce24: 0x0  nop
    ctx->pc = 0x1fce24u;
    // NOP
label_1fce28:
    // 0x1fce28: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fce28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fce2c:
    // 0x1fce2c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fce2cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fce30: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fce30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fce34: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fce34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fce38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fce38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fce3c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fce3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fce40: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fce40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fce44: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fce44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fce48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fce48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fce4c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fce4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fce50: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fce50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fce54: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fce54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fce58: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fce58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fce5c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fce5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fce60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCE60u;
    {
        const bool branch_taken_0x1fce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE60u;
        // 0x1fce64: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce60) {
            ctx->pc = 0x1FCE70u;
            goto label_1fce70;
        }
    }
    ctx->pc = 0x1FCE68u;
label_1fce68:
    // 0x1fce68: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1fce68u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1fce6c: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1fce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1fce70:
    // 0x1fce70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fce70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fce74: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fce74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fce78: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCE78u;
    {
        const bool branch_taken_0x1fce78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce78) {
            ctx->pc = 0x1FCE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCE78u;
            // 0x1fce7c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCEC0u;
            goto label_1fcec0;
        }
    }
    ctx->pc = 0x1FCE80u;
    // 0x1fce80: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fce80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fce84: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fce84u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fce88: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fce88u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fce8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fce90: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fce90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fce94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fce94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fce98: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fce98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fce9c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fce9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcea0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcea4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcea8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fceac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fceacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fceb0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fceb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fceb4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fceb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fceb8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fceb8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcebc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fcec0:
    // 0x1fcec0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1fcec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fcec4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FCEC4u;
    {
        const bool branch_taken_0x1fcec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEC4u;
        // 0x1fcec8: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcec4) {
            ctx->pc = 0x1FCF30u;
            goto label_1fcf30;
        }
    }
    ctx->pc = 0x1FCECCu;
    // 0x1fcecc: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1fceccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1fced0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCED0u;
    {
        const bool branch_taken_0x1fced0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCED0u;
        // 0x1fced4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fced0) {
            ctx->pc = 0x1FCEF0u;
            goto label_1fcef0;
        }
    }
    ctx->pc = 0x1FCED8u;
    // 0x1fced8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fced8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fcedc: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fcee0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fcee0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fcee4: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x1fcee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1fcee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCEE8u;
    {
        const bool branch_taken_0x1fcee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEE8u;
        // 0x1fceec: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcee8) {
            ctx->pc = 0x1FCEF4u;
            goto label_1fcef4;
        }
    }
    ctx->pc = 0x1FCEF0u;
label_1fcef0:
    // 0x1fcef0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1fcef0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fcef4:
    // 0x1fcef4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcef4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcef8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcefc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcefcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcf00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcf00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcf04: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcf04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcf08: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcf08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcf0c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcf0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcf10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcf14: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcf14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcf18: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcf18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcf1c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcf1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcf20: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcf20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcf24: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcf24u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcf28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCF28u;
    {
        const bool branch_taken_0x1fcf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF28u;
        // 0x1fcf2c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf28) {
            ctx->pc = 0x1FCF38u;
            goto label_1fcf38;
        }
    }
    ctx->pc = 0x1FCF30u;
label_1fcf30:
    // 0x1fcf30: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1fcf30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1fcf34: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1fcf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fcf38:
    // 0x1fcf38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fcf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcf3c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fcf3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcf40: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCF40u;
    {
        const bool branch_taken_0x1fcf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf40) {
            ctx->pc = 0x1FCF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF40u;
            // 0x1fcf44: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCF88u;
            goto label_1fcf88;
        }
    }
    ctx->pc = 0x1FCF48u;
    // 0x1fcf48: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcf4c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1fcf4cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fcf50: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1fcf50u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcf54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcf54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcf58: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcf58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcf5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcf5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcf60: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcf60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcf64: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fcf64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcf68: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcf68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1fcf6c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcf6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcf70: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcf70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcf74: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1fcf74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fcf78: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1fcf78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1fcf7c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fcf7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fcf80: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1fcf80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1fcf84: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1fcf84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1fcf88:
    // 0x1fcf88: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1fcf88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1fcf8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCF8Cu;
    {
        const bool branch_taken_0x1fcf8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF8Cu;
        // 0x1fcf90: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf8c) {
            ctx->pc = 0x1FCFB8u;
            goto label_1fcfb8;
        }
    }
    ctx->pc = 0x1FCF94u;
    // 0x1fcf94: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1fcf94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1fcf98: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCF98u;
    {
        const bool branch_taken_0x1fcf98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF98u;
        // 0x1fcf9c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf98) {
            ctx->pc = 0x1FCFB0u;
            goto label_1fcfb0;
        }
    }
    ctx->pc = 0x1FCFA0u;
    // 0x1fcfa0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1fcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fcfa4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1fcfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fcfa8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fcfa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fcfac: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x1fcfacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_1fcfb0:
    // 0x1fcfb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FCFB0u;
    {
        const bool branch_taken_0x1fcfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFB0u;
        // 0x1fcfb4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfb0) {
            ctx->pc = 0x1FCFBCu;
            goto label_1fcfbc;
        }
    }
    ctx->pc = 0x1FCFB8u;
label_1fcfb8:
    // 0x1fcfb8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1fcfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1fcfbc:
    // 0x1fcfbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fcfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fcfc0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fcfc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcfc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCFC4u;
    {
        const bool branch_taken_0x1fcfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFC4u;
        // 0x1fcfc8: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfc4) {
            ctx->pc = 0x1FCFD4u;
            goto label_1fcfd4;
        }
    }
    ctx->pc = 0x1FCFCCu;
    // 0x1fcfcc: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fcfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fcfd0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1fcfd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1fcfd4:
    // 0x1fcfd4: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1fcfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1fcfd8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1fcfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1fcfdc: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1fcfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1fcfe0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fcfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fcfe4: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1fcfe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1fcfe8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1fcfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1fcfec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCFECu;
    {
        const bool branch_taken_0x1fcfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFECu;
        // 0x1fcff0: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfec) {
            ctx->pc = 0x1FD014u;
            goto label_1fd014;
        }
    }
    ctx->pc = 0x1FCFF4u;
    // 0x1fcff4: 0x0  nop
    ctx->pc = 0x1fcff4u;
    // NOP
label_1fcff8:
    // 0x1fcff8: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1fcff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fcffc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCFFCu;
    {
        const bool branch_taken_0x1fcffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFFCu;
        // 0x1fd000: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcffc) {
            ctx->pc = 0x1FD00Cu;
            goto label_1fd00c;
        }
    }
    ctx->pc = 0x1FD004u;
    // 0x1fd004: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1fd004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1fd008: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1fd008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1fd00c:
    // 0x1fd00c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1fd00cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_1fd010:
    // 0x1fd010: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1fd010u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_1fd014:
    // 0x1fd014: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x1fd014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1fd018: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1fd018u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1fd01c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1fd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1fd020: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1fd020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1fd024: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x1fd024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1fd028: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1fd028u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1fd02c: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x1fd02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1fd030: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1fd030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1fd034: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1fd034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd038: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD038u;
        // 0x1fd03c: 0xace30024  sw          $v1, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD040u;
}
