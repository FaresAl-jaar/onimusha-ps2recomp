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

// Function: sub_0021C080
// Address: 0x21c080 - 0x21c0ec
void sub_0021C080_0x21c080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C080_0x21c080");
#endif

    switch (ctx->pc) {
        case 0x21c09cu: goto label_21c09c;
        case 0x21c0d4u: goto label_21c0d4;
        default: break;
    }

    ctx->pc = 0x21c080u;

    // 0x21c080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c088: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21c088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c08c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c094: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21C094u;
    SET_GPR_U32(ctx, 31, 0x21C09Cu);
    ctx->pc = 0x21C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C094u;
    // 0x21c098: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21C094u, 0x21C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C09Cu;
label_21c09c:
    // 0x21c09c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21c0a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21c0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C0A8u;
    {
        const bool branch_taken_0x21c0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0A8u;
        // 0x21c0ac: 0x34a50145  ori         $a1, $a1, 0x145 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)325);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0a8) {
            ctx->pc = 0x21C0C8u;
            goto label_21c0c8;
        }
    }
    ctx->pc = 0x21C0B0u;
    // 0x21c0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c0bc: 0x80848e0  j           func_212380
    ctx->pc = 0x21C0BCu;
    ctx->pc = 0x21C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0BCu;
    // 0x21c0c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21C0C4u;
    // 0x21c0c4: 0x0  nop
    ctx->pc = 0x21c0c4u;
    // NOP
label_21c0c8:
    // 0x21c0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0cc: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x21C0CCu;
    SET_GPR_U32(ctx, 31, 0x21C0D4u);
    ctx->pc = 0x21C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C0CCu;
    // 0x21c0d0: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x21C0CCu, 0x21C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C0D4u;
label_21c0d4:
    // 0x21c0d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21c0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c0dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21C0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0E4u;
        // 0x21c0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C0ECu;
}
