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

// Function: sub_00238268
// Address: 0x238268 - 0x2382c0
void sub_00238268_0x238268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238268_0x238268");
#endif

    switch (ctx->pc) {
        case 0x23828cu: goto label_23828c;
        case 0x23829cu: goto label_23829c;
        case 0x2382a4u: goto label_2382a4;
        default: break;
    }

    ctx->pc = 0x238268u;

    // 0x238268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23826c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238278: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x238278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23827c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x238280: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x238280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x238284: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x238284u;
    SET_GPR_U32(ctx, 31, 0x23828Cu);
    ctx->pc = 0x238288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238284u;
    // 0x238288: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x238284u, 0x23828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23828Cu;
label_23828c:
    // 0x23828c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238290: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238294: 0xc08e0b0  jal         func_2382C0
    ctx->pc = 0x238294u;
    SET_GPR_U32(ctx, 31, 0x23829Cu);
    ctx->pc = 0x238298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238294u;
    // 0x238298: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2382C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2382C0u, 0x238294u, 0x23829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23829Cu;
label_23829c:
    // 0x23829c: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x23829Cu;
    SET_GPR_U32(ctx, 31, 0x2382A4u);
    ctx->pc = 0x2382A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23829Cu;
    // 0x2382a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x23829Cu, 0x2382A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382A4u;
label_2382a4:
    // 0x2382a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2382a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2382a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2382a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2382acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2382b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2382b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2382b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2382b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2382b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2382B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2382BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382B8u;
        // 0x2382bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2382B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2382C0u;
}
