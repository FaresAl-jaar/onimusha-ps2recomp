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

// Function: sub_002497D0
// Address: 0x2497d0 - 0x249834
void sub_002497D0_0x2497d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002497D0_0x2497d0");
#endif

    switch (ctx->pc) {
        case 0x2497ecu: goto label_2497ec;
        case 0x249800u: goto label_249800;
        case 0x24980cu: goto label_24980c;
        default: break;
    }

    ctx->pc = 0x2497d0u;

    // 0x2497d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2497d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2497d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2497d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2497d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2497d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2497dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2497dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2497e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2497e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2497e4: 0xc091a44  jal         func_246910
    ctx->pc = 0x2497E4u;
    SET_GPR_U32(ctx, 31, 0x2497ECu);
    ctx->pc = 0x2497E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497E4u;
    // 0x2497e8: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x2497E4u, 0x2497ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497ECu;
label_2497ec:
    // 0x2497ec: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x2497ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2497f0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2497f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2497f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2497f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2497f8: 0xc091aea  jal         func_246BA8
    ctx->pc = 0x2497F8u;
    SET_GPR_U32(ctx, 31, 0x249800u);
    ctx->pc = 0x2497FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497F8u;
    // 0x2497fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246BA8u, 0x2497F8u, 0x249800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249800u;
label_249800:
    // 0x249800: 0x24044001  addiu       $a0, $zero, 0x4001
    ctx->pc = 0x249800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x249804: 0xc091a44  jal         func_246910
    ctx->pc = 0x249804u;
    SET_GPR_U32(ctx, 31, 0x24980Cu);
    ctx->pc = 0x249808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249804u;
    // 0x249808: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246910u, 0x249804u, 0x24980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24980Cu;
label_24980c:
    // 0x24980c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24980Cu;
    {
        const bool branch_taken_0x24980c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x249810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24980Cu;
        // 0x249810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24980c) {
            ctx->pc = 0x249820u;
            goto label_249820;
        }
    }
    ctx->pc = 0x249814u;
    // 0x249814: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x249814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249818: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x249818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24981c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24981cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_249820:
    // 0x249820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24982c: 0x3e00008  jr          $ra
    ctx->pc = 0x24982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24982Cu;
        // 0x249830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249834u;
}
