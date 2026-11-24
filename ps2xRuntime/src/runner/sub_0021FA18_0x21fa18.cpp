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

// Function: sub_0021FA18
// Address: 0x21fa18 - 0x21faa0
void sub_0021FA18_0x21fa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FA18_0x21fa18");
#endif

    switch (ctx->pc) {
        case 0x21fa54u: goto label_21fa54;
        case 0x21fa7cu: goto label_21fa7c;
        default: break;
    }

    ctx->pc = 0x21fa18u;

    // 0x21fa18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21fa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21fa1c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x21fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21fa20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fa24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21fa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fa2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21fa2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21fa34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21fa34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa38: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FA38u;
    {
        const bool branch_taken_0x21fa38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA38u;
        // 0x21fa3c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa38) {
            ctx->pc = 0x21FA5Cu;
            goto label_21fa5c;
        }
    }
    ctx->pc = 0x21FA40u;
    // 0x21fa40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21fa44: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21FA44u;
    {
        const bool branch_taken_0x21fa44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x21fa44) {
            ctx->pc = 0x21FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FA44u;
            // 0x21fa48: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FA60u;
            goto label_21fa60;
        }
    }
    ctx->pc = 0x21FA4Cu;
    // 0x21fa4c: 0xc088902  jal         func_222408
    ctx->pc = 0x21FA4Cu;
    SET_GPR_U32(ctx, 31, 0x21FA54u);
    ctx->pc = 0x21FA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA4Cu;
    // 0x21fa50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x21FA4Cu, 0x21FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA54u;
label_21fa54:
    // 0x21fa54: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21FA54u;
    {
        const bool branch_taken_0x21fa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fa54) {
            ctx->pc = 0x21FA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FA54u;
            // 0x21fa58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FA8Cu;
            goto label_21fa8c;
        }
    }
    ctx->pc = 0x21FA5Cu;
label_21fa5c:
    // 0x21fa5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21fa60:
    // 0x21fa60: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21FA60u;
    {
        const bool branch_taken_0x21fa60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA60u;
        // 0x21fa64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa60) {
            ctx->pc = 0x21FA88u;
            goto label_21fa88;
        }
    }
    ctx->pc = 0x21FA68u;
    // 0x21fa68: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21FA68u;
    {
        const bool branch_taken_0x21fa68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x21fa68) {
            ctx->pc = 0x21FA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FA68u;
            // 0x21fa6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FA8Cu;
            goto label_21fa8c;
        }
    }
    ctx->pc = 0x21FA70u;
    // 0x21fa70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fa74: 0xc088902  jal         func_222408
    ctx->pc = 0x21FA74u;
    SET_GPR_U32(ctx, 31, 0x21FA7Cu);
    ctx->pc = 0x21FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FA74u;
    // 0x21fa78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x21FA74u, 0x21FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FA7Cu;
label_21fa7c:
    // 0x21fa7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21FA7Cu;
    {
        const bool branch_taken_0x21fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA7Cu;
        // 0x21fa80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fa7c) {
            ctx->pc = 0x21FA8Cu;
            goto label_21fa8c;
        }
    }
    ctx->pc = 0x21FA84u;
    // 0x21fa84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21fa88:
    // 0x21fa88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fa88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21fa8c:
    // 0x21fa8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fa8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fa90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fa90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fa94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21fa94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fa98: 0x3e00008  jr          $ra
    ctx->pc = 0x21FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA98u;
        // 0x21fa9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FAA0u;
}
