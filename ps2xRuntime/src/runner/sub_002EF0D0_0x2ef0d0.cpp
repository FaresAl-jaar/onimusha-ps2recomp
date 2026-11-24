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

// Function: sub_002EF0D0
// Address: 0x2ef0d0 - 0x2ef160
void sub_002EF0D0_0x2ef0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF0D0_0x2ef0d0");
#endif

    switch (ctx->pc) {
        case 0x2ef108u: goto label_2ef108;
        default: break;
    }

    ctx->pc = 0x2ef0d0u;

    // 0x2ef0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef0d4: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2ef0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2ef0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ef0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ef0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef0e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2ef0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ef0e4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF0E4u;
    {
        const bool branch_taken_0x2ef0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF0E4u;
        // 0x2ef0e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef0e4) {
            ctx->pc = 0x2EF0F8u;
            goto label_2ef0f8;
        }
    }
    ctx->pc = 0x2EF0ECu;
    // 0x2ef0ec: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x2ef0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2ef0f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ef0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ef0f4: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x2ef0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
label_2ef0f8:
    // 0x2ef0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef0fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef100: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x2EF100u;
    SET_GPR_U32(ctx, 31, 0x2EF108u);
    ctx->pc = 0x2EF104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF100u;
    // 0x2ef104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x2EF100u, 0x2EF108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF108u;
label_2ef108:
    // 0x2ef108: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x2ef108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2ef10c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ef10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ef110: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EF110u;
    {
        const bool branch_taken_0x2ef110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ef110) {
            ctx->pc = 0x2EF150u;
            goto label_2ef150;
        }
    }
    ctx->pc = 0x2EF118u;
    // 0x2ef118: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EF118u;
    {
        const bool branch_taken_0x2ef118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef118) {
            ctx->pc = 0x2EF128u;
            goto label_2ef128;
        }
    }
    ctx->pc = 0x2EF120u;
    // 0x2ef120: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EF120u;
    {
        const bool branch_taken_0x2ef120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef120) {
            ctx->pc = 0x2EF150u;
            goto label_2ef150;
        }
    }
    ctx->pc = 0x2EF128u;
label_2ef128:
    // 0x2ef128: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ef128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef12c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ef12cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef130: 0x24030095  addiu       $v1, $zero, 0x95
    ctx->pc = 0x2ef130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x2ef134: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2ef134u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ef138: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2ef138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2ef13c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ef13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef140: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ef140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2ef144: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x2ef144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ef148: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x2ef148u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ef14c: 0x0  nop
    ctx->pc = 0x2ef14cu;
    // NOP
label_2ef150:
    // 0x2ef150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ef150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef158: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF158u;
        // 0x2ef15c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF160u;
}
