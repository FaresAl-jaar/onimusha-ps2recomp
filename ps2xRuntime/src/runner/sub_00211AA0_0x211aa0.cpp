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

// Function: sub_00211AA0
// Address: 0x211aa0 - 0x211b04
void sub_00211AA0_0x211aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211AA0_0x211aa0");
#endif

    switch (ctx->pc) {
        case 0x211ac0u: goto label_211ac0;
        case 0x211ad8u: goto label_211ad8;
        default: break;
    }

    ctx->pc = 0x211aa0u;

    // 0x211aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211aac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211ab0: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x211ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x211ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211ab8: 0xc088df4  jal         func_2237D0
    ctx->pc = 0x211AB8u;
    SET_GPR_U32(ctx, 31, 0x211AC0u);
    ctx->pc = 0x211ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AB8u;
    // 0x211abc: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2237D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2237D0u, 0x211AB8u, 0x211AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AC0u;
label_211ac0:
    // 0x211ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x211ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211ac8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x211AC8u;
    {
        const bool branch_taken_0x211ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x211ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AC8u;
        // 0x211acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211ac8) {
            ctx->pc = 0x211AF0u;
            goto label_211af0;
        }
    }
    ctx->pc = 0x211AD0u;
    // 0x211ad0: 0xc0846c2  jal         func_211B08
    ctx->pc = 0x211AD0u;
    SET_GPR_U32(ctx, 31, 0x211AD8u);
    ctx->pc = 0x211B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211B08u, 0x211AD0u, 0x211AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211AD8u;
label_211ad8:
    // 0x211ad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211ae4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211ae8: 0x8088e26  j           func_223898
    ctx->pc = 0x211AE8u;
    ctx->pc = 0x211AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211AE8u;
    // 0x211aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223898u;
    sub_00223898_0x223898(rdram, ctx, runtime); return;
    ctx->pc = 0x211AF0u;
label_211af0:
    // 0x211af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211af4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211af8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211afc: 0x3e00008  jr          $ra
    ctx->pc = 0x211AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AFCu;
        // 0x211b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211B04u;
}
