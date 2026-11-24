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

// Function: sub_00212EB0
// Address: 0x212eb0 - 0x212f28
void sub_00212EB0_0x212eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212EB0_0x212eb0");
#endif

    switch (ctx->pc) {
        case 0x212eb0u: goto label_212eb0;
        case 0x212eb4u: goto label_212eb4;
        case 0x212eb8u: goto label_212eb8;
        case 0x212ebcu: goto label_212ebc;
        case 0x212ec0u: goto label_212ec0;
        case 0x212ec4u: goto label_212ec4;
        case 0x212ec8u: goto label_212ec8;
        case 0x212eccu: goto label_212ecc;
        case 0x212ed0u: goto label_212ed0;
        case 0x212ed4u: goto label_212ed4;
        case 0x212ed8u: goto label_212ed8;
        case 0x212edcu: goto label_212edc;
        case 0x212ee0u: goto label_212ee0;
        case 0x212ee4u: goto label_212ee4;
        case 0x212ee8u: goto label_212ee8;
        case 0x212eecu: goto label_212eec;
        case 0x212ef0u: goto label_212ef0;
        case 0x212ef4u: goto label_212ef4;
        case 0x212ef8u: goto label_212ef8;
        case 0x212efcu: goto label_212efc;
        case 0x212f00u: goto label_212f00;
        case 0x212f04u: goto label_212f04;
        case 0x212f08u: goto label_212f08;
        case 0x212f0cu: goto label_212f0c;
        case 0x212f10u: goto label_212f10;
        case 0x212f14u: goto label_212f14;
        case 0x212f18u: goto label_212f18;
        case 0x212f1cu: goto label_212f1c;
        case 0x212f20u: goto label_212f20;
        case 0x212f24u: goto label_212f24;
        default: break;
    }

    ctx->pc = 0x212eb0u;

label_212eb0:
    // 0x212eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x212eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_212eb4:
    // 0x212eb4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x212eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_212eb8:
    // 0x212eb8: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x212eb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_212ebc:
    // 0x212ebc: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_212ec0:
    // 0x212ec0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x212ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_212ec4:
    // 0x212ec4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x212ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_212ec8:
    // 0x212ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_212ecc:
    // 0x212ecc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x212eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_212ed0:
    // 0x212ed0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x212ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_212ed4:
    // 0x212ed4: 0xc087ed0  jal         func_21FB40
label_212ed8:
    if (ctx->pc == 0x212ED8u) {
        ctx->pc = 0x212ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212ED4u;
        // 0x212ed8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212EDCu;
        goto label_212edc;
    }
    ctx->pc = 0x212ED4u;
    SET_GPR_U32(ctx, 31, 0x212EDCu);
    ctx->pc = 0x212ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212ED4u;
    // 0x212ed8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x212ED4u, 0x212EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212EDCu;
label_212edc:
    // 0x212edc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x212edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212ee0:
    // 0x212ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x212ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_212ee4:
    // 0x212ee4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_212ee8:
    if (ctx->pc == 0x212EE8u) {
        ctx->pc = 0x212EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EE4u;
        // 0x212ee8: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212EECu;
        goto label_212eec;
    }
    ctx->pc = 0x212EE4u;
    {
        const bool branch_taken_0x212ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x212EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EE4u;
        // 0x212ee8: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212ee4) {
            ctx->pc = 0x212F0Cu;
            goto label_212f0c;
        }
    }
    ctx->pc = 0x212EECu;
label_212eec:
    // 0x212eec: 0xde020990  ld          $v0, 0x990($s0)
    ctx->pc = 0x212eecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2448)));
label_212ef0:
    // 0x212ef0: 0xa3b30000  sb          $s3, 0x0($sp)
    ctx->pc = 0x212ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 19));
label_212ef4:
    // 0x212ef4: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x212ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
label_212ef8:
    // 0x212ef8: 0xc087ed0  jal         func_21FB40
label_212efc:
    if (ctx->pc == 0x212EFCu) {
        ctx->pc = 0x212EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212EF8u;
        // 0x212efc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212F00u;
        goto label_212f00;
    }
    ctx->pc = 0x212EF8u;
    SET_GPR_U32(ctx, 31, 0x212F00u);
    ctx->pc = 0x212EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212EF8u;
    // 0x212efc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x212EF8u, 0x212F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F00u;
label_212f00:
    // 0x212f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x212f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_212f04:
    // 0x212f04: 0x220f809  jalr        $s1
label_212f08:
    if (ctx->pc == 0x212F08u) {
        ctx->pc = 0x212F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F04u;
        // 0x212f08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212F0Cu;
        goto label_212f0c;
    }
    ctx->pc = 0x212F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x212F0Cu);
        ctx->pc = 0x212F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F04u;
        // 0x212f08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212F04u, 0x212F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x212F0Cu;
label_212f0c:
    // 0x212f0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x212f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_212f10:
    // 0x212f10: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x212f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_212f14:
    // 0x212f14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x212f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_212f18:
    // 0x212f18: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x212f18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_212f1c:
    // 0x212f1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x212f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_212f20:
    // 0x212f20: 0x3e00008  jr          $ra
label_212f24:
    if (ctx->pc == 0x212F24u) {
        ctx->pc = 0x212F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F20u;
        // 0x212f24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x212F28u;
        goto label_fallthrough_0x212f20;
    }
    ctx->pc = 0x212F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F20u;
        // 0x212f24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x212f20:
    ctx->pc = 0x212F28u;
}
