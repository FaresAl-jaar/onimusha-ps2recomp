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

// Function: sub_00229988
// Address: 0x229988 - 0x2299e8
void sub_00229988_0x229988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229988_0x229988");
#endif

    switch (ctx->pc) {
        case 0x2299b0u: goto label_2299b0;
        case 0x2299c4u: goto label_2299c4;
        default: break;
    }

    ctx->pc = 0x229988u;

    // 0x229988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22998c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22998cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x229990: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x229990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x229994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x229994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229998: 0x2450adc0  addiu       $s0, $v0, -0x5240
    ctx->pc = 0x229998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
    // 0x22999c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2299a0: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2299a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2299a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2299a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2299a8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2299a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2299ac: 0x0  nop
    ctx->pc = 0x2299acu;
    // NOP
label_2299b0:
    // 0x2299b0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2299b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2299b4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2299B4u;
    {
        const bool branch_taken_0x2299b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2299b4) {
            ctx->pc = 0x2299B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2299B4u;
            // 0x2299b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2299C8u;
            goto label_2299c8;
        }
    }
    ctx->pc = 0x2299BCu;
    // 0x2299bc: 0xc08a658  jal         func_229960
    ctx->pc = 0x2299BCu;
    SET_GPR_U32(ctx, 31, 0x2299C4u);
    ctx->pc = 0x2299C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299BCu;
    // 0x2299c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x2299BCu, 0x2299C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299C4u;
label_2299c4:
    // 0x2299c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2299c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2299c8:
    // 0x2299c8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2299C8u;
    {
        const bool branch_taken_0x2299c8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2299CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299C8u;
        // 0x2299cc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2299c8) {
            ctx->pc = 0x2299B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2299b0;
        }
    }
    ctx->pc = 0x2299D0u;
    // 0x2299d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2299d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2299d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2299d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2299d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2299d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2299dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2299dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2299e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2299E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2299E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299E0u;
        // 0x2299e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2299E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2299E8u;
}
