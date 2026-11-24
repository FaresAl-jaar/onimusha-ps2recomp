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

// Function: sub_0038E1F0
// Address: 0x38e1f0 - 0x38e260
void sub_0038E1F0_0x38e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E1F0_0x38e1f0");
#endif

    switch (ctx->pc) {
        case 0x38e224u: goto label_38e224;
        case 0x38e22cu: goto label_38e22c;
        default: break;
    }

    ctx->pc = 0x38e1f0u;

    // 0x38e1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38e1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e1f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38e1fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e200: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38E200u;
    {
        const bool branch_taken_0x38e200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E200u;
        // 0x38e204: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e200) {
            ctx->pc = 0x38E250u;
            goto label_38e250;
        }
    }
    ctx->pc = 0x38E208u;
    // 0x38e208: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38e208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38e20c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x38e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x38e210: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x38e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x38e214: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38e214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38e218: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x38e218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x38e21c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x38E21Cu;
    SET_GPR_U32(ctx, 31, 0x38E224u);
    ctx->pc = 0x38E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E21Cu;
    // 0x38e220: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x38E21Cu, 0x38E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E224u;
label_38e224:
    // 0x38e224: 0xc09d694  jal         func_275A50
    ctx->pc = 0x38E224u;
    SET_GPR_U32(ctx, 31, 0x38E22Cu);
    ctx->pc = 0x38E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E224u;
    // 0x38e228: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x38E224u, 0x38E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E22Cu;
label_38e22c:
    // 0x38e22c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x38e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x38e230: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38e234: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x38e234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x38e238: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38e238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38e23c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x38e240: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x38e240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x38e244: 0x24639c10  addiu       $v1, $v1, -0x63F0
    ctx->pc = 0x38e244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941712));
    // 0x38e248: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38e248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38e24c: 0x0  nop
    ctx->pc = 0x38e24cu;
    // NOP
label_38e250:
    // 0x38e250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38e254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e258: 0x3e00008  jr          $ra
    ctx->pc = 0x38E258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E258u;
        // 0x38e25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E260u;
}
