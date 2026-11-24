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

// Function: sub_00114BC8
// Address: 0x114bc8 - 0x114c90
void sub_00114BC8_0x114bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114BC8_0x114bc8");
#endif

    switch (ctx->pc) {
        case 0x114be8u: goto label_114be8;
        case 0x114c00u: goto label_114c00;
        case 0x114c08u: goto label_114c08;
        case 0x114c10u: goto label_114c10;
        case 0x114c2cu: goto label_114c2c;
        case 0x114c40u: goto label_114c40;
        case 0x114c54u: goto label_114c54;
        case 0x114c74u: goto label_114c74;
        default: break;
    }

    ctx->pc = 0x114bc8u;

    // 0x114bc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x114bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x114bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x114bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x114bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x114bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x114bd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x114bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x114bdc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x114bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x114be0: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114BE0u;
    SET_GPR_U32(ctx, 31, 0x114BE8u);
    ctx->pc = 0x114BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BE0u;
    // 0x114be4: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114BE0u, 0x114BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BE8u;
label_114be8:
    // 0x114be8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x114be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x114bec: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x114becu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114bf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114BF0u;
    {
        const bool branch_taken_0x114bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114bf0) {
            ctx->pc = 0x114C00u;
            goto label_114c00;
        }
    }
    ctx->pc = 0x114BF8u;
    // 0x114bf8: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x114BF8u;
    SET_GPR_U32(ctx, 31, 0x114C00u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x114BF8u, 0x114C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C00u;
label_114c00:
    // 0x114c00: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114C00u;
    SET_GPR_U32(ctx, 31, 0x114C08u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114C00u, 0x114C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C08u;
label_114c08:
    // 0x114c08: 0xc0449d2  jal         func_112748
    ctx->pc = 0x114C08u;
    SET_GPR_U32(ctx, 31, 0x114C10u);
    ctx->pc = 0x112748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112748u, 0x114C08u, 0x114C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C10u;
label_114c10:
    // 0x114c10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x114c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c14: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x114C14u;
    {
        const bool branch_taken_0x114c14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x114C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C14u;
        // 0x114c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c14) {
            ctx->pc = 0x114C24u;
            goto label_114c24;
        }
    }
    ctx->pc = 0x114C1Cu;
    // 0x114c1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x114C1Cu;
    {
        const bool branch_taken_0x114c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C1Cu;
        // 0x114c20: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c1c) {
            ctx->pc = 0x114C78u;
            goto label_114c78;
        }
    }
    ctx->pc = 0x114C24u;
label_114c24:
    // 0x114c24: 0xc045114  jal         func_114450
    ctx->pc = 0x114C24u;
    SET_GPR_U32(ctx, 31, 0x114C2Cu);
    ctx->pc = 0x114C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C24u;
    // 0x114c28: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114450u, 0x114C24u, 0x114C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C2Cu;
label_114c2c:
    // 0x114c2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c30: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x114C30u;
    {
        const bool branch_taken_0x114c30 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x114C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C30u;
        // 0x114c34: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c30) {
            ctx->pc = 0x114C4Cu;
            goto label_114c4c;
        }
    }
    ctx->pc = 0x114C38u;
    // 0x114c38: 0xc043808  jal         func_10E020
    ctx->pc = 0x114C38u;
    SET_GPR_U32(ctx, 31, 0x114C40u);
    ctx->pc = 0x114C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C38u;
    // 0x114c3c: 0x8e042b48  lw          $a0, 0x2B48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114C38u, 0x114C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C40u;
label_114c40:
    // 0x114c40: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x114c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x114c44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x114C44u;
    {
        const bool branch_taken_0x114c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C44u;
        // 0x114c48: 0x8e042b48  lw          $a0, 0x2B48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c44) {
            ctx->pc = 0x114C6Cu;
            goto label_114c6c;
        }
    }
    ctx->pc = 0x114C4Cu;
label_114c4c:
    // 0x114c4c: 0xc043808  jal         func_10E020
    ctx->pc = 0x114C4Cu;
    SET_GPR_U32(ctx, 31, 0x114C54u);
    ctx->pc = 0x114C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C4Cu;
    // 0x114c50: 0x8e042b48  lw          $a0, 0x2B48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114C4Cu, 0x114C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C54u;
label_114c54:
    // 0x114c54: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x114c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x114c58: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x114c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x114c5c: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x114c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x114c60: 0x8e042b48  lw          $a0, 0x2B48($s0)
    ctx->pc = 0x114c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11080)));
    // 0x114c64: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x114c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x114c68: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x114c68u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_114c6c:
    // 0x114c6c: 0xc043800  jal         func_10E000
    ctx->pc = 0x114C6Cu;
    SET_GPR_U32(ctx, 31, 0x114C74u);
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x114C6Cu, 0x114C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C74u;
label_114c74:
    // 0x114c74: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x114c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114c78:
    // 0x114c78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x114c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114c7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x114c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114c80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x114c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114c88: 0x3e00008  jr          $ra
    ctx->pc = 0x114C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C88u;
        // 0x114c8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114C90u;
}
