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

// Function: sub_00270970
// Address: 0x270970 - 0x270a00
void sub_00270970_0x270970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270970_0x270970");
#endif

    switch (ctx->pc) {
        case 0x2709acu: goto label_2709ac;
        case 0x2709ccu: goto label_2709cc;
        case 0x2709e8u: goto label_2709e8;
        default: break;
    }

    ctx->pc = 0x270970u;

    // 0x270970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x270974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x270978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27097c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270984: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x270984u;
    {
        const bool branch_taken_0x270984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270984u;
        // 0x270988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270984) {
            ctx->pc = 0x2709E8u;
            goto label_2709e8;
        }
    }
    ctx->pc = 0x27098Cu;
    // 0x27098c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x27098cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x270990: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x270990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
    // 0x270994: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x270994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x270998: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x270998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x27099c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27099Cu;
    {
        const bool branch_taken_0x27099c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27099c) {
            ctx->pc = 0x2709B0u;
            goto label_2709b0;
        }
    }
    ctx->pc = 0x2709A4u;
    // 0x2709a4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2709A4u;
    SET_GPR_U32(ctx, 31, 0x2709ACu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2709A4u, 0x2709ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709ACu;
label_2709ac:
    // 0x2709ac: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2709acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2709b0:
    // 0x2709b0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2709B0u;
    {
        const bool branch_taken_0x2709b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709B0u;
        // 0x2709b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709b0) {
            ctx->pc = 0x2709D0u;
            goto label_2709d0;
        }
    }
    ctx->pc = 0x2709B8u;
    // 0x2709b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2709b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709bc: 0x244274e0  addiu       $v0, $v0, 0x74E0
    ctx->pc = 0x2709bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29920));
    // 0x2709c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2709c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709c4: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2709C4u;
    SET_GPR_U32(ctx, 31, 0x2709CCu);
    ctx->pc = 0x2709C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709C4u;
    // 0x2709c8: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2709C4u, 0x2709CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709CCu;
label_2709cc:
    // 0x2709cc: 0x0  nop
    ctx->pc = 0x2709ccu;
    // NOP
label_2709d0:
    // 0x2709d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2709d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2709d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2709d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2709d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2709D8u;
    {
        const bool branch_taken_0x2709d8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D8u;
        // 0x2709dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709d8) {
            ctx->pc = 0x2709E8u;
            goto label_2709e8;
        }
    }
    ctx->pc = 0x2709E0u;
    // 0x2709e0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2709E0u;
    SET_GPR_U32(ctx, 31, 0x2709E8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2709E0u, 0x2709E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709E8u;
label_2709e8:
    // 0x2709e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2709e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2709ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2709ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2709f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2709f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2709f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2709f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2709f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2709F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2709FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709F8u;
        // 0x2709fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2709F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270A00u;
}
