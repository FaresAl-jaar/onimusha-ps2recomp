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

// Function: sub_002DB400
// Address: 0x2db400 - 0x2db4b4
void sub_002DB400_0x2db400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB400_0x2db400");
#endif

    switch (ctx->pc) {
        case 0x2db438u: goto label_2db438;
        case 0x2db460u: goto label_2db460;
        case 0x2db470u: goto label_2db470;
        default: break;
    }

    ctx->pc = 0x2db400u;

    // 0x2db400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2db400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2db404: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2db404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2db408: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2db408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2db40c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2db410: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2db410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db418: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2db418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db420: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2db420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2db424: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2db424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db428: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2db428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db42c: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DB42Cu;
    {
        const bool branch_taken_0x2db42c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB42Cu;
        // 0x2db430: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db42c) {
            ctx->pc = 0x2DB498u;
            goto label_2db498;
        }
    }
    ctx->pc = 0x2DB434u;
    // 0x2db434: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2db434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2db438:
    // 0x2db438: 0x86040020  lh          $a0, 0x20($s0)
    ctx->pc = 0x2db438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2db43c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2db43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2db440: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB440u;
    {
        const bool branch_taken_0x2db440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB440u;
        // 0x2db444: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db440) {
            ctx->pc = 0x2DB480u;
            goto label_2db480;
        }
    }
    ctx->pc = 0x2DB448u;
    // 0x2db448: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2db448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2db44c: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x2db44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2db450: 0x26470006  addiu       $a3, $s2, 0x6
    ctx->pc = 0x2db450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2db454: 0x26480008  addiu       $t0, $s2, 0x8
    ctx->pc = 0x2db454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2db458: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2DB458u;
    SET_GPR_U32(ctx, 31, 0x2DB460u);
    ctx->pc = 0x2DB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB458u;
    // 0x2db45c: 0x2649000c  addiu       $t1, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2DB458u, 0x2DB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB460u;
label_2db460:
    // 0x2db460: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2db460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2db464: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x2db464u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2db468: 0xc096d80  jal         func_25B600
    ctx->pc = 0x2DB468u;
    SET_GPR_U32(ctx, 31, 0x2DB470u);
    ctx->pc = 0x2DB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB468u;
    // 0x2db46c: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x2DB468u, 0x2DB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB470u;
label_2db470:
    // 0x2db470: 0xa2020024  sb          $v0, 0x24($s0)
    ctx->pc = 0x2db470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2db474: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x2db474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db478: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x2db478u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db47c: 0xa6000028  sh          $zero, 0x28($s0)
    ctx->pc = 0x2db47cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
label_2db480:
    // 0x2db480: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x2db480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x2db484: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2db484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2db488: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2db488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db48c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2db48cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db490: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2DB490u;
    {
        const bool branch_taken_0x2db490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB490u;
        // 0x2db494: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db490) {
            ctx->pc = 0x2DB438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db438;
        }
    }
    ctx->pc = 0x2DB498u;
label_2db498:
    // 0x2db498: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2db498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db49c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2db49cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db4a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2db4a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db4a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db4a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4ACu;
        // 0x2db4b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB4B4u;
}
