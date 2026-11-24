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

// Function: sub_0017A210
// Address: 0x17a210 - 0x17a288
void sub_0017A210_0x17a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A210_0x17a210");
#endif

    switch (ctx->pc) {
        case 0x17a250u: goto label_17a250;
        default: break;
    }

    ctx->pc = 0x17a210u;

    // 0x17a210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a214: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a21c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a220: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a228: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17a228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a22c: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17A22Cu;
    {
        const bool branch_taken_0x17a22c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A22Cu;
        // 0x17a230: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a22c) {
            ctx->pc = 0x17A250u;
            goto label_17a250;
        }
    }
    ctx->pc = 0x17A234u;
    // 0x17a234: 0xa2452c6c  sb          $a1, 0x2C6C($s2)
    ctx->pc = 0x17a234u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11372), (uint8_t)GPR_U32(ctx, 5));
    // 0x17a238: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x17a238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x17a23c: 0xac256c48  sw          $a1, 0x6C48($at)
    ctx->pc = 0x17a23cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E6C48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E6C48u, _value); } while (0);
    // 0x17a240: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x17a240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x17a244: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x17a244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x17a248: 0xc054704  jal         func_151C10
    ctx->pc = 0x17A248u;
    SET_GPR_U32(ctx, 31, 0x17A250u);
    ctx->pc = 0x17A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A248u;
    // 0x17a24c: 0x24a56c40  addiu       $a1, $a1, 0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C10u, 0x17A248u, 0x17A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A250u;
label_17a250:
    // 0x17a250: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A250u;
    {
        const bool branch_taken_0x17a250 = (GPR_S64(ctx, 17) < 0);
        if (branch_taken_0x17a250) {
            ctx->pc = 0x17A260u;
            goto label_17a260;
        }
    }
    ctx->pc = 0x17A258u;
    // 0x17a258: 0xa2512c6d  sb          $s1, 0x2C6D($s2)
    ctx->pc = 0x17a258u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11373), (uint8_t)GPR_U32(ctx, 17));
    // 0x17a25c: 0x0  nop
    ctx->pc = 0x17a25cu;
    // NOP
label_17a260:
    // 0x17a260: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A260u;
    {
        const bool branch_taken_0x17a260 = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x17a260) {
            ctx->pc = 0x17A270u;
            goto label_17a270;
        }
    }
    ctx->pc = 0x17A268u;
    // 0x17a268: 0xa2502c6e  sb          $s0, 0x2C6E($s2)
    ctx->pc = 0x17a268u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11374), (uint8_t)GPR_U32(ctx, 16));
    // 0x17a26c: 0x0  nop
    ctx->pc = 0x17a26cu;
    // NOP
label_17a270:
    // 0x17a270: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a27c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a280: 0x3e00008  jr          $ra
    ctx->pc = 0x17A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A280u;
        // 0x17a284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A288u;
}
