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

// Function: sub_0021F978
// Address: 0x21f978 - 0x21f9c4
void sub_0021F978_0x21f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F978_0x21f978");
#endif

    switch (ctx->pc) {
        case 0x21f99cu: goto label_21f99c;
        default: break;
    }

    ctx->pc = 0x21f978u;

    // 0x21f978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f980: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f988: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21f988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f98c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f990: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21f994: 0xc087e86  jal         func_21FA18
    ctx->pc = 0x21F994u;
    SET_GPR_U32(ctx, 31, 0x21F99Cu);
    ctx->pc = 0x21F998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F994u;
    // 0x21f998: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA18u, 0x21F994u, 0x21F99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F99Cu;
label_21f99c:
    // 0x21f99c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F99Cu;
    {
        const bool branch_taken_0x21f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F99Cu;
        // 0x21f9a0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f99c) {
            ctx->pc = 0x21F9ACu;
            goto label_21f9ac;
        }
    }
    ctx->pc = 0x21F9A4u;
    // 0x21f9a4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x21f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x21f9a8: 0xac510a0c  sw          $s1, 0xA0C($v0)
    ctx->pc = 0x21f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2572), GPR_U32(ctx, 17));
label_21f9ac:
    // 0x21f9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f9b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f9b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f9b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f9b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f9b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9BCu;
        // 0x21f9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F9C4u;
}
