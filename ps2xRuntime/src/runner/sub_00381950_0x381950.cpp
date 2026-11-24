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

// Function: sub_00381950
// Address: 0x381950 - 0x381bec
void sub_00381950_0x381950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381950_0x381950");
#endif

    switch (ctx->pc) {
        case 0x381978u: goto label_381978;
        case 0x381b24u: goto label_381b24;
        case 0x381b60u: goto label_381b60;
        case 0x381bd4u: goto label_381bd4;
        default: break;
    }

    ctx->pc = 0x381950u;

    // 0x381950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x381950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x381954: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x381954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x381958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38195c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381960: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x381960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x381964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381968: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x381968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x38196c: 0x8e452b18  lw          $a1, 0x2B18($s2)
    ctx->pc = 0x38196cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11032)));
    // 0x381970: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x381970u;
    SET_GPR_U32(ctx, 31, 0x381978u);
    ctx->pc = 0x381974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381970u;
    // 0x381974: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x381970u, 0x381978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381978u;
label_381978:
    // 0x381978: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x381978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x38197c: 0x3c070002  lui         $a3, 0x2
    ctx->pc = 0x38197cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2 << 16));
    // 0x381980: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x381980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x381984: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x381984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x381988: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x381988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x38198c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x38198cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x381990: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x381990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x381994: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x381994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x381998: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x381998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x38199c: 0x35080080  ori         $t0, $t0, 0x80
    ctx->pc = 0x38199cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x3819a0: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x3819a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x3819a4: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x3819a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819a8: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x3819a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x3819ac: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x3819acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x3819b0: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x3819b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819b4: 0x35080800  ori         $t0, $t0, 0x800
    ctx->pc = 0x3819b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2048);
    // 0x3819b8: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x3819b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x3819bc: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x3819bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819c0: 0x35081000  ori         $t0, $t0, 0x1000
    ctx->pc = 0x3819c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4096);
    // 0x3819c4: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x3819c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x3819c8: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x3819c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819cc: 0x35082000  ori         $t0, $t0, 0x2000
    ctx->pc = 0x3819ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8192);
    // 0x3819d0: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x3819d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x3819d4: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x3819d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819d8: 0x35084000  ori         $t0, $t0, 0x4000
    ctx->pc = 0x3819d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x3819dc: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x3819dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x3819e0: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x3819e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819e4: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x3819e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x3819e8: 0xae480148  sw          $t0, 0x148($s2)
    ctx->pc = 0x3819e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 8));
    // 0x3819ec: 0x8e480148  lw          $t0, 0x148($s2)
    ctx->pc = 0x3819ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819f0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3819f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3819f4: 0xae470148  sw          $a3, 0x148($s2)
    ctx->pc = 0x3819f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 7));
    // 0x3819f8: 0x8e470148  lw          $a3, 0x148($s2)
    ctx->pc = 0x3819f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x3819fc: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x3819fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x381a00: 0xae460148  sw          $a2, 0x148($s2)
    ctx->pc = 0x381a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 6));
    // 0x381a04: 0x8e460148  lw          $a2, 0x148($s2)
    ctx->pc = 0x381a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a08: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x381a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x381a0c: 0xae450148  sw          $a1, 0x148($s2)
    ctx->pc = 0x381a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 5));
    // 0x381a10: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x381a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a14: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x381a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x381a18: 0xae440148  sw          $a0, 0x148($s2)
    ctx->pc = 0x381a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 4));
    // 0x381a1c: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x381a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a20: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x381a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x381a24: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x381a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x381a28: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x381a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a2c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x381a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x381a30: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x381a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x381a34: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x381a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a38: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x381a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x381a3c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x381A3Cu;
    {
        const bool branch_taken_0x381a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A3Cu;
        // 0x381a40: 0xae430148  sw          $v1, 0x148($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a3c) {
            ctx->pc = 0x381AD0u;
            goto label_381ad0;
        }
    }
    ctx->pc = 0x381A44u;
    // 0x381a44: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x381a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x381a48: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x381a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x381a4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x381A4Cu;
    {
        const bool branch_taken_0x381a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x381a4c) {
            ctx->pc = 0x381A60u;
            goto label_381a60;
        }
    }
    ctx->pc = 0x381A54u;
    // 0x381a54: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x381a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a58: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x381a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x381a5c: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x381a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
label_381a60:
    // 0x381a60: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x381a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x381a64: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x381a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x381a68: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x381A68u;
    {
        const bool branch_taken_0x381a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x381a68) {
            ctx->pc = 0x381A80u;
            goto label_381a80;
        }
    }
    ctx->pc = 0x381A70u;
    // 0x381a70: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x381a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a74: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x381a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x381a78: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x381a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x381a7c: 0x0  nop
    ctx->pc = 0x381a7cu;
    // NOP
label_381a80:
    // 0x381a80: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x381a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x381a84: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x381a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x381a88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x381A88u;
    {
        const bool branch_taken_0x381a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x381a88) {
            ctx->pc = 0x381AA0u;
            goto label_381aa0;
        }
    }
    ctx->pc = 0x381A90u;
    // 0x381a90: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x381a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x381a94: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x381a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x381a98: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x381a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x381a9c: 0x0  nop
    ctx->pc = 0x381a9cu;
    // NOP
label_381aa0:
    // 0x381aa0: 0x8c4406ac  lw          $a0, 0x6AC($v0)
    ctx->pc = 0x381aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x381aa4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x381aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x381aa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x381aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x381aac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x381AACu;
    {
        const bool branch_taken_0x381aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x381aac) {
            ctx->pc = 0x381AD0u;
            goto label_381ad0;
        }
    }
    ctx->pc = 0x381AB4u;
    // 0x381ab4: 0x92432b21  lbu         $v1, 0x2B21($s2)
    ctx->pc = 0x381ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11041)));
    // 0x381ab8: 0x306300e3  andi        $v1, $v1, 0xE3
    ctx->pc = 0x381ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)227);
    // 0x381abc: 0xa2432b21  sb          $v1, 0x2B21($s2)
    ctx->pc = 0x381abcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11041), (uint8_t)GPR_U32(ctx, 3));
    // 0x381ac0: 0x92432b21  lbu         $v1, 0x2B21($s2)
    ctx->pc = 0x381ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11041)));
    // 0x381ac4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x381ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x381ac8: 0xa2432b21  sb          $v1, 0x2B21($s2)
    ctx->pc = 0x381ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11041), (uint8_t)GPR_U32(ctx, 3));
    // 0x381acc: 0x0  nop
    ctx->pc = 0x381accu;
    // NOP
label_381ad0:
    // 0x381ad0: 0x8e4306c8  lw          $v1, 0x6C8($s2)
    ctx->pc = 0x381ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x381ad4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x381ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x381ad8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x381ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x381adc: 0xae4306c8  sw          $v1, 0x6C8($s2)
    ctx->pc = 0x381adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1736), GPR_U32(ctx, 3));
    // 0x381ae0: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x381ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x381ae4: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x381ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x381ae8: 0xae4306cc  sw          $v1, 0x6CC($s2)
    ctx->pc = 0x381ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
    // 0x381aec: 0x8e4306c8  lw          $v1, 0x6C8($s2)
    ctx->pc = 0x381aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x381af0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x381af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x381af4: 0xae4306c8  sw          $v1, 0x6C8($s2)
    ctx->pc = 0x381af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1736), GPR_U32(ctx, 3));
    // 0x381af8: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x381af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x381afc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x381afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x381b00: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x381B00u;
    {
        const bool branch_taken_0x381b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B00u;
        // 0x381b04: 0xae4306cc  sw          $v1, 0x6CC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b00) {
            ctx->pc = 0x381BC8u;
            goto label_381bc8;
        }
    }
    ctx->pc = 0x381B08u;
    // 0x381b08: 0x8c51004c  lw          $s1, 0x4C($v0)
    ctx->pc = 0x381b08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x381b0c: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x381b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x381b10: 0x92432b20  lbu         $v1, 0x2B20($s2)
    ctx->pc = 0x381b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x381b14: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x381b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x381b18: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x381b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x381b1c: 0xc0968b8  jal         func_25A2E0
    ctx->pc = 0x381B1Cu;
    SET_GPR_U32(ctx, 31, 0x381B24u);
    ctx->pc = 0x381B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B1Cu;
    // 0x381b20: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2E0u, 0x381B1Cu, 0x381B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B24u;
label_381b24:
    // 0x381b24: 0x92432b20  lbu         $v1, 0x2B20($s2)
    ctx->pc = 0x381b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x381b28: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x381b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x381b2c: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x381b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x381b30: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x381b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x381b34: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x381b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x381b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x381b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x381b3c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x381b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x381b40: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x381b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x381b44: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x381b44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x381b48: 0x92422b20  lbu         $v0, 0x2B20($s2)
    ctx->pc = 0x381b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x381b4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x381b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x381b50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x381b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x381b54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x381b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x381b58: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x381B58u;
    {
        const bool branch_taken_0x381b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B58u;
        // 0x381b5c: 0x304900ff  andi        $t1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x381b58) {
            ctx->pc = 0x381BB0u;
            goto label_381bb0;
        }
    }
    ctx->pc = 0x381B60u;
label_381b60:
    // 0x381b60: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x381b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x381b64: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x381b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x381b68: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x381b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x381b6c: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x381b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x381b70: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x381b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x381b74: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x381b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x381b78: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x381b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381b7c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x381b7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x381b80: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x381b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x381b84: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x381b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x381b88: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x381b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x381b8c: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x381b8cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x381b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x381b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x381b94: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x381b94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x381b98: 0x78a70010  lq          $a3, 0x10($a1)
    ctx->pc = 0x381b98u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x381b9c: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x381b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x381ba0: 0x78a70020  lq          $a3, 0x20($a1)
    ctx->pc = 0x381ba0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x381ba4: 0x7c470020  sq          $a3, 0x20($v0)
    ctx->pc = 0x381ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 7));
    // 0x381ba8: 0x78a70030  lq          $a3, 0x30($a1)
    ctx->pc = 0x381ba8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x381bac: 0x7c470030  sq          $a3, 0x30($v0)
    ctx->pc = 0x381bacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 7));
label_381bb0:
    // 0x381bb0: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x381bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x381bb4: 0x9442006a  lhu         $v0, 0x6A($v0)
    ctx->pc = 0x381bb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x381bb8: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x381bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x381bbc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x381BBCu;
    {
        const bool branch_taken_0x381bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x381bbc) {
            ctx->pc = 0x381B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_381b60;
        }
    }
    ctx->pc = 0x381BC4u;
    // 0x381bc4: 0x0  nop
    ctx->pc = 0x381bc4u;
    // NOP
label_381bc8:
    // 0x381bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x381bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381bcc: 0xc0a6188  jal         func_298620
    ctx->pc = 0x381BCCu;
    SET_GPR_U32(ctx, 31, 0x381BD4u);
    ctx->pc = 0x381BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381BCCu;
    // 0x381bd0: 0xae4007ec  sw          $zero, 0x7EC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x381BCCu, 0x381BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381BD4u;
label_381bd4:
    // 0x381bd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x381bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x381bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x381bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381be4: 0x3e00008  jr          $ra
    ctx->pc = 0x381BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BE4u;
        // 0x381be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381BECu;
}
