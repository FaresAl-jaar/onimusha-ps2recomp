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

// Function: sub_001F51B0
// Address: 0x1f51b0 - 0x1f5220
void sub_001F51B0_0x1f51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F51B0_0x1f51b0");
#endif

    switch (ctx->pc) {
        case 0x1f51d4u: goto label_1f51d4;
        default: break;
    }

    ctx->pc = 0x1f51b0u;

    // 0x1f51b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f51b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f51b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f51b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f51c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f51c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f51c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f51c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f51cc: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F51CCu;
    SET_GPR_U32(ctx, 31, 0x1F51D4u);
    ctx->pc = 0x1F51D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51CCu;
    // 0x1f51d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F51CCu, 0x1F51D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F51D4u;
label_1f51d4:
    // 0x1f51d4: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f51d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f51d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1f51dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f51dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F51E0u;
    {
        const bool branch_taken_0x1f51e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51E0u;
        // 0x1f51e4: 0x34a50203  ori         $a1, $a1, 0x203 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51e0) {
            ctx->pc = 0x1F5200u;
            goto label_1f5200;
        }
    }
    ctx->pc = 0x1F51E8u;
    // 0x1f51e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f51e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f51ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f51ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f51f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f51f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f51f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f51f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f51f8: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F51F8u;
    ctx->pc = 0x1F51FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F51F8u;
    // 0x1f51fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5200u;
label_1f5200:
    // 0x1f5200: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1f5200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x1f5204: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1f5204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1f5208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f520c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f520cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f5210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5214: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f5214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5218: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5218u;
        // 0x1f521c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5220u;
}
