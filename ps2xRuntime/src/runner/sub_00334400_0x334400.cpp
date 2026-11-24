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

// Function: sub_00334400
// Address: 0x334400 - 0x3344b0
void sub_00334400_0x334400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334400_0x334400");
#endif

    switch (ctx->pc) {
        case 0x334414u: goto label_334414;
        case 0x334438u: goto label_334438;
        default: break;
    }

    ctx->pc = 0x334400u;

    // 0x334400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x334404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x334408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33440c: 0xc0a60b8  jal         func_2982E0
    ctx->pc = 0x33440Cu;
    SET_GPR_U32(ctx, 31, 0x334414u);
    ctx->pc = 0x334410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33440Cu;
    // 0x334410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x33440Cu, 0x334414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334414u;
label_334414:
    // 0x334414: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x334414u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x334418: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x334418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x33441c: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x33441Cu;
    {
        const bool branch_taken_0x33441c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33441c) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x334424u;
    // 0x334424: 0x8e0701ec  lw          $a3, 0x1EC($s0)
    ctx->pc = 0x334424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x334428: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x334428u;
    {
        const bool branch_taken_0x334428 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334428u;
        // 0x33442c: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334428) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x334430u;
    // 0x334430: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x334430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334434: 0x24a531a0  addiu       $a1, $a1, 0x31A0
    ctx->pc = 0x334434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12704));
label_334438:
    // 0x334438: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x334438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33443c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x33443cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x334440: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x334440u;
    {
        const bool branch_taken_0x334440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334440) {
            ctx->pc = 0x334490u;
            goto label_334490;
        }
    }
    ctx->pc = 0x334448u;
    // 0x334448: 0x90e60003  lbu         $a2, 0x3($a3)
    ctx->pc = 0x334448u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x33444c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x33444cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x334450: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x334450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x334454: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x334454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x334458: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x334458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x33445c: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x33445cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x334460: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x334460u;
    {
        const bool branch_taken_0x334460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x334460) {
            ctx->pc = 0x334490u;
            goto label_334490;
        }
    }
    ctx->pc = 0x334468u;
    // 0x334468: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x334468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x33446c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33446Cu;
    {
        const bool branch_taken_0x33446c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33446c) {
            ctx->pc = 0x334490u;
            goto label_334490;
        }
    }
    ctx->pc = 0x334474u;
    // 0x334474: 0xde040520  ld          $a0, 0x520($s0)
    ctx->pc = 0x334474u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x334478: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x334478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33447c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33447cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x334480: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x334480u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x334484: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x334484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x334488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x334488u;
    {
        const bool branch_taken_0x334488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334488u;
        // 0x33448c: 0xfe030520  sd          $v1, 0x520($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334488) {
            ctx->pc = 0x3344A0u;
            goto label_3344a0;
        }
    }
    ctx->pc = 0x334490u;
label_334490:
    // 0x334490: 0x8ce7000c  lw          $a3, 0xC($a3)
    ctx->pc = 0x334490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x334494: 0x14e0ffe8  bnez        $a3, . + 4 + (-0x18 << 2)
    ctx->pc = 0x334494u;
    {
        const bool branch_taken_0x334494 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x334494) {
            ctx->pc = 0x334438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334438;
        }
    }
    ctx->pc = 0x33449Cu;
    // 0x33449c: 0x0  nop
    ctx->pc = 0x33449cu;
    // NOP
label_3344a0:
    // 0x3344a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3344a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3344a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3344a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3344a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3344A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3344ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3344A8u;
        // 0x3344ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3344A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3344B0u;
}
