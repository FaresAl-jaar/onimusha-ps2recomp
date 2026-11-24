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

// Function: sub_00308290
// Address: 0x308290 - 0x308310
void sub_00308290_0x308290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308290_0x308290");
#endif

    switch (ctx->pc) {
        case 0x3082d0u: goto label_3082d0;
        case 0x3082dcu: goto label_3082dc;
        case 0x3082f4u: goto label_3082f4;
        default: break;
    }

    ctx->pc = 0x308290u;

    // 0x308290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30829c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3082a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3082a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3082A4u;
    {
        const bool branch_taken_0x3082a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082A4u;
        // 0x3082a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082a4) {
            ctx->pc = 0x3082F8u;
            goto label_3082f8;
        }
    }
    ctx->pc = 0x3082ACu;
    // 0x3082ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3082acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3082b0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x3082b4: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x3082b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
    // 0x3082b8: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3082b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3082bc: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3082bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x3082c0: 0x24a57b30  addiu       $a1, $a1, 0x7B30
    ctx->pc = 0x3082c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31536));
    // 0x3082c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3082c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3082c8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x3082C8u;
    SET_GPR_U32(ctx, 31, 0x3082D0u);
    ctx->pc = 0x3082CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082C8u;
    // 0x3082cc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x3082C8u, 0x3082D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082D0u;
label_3082d0:
    // 0x3082d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3082d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082d4: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x3082D4u;
    SET_GPR_U32(ctx, 31, 0x3082DCu);
    ctx->pc = 0x3082D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082D4u;
    // 0x3082d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x3082D4u, 0x3082DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082DCu;
label_3082dc:
    // 0x3082dc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3082dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3082e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3082e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3082e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3082E4u;
    {
        const bool branch_taken_0x3082e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3082E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082E4u;
        // 0x3082e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3082e4) {
            ctx->pc = 0x3082F8u;
            goto label_3082f8;
        }
    }
    ctx->pc = 0x3082ECu;
    // 0x3082ec: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x3082ECu;
    SET_GPR_U32(ctx, 31, 0x3082F4u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x3082ECu, 0x3082F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082F4u;
label_3082f4:
    // 0x3082f4: 0x0  nop
    ctx->pc = 0x3082f4u;
    // NOP
label_3082f8:
    // 0x3082f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3082f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3082fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3082fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x308300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308308: 0x3e00008  jr          $ra
    ctx->pc = 0x308308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308308u;
        // 0x30830c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308310u;
}
