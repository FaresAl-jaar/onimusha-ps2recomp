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

// Function: sub_001ABE50
// Address: 0x1abe50 - 0x1abf0c
void sub_001ABE50_0x1abe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABE50_0x1abe50");
#endif

    switch (ctx->pc) {
        case 0x1abe84u: goto label_1abe84;
        case 0x1abe9cu: goto label_1abe9c;
        case 0x1abebcu: goto label_1abebc;
        case 0x1abed8u: goto label_1abed8;
        default: break;
    }

    ctx->pc = 0x1abe50u;

    // 0x1abe50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abe54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abe58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abe5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abe60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abe64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abe64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe68: 0xa0827845  sb          $v0, 0x7845($a0)
    ctx->pc = 0x1abe68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30789), (uint8_t)GPR_U32(ctx, 2));
    // 0x1abe6c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1abe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1abe70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABE70u;
    {
        const bool branch_taken_0x1abe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE70u;
        // 0x1abe74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe70) {
            ctx->pc = 0x1ABE90u;
            goto label_1abe90;
        }
    }
    ctx->pc = 0x1ABE78u;
    // 0x1abe78: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1abe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1abe7c: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1ABE7Cu;
    SET_GPR_U32(ctx, 31, 0x1ABE84u);
    ctx->pc = 0x1ABE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE7Cu;
    // 0x1abe80: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1ABE7Cu, 0x1ABE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE84u;
label_1abe84:
    // 0x1abe84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABE84u;
    {
        const bool branch_taken_0x1abe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abe84) {
            ctx->pc = 0x1ABEA0u;
            goto label_1abea0;
        }
    }
    ctx->pc = 0x1ABE8Cu;
    // 0x1abe8c: 0x0  nop
    ctx->pc = 0x1abe8cu;
    // NOP
label_1abe90:
    // 0x1abe90: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1abe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1abe94: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1ABE94u;
    SET_GPR_U32(ctx, 31, 0x1ABE9Cu);
    ctx->pc = 0x1ABE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABE94u;
    // 0x1abe98: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1ABE94u, 0x1ABE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE9Cu;
label_1abe9c:
    // 0x1abe9c: 0x0  nop
    ctx->pc = 0x1abe9cu;
    // NOP
label_1abea0:
    // 0x1abea0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1abea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1abea4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1abea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1abea8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABEA8u;
    {
        const bool branch_taken_0x1abea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEA8u;
        // 0x1abeac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abea8) {
            ctx->pc = 0x1ABEC8u;
            goto label_1abec8;
        }
    }
    ctx->pc = 0x1ABEB0u;
    // 0x1abeb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abeb4: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1ABEB4u;
    SET_GPR_U32(ctx, 31, 0x1ABEBCu);
    ctx->pc = 0x1ABEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABEB4u;
    // 0x1abeb8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1ABEB4u, 0x1ABEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABEBCu;
label_1abebc:
    // 0x1abebc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABEBCu;
    {
        const bool branch_taken_0x1abebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abebc) {
            ctx->pc = 0x1ABED8u;
            goto label_1abed8;
        }
    }
    ctx->pc = 0x1ABEC4u;
    // 0x1abec4: 0x0  nop
    ctx->pc = 0x1abec4u;
    // NOP
label_1abec8:
    // 0x1abec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1abec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abed0: 0xc070808  jal         func_1C2020
    ctx->pc = 0x1ABED0u;
    SET_GPR_U32(ctx, 31, 0x1ABED8u);
    ctx->pc = 0x1ABED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABED0u;
    // 0x1abed4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2020u, 0x1ABED0u, 0x1ABED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABED8u;
label_1abed8:
    // 0x1abed8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1abed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1abedc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1abedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1abee0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1abee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1abee4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1abee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1abee8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABEE8u;
    {
        const bool branch_taken_0x1abee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABEE8u;
        // 0x1abeec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abee8) {
            ctx->pc = 0x1ABEF8u;
            goto label_1abef8;
        }
    }
    ctx->pc = 0x1ABEF0u;
    // 0x1abef0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1abef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1abef4: 0x0  nop
    ctx->pc = 0x1abef4u;
    // NOP
label_1abef8:
    // 0x1abef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abefc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abefcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abf00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abf00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abf04: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF04u;
        // 0x1abf08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF0Cu;
}
