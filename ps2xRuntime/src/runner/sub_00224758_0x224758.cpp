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

// Function: sub_00224758
// Address: 0x224758 - 0x2247c4
void sub_00224758_0x224758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224758_0x224758");
#endif

    switch (ctx->pc) {
        case 0x224780u: goto label_224780;
        case 0x224794u: goto label_224794;
        default: break;
    }

    ctx->pc = 0x224758u;

    // 0x224758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22475c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224760: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224768: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22476c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x22476cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224774: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224778: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224778u;
    SET_GPR_U32(ctx, 31, 0x224780u);
    ctx->pc = 0x22477Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224778u;
    // 0x22477c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224778u, 0x224780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224780u;
label_224780:
    // 0x224780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224784: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x224784u;
    {
        const bool branch_taken_0x224784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224784u;
        // 0x224788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224784) {
            ctx->pc = 0x2247ACu;
            goto label_2247ac;
        }
    }
    ctx->pc = 0x22478Cu;
    // 0x22478c: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x22478Cu;
    SET_GPR_U32(ctx, 31, 0x224794u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x22478Cu, 0x224794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224794u;
label_224794:
    // 0x224794: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x224794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x224798: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x224798u;
    {
        const bool branch_taken_0x224798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224798u;
        // 0x22479c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224798) {
            ctx->pc = 0x2247ACu;
            goto label_2247ac;
        }
    }
    ctx->pc = 0x2247A0u;
    // 0x2247a0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2247a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2247a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2247a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2247a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2247a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2247ac:
    // 0x2247ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2247acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2247b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2247b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2247b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2247b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2247b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2247b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2247bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2247BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2247C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247BCu;
        // 0x2247c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2247BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2247C4u;
}
