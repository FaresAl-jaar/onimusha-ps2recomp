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

// Function: sub_0024BCE0
// Address: 0x24bce0 - 0x24bd28
void sub_0024BCE0_0x24bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BCE0_0x24bce0");
#endif

    switch (ctx->pc) {
        case 0x24bcfcu: goto label_24bcfc;
        case 0x24bd08u: goto label_24bd08;
        case 0x24bd10u: goto label_24bd10;
        default: break;
    }

    ctx->pc = 0x24bce0u;

    // 0x24bce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24bce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bcec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bcf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24bcf4: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24BCF4u;
    SET_GPR_U32(ctx, 31, 0x24BCFCu);
    ctx->pc = 0x24BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BCF4u;
    // 0x24bcf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24BCF4u, 0x24BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BCFCu;
label_24bcfc:
    // 0x24bcfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd00: 0xc092f4a  jal         func_24BD28
    ctx->pc = 0x24BD00u;
    SET_GPR_U32(ctx, 31, 0x24BD08u);
    ctx->pc = 0x24BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD00u;
    // 0x24bd04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BD28u, 0x24BD00u, 0x24BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD08u;
label_24bd08:
    // 0x24bd08: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x24BD08u;
    SET_GPR_U32(ctx, 31, 0x24BD10u);
    ctx->pc = 0x24BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BD08u;
    // 0x24bd0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x24BD08u, 0x24BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BD10u;
label_24bd10:
    // 0x24bd10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24bd10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bd14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24bd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bd18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24bd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bd1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bd20: 0x3e00008  jr          $ra
    ctx->pc = 0x24BD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BD20u;
        // 0x24bd24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BD28u;
}
