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

// Function: sub_0021C010
// Address: 0x21c010 - 0x21c080
void sub_0021C010_0x21c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C010_0x21c010");
#endif

    switch (ctx->pc) {
        case 0x21c02cu: goto label_21c02c;
        case 0x21c05cu: goto label_21c05c;
        case 0x21c068u: goto label_21c068;
        default: break;
    }

    ctx->pc = 0x21c010u;

    // 0x21c010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c01c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c024: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21C024u;
    SET_GPR_U32(ctx, 31, 0x21C02Cu);
    ctx->pc = 0x21C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C024u;
    // 0x21c028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21C024u, 0x21C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C02Cu;
label_21c02c:
    // 0x21c02c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21c030: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C030u;
    {
        const bool branch_taken_0x21c030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C030u;
        // 0x21c034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c030) {
            ctx->pc = 0x21C050u;
            goto label_21c050;
        }
    }
    ctx->pc = 0x21C038u;
    // 0x21c038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c03c: 0x34a50144  ori         $a1, $a1, 0x144
    ctx->pc = 0x21c03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)324);
    // 0x21c040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c048: 0x80848e0  j           func_212380
    ctx->pc = 0x21C048u;
    ctx->pc = 0x21C04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C048u;
    // 0x21c04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21C050u;
label_21c050:
    // 0x21c050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c054: 0xc0886b4  jal         func_221AD0
    ctx->pc = 0x21C054u;
    SET_GPR_U32(ctx, 31, 0x21C05Cu);
    ctx->pc = 0x21C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C054u;
    // 0x21c058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AD0u, 0x21C054u, 0x21C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C05Cu;
label_21c05c:
    // 0x21c05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c060: 0xc083a1e  jal         func_20E878
    ctx->pc = 0x21C060u;
    SET_GPR_U32(ctx, 31, 0x21C068u);
    ctx->pc = 0x21C064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C060u;
    // 0x21c064: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E878u, 0x21C060u, 0x21C068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C068u;
label_21c068:
    // 0x21c068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c078: 0x3e00008  jr          $ra
    ctx->pc = 0x21C078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C078u;
        // 0x21c07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C080u;
}
