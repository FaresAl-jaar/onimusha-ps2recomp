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

// Function: sub_0010BBF8
// Address: 0x10bbf8 - 0x10bc6c
void sub_0010BBF8_0x10bbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BBF8_0x10bbf8");
#endif

    switch (ctx->pc) {
        case 0x10bbf8u: goto label_10bbf8;
        case 0x10bbfcu: goto label_10bbfc;
        case 0x10bc00u: goto label_10bc00;
        case 0x10bc04u: goto label_10bc04;
        case 0x10bc08u: goto label_10bc08;
        case 0x10bc0cu: goto label_10bc0c;
        case 0x10bc10u: goto label_10bc10;
        case 0x10bc14u: goto label_10bc14;
        case 0x10bc18u: goto label_10bc18;
        case 0x10bc1cu: goto label_10bc1c;
        case 0x10bc20u: goto label_10bc20;
        case 0x10bc24u: goto label_10bc24;
        case 0x10bc28u: goto label_10bc28;
        case 0x10bc2cu: goto label_10bc2c;
        case 0x10bc30u: goto label_10bc30;
        case 0x10bc34u: goto label_10bc34;
        case 0x10bc38u: goto label_10bc38;
        case 0x10bc3cu: goto label_10bc3c;
        case 0x10bc40u: goto label_10bc40;
        case 0x10bc44u: goto label_10bc44;
        case 0x10bc48u: goto label_10bc48;
        case 0x10bc4cu: goto label_10bc4c;
        case 0x10bc50u: goto label_10bc50;
        case 0x10bc54u: goto label_10bc54;
        case 0x10bc58u: goto label_10bc58;
        case 0x10bc5cu: goto label_10bc5c;
        case 0x10bc60u: goto label_10bc60;
        case 0x10bc64u: goto label_10bc64;
        case 0x10bc68u: goto label_10bc68;
        default: break;
    }

    ctx->pc = 0x10bbf8u;

label_10bbf8:
    // 0x10bbf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10bbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10bbfc:
    // 0x10bbfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bc00:
    // 0x10bc00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10bc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10bc04:
    // 0x10bc04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_10bc08:
    // 0x10bc08: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_10bc0c:
    if (ctx->pc == 0x10BC0Cu) {
        ctx->pc = 0x10BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC08u;
        // 0x10bc0c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC10u;
        goto label_10bc10;
    }
    ctx->pc = 0x10BC08u;
    {
        const bool branch_taken_0x10bc08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC08u;
        // 0x10bc0c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc08) {
            ctx->pc = 0x10BC58u;
            goto label_10bc58;
        }
    }
    ctx->pc = 0x10BC10u;
label_10bc10:
    // 0x10bc10: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10bc10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_10bc14:
    // 0x10bc14: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10bc18:
    if (ctx->pc == 0x10BC18u) {
        ctx->pc = 0x10BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC14u;
        // 0x10bc18: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC1Cu;
        goto label_10bc1c;
    }
    ctx->pc = 0x10BC14u;
    {
        const bool branch_taken_0x10bc14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC14u;
        // 0x10bc18: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc14) {
            ctx->pc = 0x10BC60u;
            goto label_10bc60;
        }
    }
    ctx->pc = 0x10BC1Cu;
label_10bc1c:
    // 0x10bc1c: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x10bc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_10bc20:
    // 0x10bc20: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_10bc24:
    if (ctx->pc == 0x10BC24u) {
        ctx->pc = 0x10BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC20u;
        // 0x10bc24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC28u;
        goto label_10bc28;
    }
    ctx->pc = 0x10BC20u;
    {
        const bool branch_taken_0x10bc20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC20u;
        // 0x10bc24: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc20) {
            ctx->pc = 0x10BC64u;
            goto label_10bc64;
        }
    }
    ctx->pc = 0x10BC28u;
label_10bc28:
    // 0x10bc28: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_10bc2c:
    // 0x10bc2c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10bc2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10bc30:
    // 0x10bc30: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x10bc30u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bc34:
    // 0x10bc34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10bc38:
    // 0x10bc38: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10bc3c:
    // 0x10bc3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10bc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10bc40:
    // 0x10bc40: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x10bc40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_10bc44:
    // 0x10bc44: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x10bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_10bc48:
    // 0x10bc48: 0xe0f809  jalr        $a3
label_10bc4c:
    if (ctx->pc == 0x10BC4Cu) {
        ctx->pc = 0x10BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC48u;
        // 0x10bc4c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC50u;
        goto label_10bc50;
    }
    ctx->pc = 0x10BC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10BC50u);
        ctx->pc = 0x10BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC48u;
        // 0x10bc4c: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC48u, 0x10BC50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BC50u;
label_10bc50:
    // 0x10bc50: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x10bc50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10bc54:
    // 0x10bc54: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10bc54u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bc58:
    // 0x10bc58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10bc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10bc5c:
    // 0x10bc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10bc60:
    // 0x10bc60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10bc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10bc64:
    // 0x10bc64: 0x3e00008  jr          $ra
label_10bc68:
    if (ctx->pc == 0x10BC68u) {
        ctx->pc = 0x10BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC64u;
        // 0x10bc68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BC6Cu;
        goto label_fallthrough_0x10bc64;
    }
    ctx->pc = 0x10BC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC64u;
        // 0x10bc68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10bc64:
    ctx->pc = 0x10BC6Cu;
}
