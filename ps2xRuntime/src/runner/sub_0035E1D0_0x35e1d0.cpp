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

// Function: sub_0035E1D0
// Address: 0x35e1d0 - 0x35e260
void sub_0035E1D0_0x35e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E1D0_0x35e1d0");
#endif

    switch (ctx->pc) {
        case 0x35e20cu: goto label_35e20c;
        default: break;
    }

    ctx->pc = 0x35e1d0u;

    // 0x35e1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e1d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35e1d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35e1dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35e1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35e1e0: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x35e1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x35e1e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35e1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e1e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35e1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35e1ec: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x35e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x35e1f0: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x35e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x35e1f4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x35e1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x35e1f8: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x35e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
    // 0x35e1fc: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x35e1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x35e200: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x35e200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x35e204: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x35E204u;
    SET_GPR_U32(ctx, 31, 0x35E20Cu);
    ctx->pc = 0x35E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E204u;
    // 0x35e208: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x35E204u, 0x35E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E20Cu;
label_35e20c:
    // 0x35e20c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35E20Cu;
    {
        const bool branch_taken_0x35e20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e20c) {
            ctx->pc = 0x35E250u;
            goto label_35e250;
        }
    }
    ctx->pc = 0x35E214u;
    // 0x35e214: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x35e214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35e218: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x35e218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x35e21c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x35e21cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35e220: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E220u;
    {
        const bool branch_taken_0x35e220 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E220u;
        // 0x35e224: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e220) {
            ctx->pc = 0x35E230u;
            goto label_35e230;
        }
    }
    ctx->pc = 0x35E228u;
    // 0x35e228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e22c: 0x0  nop
    ctx->pc = 0x35e22cu;
    // NOP
label_35e230:
    // 0x35e230: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x35e230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x35e234: 0x24032ab0  addiu       $v1, $zero, 0x2AB0
    ctx->pc = 0x35e234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10928));
    // 0x35e238: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x35e238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x35e23c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x35e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35e240: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35E240u;
    {
        const bool branch_taken_0x35e240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E240u;
        // 0x35e244: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e240) {
            ctx->pc = 0x35E250u;
            goto label_35e250;
        }
    }
    ctx->pc = 0x35E248u;
    // 0x35e248: 0xa4430784  sh          $v1, 0x784($v0)
    ctx->pc = 0x35e248u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1924), (uint16_t)GPR_U32(ctx, 3));
    // 0x35e24c: 0x0  nop
    ctx->pc = 0x35e24cu;
    // NOP
label_35e250:
    // 0x35e250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35e250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e258: 0x3e00008  jr          $ra
    ctx->pc = 0x35E258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E258u;
        // 0x35e25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E260u;
}
