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

// Function: sub_00151B40
// Address: 0x151b40 - 0x151c0c
void sub_00151B40_0x151b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151B40_0x151b40");
#endif

    switch (ctx->pc) {
        case 0x151b78u: goto label_151b78;
        case 0x151bccu: goto label_151bcc;
        case 0x151be8u: goto label_151be8;
        case 0x151bf8u: goto label_151bf8;
        default: break;
    }

    ctx->pc = 0x151b40u;

    // 0x151b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151b44: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151b4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151b54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151b58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x151b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b5c: 0xac20e688  sw          $zero, -0x1978($at)
    ctx->pc = 0x151b5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7EE688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7EE688u, _value); } while (0);
    // 0x151b60: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x151b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x151b64: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151b68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x151b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151b6c: 0x2484e680  addiu       $a0, $a0, -0x1980
    ctx->pc = 0x151b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960768));
    // 0x151b70: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x151B70u;
    SET_GPR_U32(ctx, 31, 0x151B78u);
    ctx->pc = 0x151B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151B70u;
    // 0x151b74: 0xac22e684  sw          $v0, -0x197C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960772), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x151B70u, 0x151B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B78u;
label_151b78:
    // 0x151b78: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151b7c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x151b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x151b80: 0xac30d63c  sw          $s0, -0x29C4($at)
    ctx->pc = 0x151b80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7ED63Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7ED63Cu, _value); } while (0);
    // 0x151b84: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x151b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x151b88: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x151b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
    // 0x151b8c: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151b90: 0xac23d634  sw          $v1, -0x29CC($at)
    ctx->pc = 0x151b90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7ED634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7ED634u, _value); } while (0);
    // 0x151b94: 0x2484d630  addiu       $a0, $a0, -0x29D0
    ctx->pc = 0x151b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956592));
    // 0x151b98: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x151b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x151b9c: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151ba0: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x151ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x151ba4: 0xaf828580  sw          $v0, -0x7A80($gp)
    ctx->pc = 0x151ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935936), GPR_U32(ctx, 2));
    // 0x151ba8: 0xac23d638  sw          $v1, -0x29C8($at)
    ctx->pc = 0x151ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7ED638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7ED638u, _value); } while (0);
    // 0x151bac: 0x27830000  addiu       $v1, $gp, 0x0
    ctx->pc = 0x151bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 0));
    // 0x151bb0: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151bb4: 0xac23d640  sw          $v1, -0x29C0($at)
    ctx->pc = 0x151bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7ED640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7ED640u, _value); } while (0);
    // 0x151bb8: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151bbc: 0xac31d644  sw          $s1, -0x29BC($at)
    ctx->pc = 0x151bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x7ED644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7ED644u, _value); } while (0);
    // 0x151bc0: 0x3c01007f  lui         $at, 0x7F
    ctx->pc = 0x151bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)127 << 16));
    // 0x151bc4: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x151BC4u;
    SET_GPR_U32(ctx, 31, 0x151BCCu);
    ctx->pc = 0x151BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BC4u;
    // 0x151bc8: 0xac20d650  sw          $zero, -0x29B0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x151BC4u, 0x151BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BCCu;
label_151bcc:
    // 0x151bcc: 0xaf82857c  sw          $v0, -0x7A84($gp)
    ctx->pc = 0x151bccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935932), GPR_U32(ctx, 2));
    // 0x151bd0: 0x8f84857c  lw          $a0, -0x7A84($gp)
    ctx->pc = 0x151bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935932)));
    // 0x151bd4: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151BD4u;
    {
        const bool branch_taken_0x151bd4 = (GPR_S64(ctx, 4) >= 0);
        if (branch_taken_0x151bd4) {
            ctx->pc = 0x151BF0u;
            goto label_151bf0;
        }
    }
    ctx->pc = 0x151BDCu;
    // 0x151bdc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x151bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x151be0: 0xc0499ee  jal         func_1267B8
    ctx->pc = 0x151BE0u;
    SET_GPR_U32(ctx, 31, 0x151BE8u);
    ctx->pc = 0x151BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BE0u;
    // 0x151be4: 0x24844cc0  addiu       $a0, $a0, 0x4CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1267B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1267B8u, 0x151BE0u, 0x151BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BE8u;
label_151be8:
    // 0x151be8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151BE8u;
    {
        const bool branch_taken_0x151be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151be8) {
            ctx->pc = 0x151BF8u;
            goto label_151bf8;
        }
    }
    ctx->pc = 0x151BF0u;
label_151bf0:
    // 0x151bf0: 0xc043c48  jal         func_10F120
    ctx->pc = 0x151BF0u;
    SET_GPR_U32(ctx, 31, 0x151BF8u);
    ctx->pc = 0x151BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151BF0u;
    // 0x151bf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x151BF0u, 0x151BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BF8u;
label_151bf8:
    // 0x151bf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151c04: 0x3e00008  jr          $ra
    ctx->pc = 0x151C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151C04u;
        // 0x151c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151C0Cu;
}
