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

// Function: sub_0021BF28
// Address: 0x21bf28 - 0x21bf8c
void sub_0021BF28_0x21bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BF28_0x21bf28");
#endif

    switch (ctx->pc) {
        case 0x21bf5cu: goto label_21bf5c;
        default: break;
    }

    ctx->pc = 0x21bf28u;

    // 0x21bf28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21bf2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21bf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bf34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21bf34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21bf3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21bf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21bf40: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x21bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x21bf44: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x21bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x21bf48: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x21bf48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21bf4c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21BF4Cu;
    {
        const bool branch_taken_0x21bf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF4Cu;
        // 0x21bf50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bf4c) {
            ctx->pc = 0x21BF78u;
            goto label_21bf78;
        }
    }
    ctx->pc = 0x21BF54u;
    // 0x21bf54: 0xc0884d8  jal         func_221360
    ctx->pc = 0x21BF54u;
    SET_GPR_U32(ctx, 31, 0x21BF5Cu);
    ctx->pc = 0x221360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221360u, 0x21BF54u, 0x21BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BF5Cu;
label_21bf5c:
    // 0x21bf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21bf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bf64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bf64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bf68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bf6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21bf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bf70: 0x8086fe4  j           func_21BF90
    ctx->pc = 0x21BF70u;
    ctx->pc = 0x21BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BF70u;
    // 0x21bf74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BF90u;
    sub_0021BF90_0x21bf90(rdram, ctx, runtime); return;
    ctx->pc = 0x21BF78u;
label_21bf78:
    // 0x21bf78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bf78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bf7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21bf7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bf80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21bf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21bf84: 0x3e00008  jr          $ra
    ctx->pc = 0x21BF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BF84u;
        // 0x21bf88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BF8Cu;
}
