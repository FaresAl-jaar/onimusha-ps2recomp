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

// Function: sub_00214B38
// Address: 0x214b38 - 0x214bf0
void sub_00214B38_0x214b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214B38_0x214b38");
#endif

    switch (ctx->pc) {
        case 0x214b68u: goto label_214b68;
        case 0x214bb0u: goto label_214bb0;
        default: break;
    }

    ctx->pc = 0x214b38u;

    // 0x214b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214b3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x214b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x214b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214b4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214b54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x214b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b58: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x214B58u;
    {
        const bool branch_taken_0x214b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B58u;
        // 0x214b5c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b58) {
            ctx->pc = 0x214B98u;
            goto label_214b98;
        }
    }
    ctx->pc = 0x214B60u;
    // 0x214b60: 0xc084968  jal         func_2125A0
    ctx->pc = 0x214B60u;
    SET_GPR_U32(ctx, 31, 0x214B68u);
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x214B60u, 0x214B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B68u;
label_214b68:
    // 0x214b68: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x214b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214b6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214B6Cu;
    {
        const bool branch_taken_0x214b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B6Cu;
        // 0x214b70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b6c) {
            ctx->pc = 0x214B90u;
            goto label_214b90;
        }
    }
    ctx->pc = 0x214B74u;
    // 0x214b74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214b74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214b78: 0x34a50181  ori         $a1, $a1, 0x181
    ctx->pc = 0x214b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)385);
    // 0x214b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214b80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214b84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214b88: 0x80848e0  j           func_212380
    ctx->pc = 0x214B88u;
    ctx->pc = 0x214B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B88u;
    // 0x214b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214B90u;
label_214b90:
    // 0x214b90: 0x8e021fc0  lw          $v0, 0x1FC0($s0)
    ctx->pc = 0x214b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x214b94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_214b98:
    // 0x214b98: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x214b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x214b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ba0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x214ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x214ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214ba8: 0xc08042c  jal         func_2010B0
    ctx->pc = 0x214BA8u;
    SET_GPR_U32(ctx, 31, 0x214BB0u);
    ctx->pc = 0x214BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BA8u;
    // 0x214bac: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010B0u, 0x214BA8u, 0x214BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BB0u;
label_214bb0:
    // 0x214bb0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x214bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x214bb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x214BB4u;
    {
        const bool branch_taken_0x214bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BB4u;
        // 0x214bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214bb4) {
            ctx->pc = 0x214BD8u;
            goto label_214bd8;
        }
    }
    ctx->pc = 0x214BBCu;
    // 0x214bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214bc0: 0x34a50f12  ori         $a1, $a1, 0xF12
    ctx->pc = 0x214bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3858);
    // 0x214bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214bc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214bc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214bcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214bd0: 0x80848e0  j           func_212380
    ctx->pc = 0x214BD0u;
    ctx->pc = 0x214BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BD0u;
    // 0x214bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x214BD8u;
label_214bd8:
    // 0x214bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214be0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214be4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x214be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214be8: 0x3e00008  jr          $ra
    ctx->pc = 0x214BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214BE8u;
        // 0x214bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214BF0u;
}
