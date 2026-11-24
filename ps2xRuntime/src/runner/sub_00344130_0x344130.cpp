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

// Function: sub_00344130
// Address: 0x344130 - 0x3441f8
void sub_00344130_0x344130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344130_0x344130");
#endif

    switch (ctx->pc) {
        case 0x344150u: goto label_344150;
        case 0x34419cu: goto label_34419c;
        case 0x3441a8u: goto label_3441a8;
        case 0x3441b0u: goto label_3441b0;
        default: break;
    }

    ctx->pc = 0x344130u;

    // 0x344130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34413c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344140: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x344140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x344144: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x344144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x344148: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x344148u;
    SET_GPR_U32(ctx, 31, 0x344150u);
    ctx->pc = 0x34414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344148u;
    // 0x34414c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x344148u, 0x344150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344150u;
label_344150:
    // 0x344150: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x344150u;
    {
        const bool branch_taken_0x344150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344150) {
            ctx->pc = 0x344190u;
            goto label_344190;
        }
    }
    ctx->pc = 0x344158u;
    // 0x344158: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x344158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x34415c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x34415cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344160: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x344160u;
    {
        const bool branch_taken_0x344160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344160) {
            ctx->pc = 0x344190u;
            goto label_344190;
        }
    }
    ctx->pc = 0x344168u;
    // 0x344168: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x344168u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34416c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x344170: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344170u;
    {
        const bool branch_taken_0x344170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x344170) {
            ctx->pc = 0x344190u;
            goto label_344190;
        }
    }
    ctx->pc = 0x344178u;
    // 0x344178: 0x944329de  lhu         $v1, 0x29DE($v0)
    ctx->pc = 0x344178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x34417c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x34417cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x344180: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x344180u;
    {
        const bool branch_taken_0x344180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344180u;
        // 0x344184: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344180) {
            ctx->pc = 0x344190u;
            goto label_344190;
        }
    }
    ctx->pc = 0x344188u;
    // 0x344188: 0xa0432ab6  sb          $v1, 0x2AB6($v0)
    ctx->pc = 0x344188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10934), (uint8_t)GPR_U32(ctx, 3));
    // 0x34418c: 0xa4432ab4  sh          $v1, 0x2AB4($v0)
    ctx->pc = 0x34418cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10932), (uint16_t)GPR_U32(ctx, 3));
label_344190:
    // 0x344190: 0x8e050560  lw          $a1, 0x560($s0)
    ctx->pc = 0x344190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x344194: 0xc0c0844  jal         func_302110
    ctx->pc = 0x344194u;
    SET_GPR_U32(ctx, 31, 0x34419Cu);
    ctx->pc = 0x344198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344194u;
    // 0x344198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x344194u, 0x34419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34419Cu;
label_34419c:
    // 0x34419c: 0x8e050564  lw          $a1, 0x564($s0)
    ctx->pc = 0x34419cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x3441a0: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3441A0u;
    SET_GPR_U32(ctx, 31, 0x3441A8u);
    ctx->pc = 0x3441A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3441A0u;
    // 0x3441a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3441A0u, 0x3441A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441A8u;
label_3441a8:
    // 0x3441a8: 0xc0c0858  jal         func_302160
    ctx->pc = 0x3441A8u;
    SET_GPR_U32(ctx, 31, 0x3441B0u);
    ctx->pc = 0x3441ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3441A8u;
    // 0x3441ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x3441A8u, 0x3441B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441B0u;
label_3441b0:
    // 0x3441b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3441B0u;
    {
        const bool branch_taken_0x3441b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3441b0) {
            ctx->pc = 0x3441E8u;
            goto label_3441e8;
        }
    }
    ctx->pc = 0x3441B8u;
    // 0x3441b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3441B8u;
    {
        const bool branch_taken_0x3441b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3441b8) {
            ctx->pc = 0x3441E8u;
            goto label_3441e8;
        }
    }
    ctx->pc = 0x3441C0u;
    // 0x3441c0: 0x9203056f  lbu         $v1, 0x56F($s0)
    ctx->pc = 0x3441c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1391)));
    // 0x3441c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3441C4u;
    {
        const bool branch_taken_0x3441c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3441c4) {
            ctx->pc = 0x3441E8u;
            goto label_3441e8;
        }
    }
    ctx->pc = 0x3441CCu;
    // 0x3441cc: 0xdc450520  ld          $a1, 0x520($v0)
    ctx->pc = 0x3441ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 1312)));
    // 0x3441d0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3441d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3441d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3441d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3441d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3441d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3441dc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x3441dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3441e0: 0xfc440520  sd          $a0, 0x520($v0)
    ctx->pc = 0x3441e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 1312), GPR_U64(ctx, 4));
    // 0x3441e4: 0xa203056f  sb          $v1, 0x56F($s0)
    ctx->pc = 0x3441e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1391), (uint8_t)GPR_U32(ctx, 3));
label_3441e8:
    // 0x3441e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3441e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3441ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3441ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3441f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3441F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3441F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441F0u;
        // 0x3441f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3441F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3441F8u;
}
