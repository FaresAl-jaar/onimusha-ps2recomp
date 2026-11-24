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

// Function: sub_002EF160
// Address: 0x2ef160 - 0x2ef1d0
void sub_002EF160_0x2ef160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF160_0x2ef160");
#endif

    switch (ctx->pc) {
        case 0x2ef194u: goto label_2ef194;
        case 0x2ef19cu: goto label_2ef19c;
        default: break;
    }

    ctx->pc = 0x2ef160u;

    // 0x2ef160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ef164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ef168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ef168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ef16c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef170: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EF170u;
    {
        const bool branch_taken_0x2ef170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF170u;
        // 0x2ef174: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef170) {
            ctx->pc = 0x2EF1C0u;
            goto label_2ef1c0;
        }
    }
    ctx->pc = 0x2EF178u;
    // 0x2ef178: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ef178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ef17c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2ef17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2ef180: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x2ef180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x2ef184: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ef184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ef188: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x2ef188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x2ef18c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x2EF18Cu;
    SET_GPR_U32(ctx, 31, 0x2EF194u);
    ctx->pc = 0x2EF190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF18Cu;
    // 0x2ef190: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x2EF18Cu, 0x2EF194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF194u;
label_2ef194:
    // 0x2ef194: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2EF194u;
    SET_GPR_U32(ctx, 31, 0x2EF19Cu);
    ctx->pc = 0x2EF198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF194u;
    // 0x2ef198: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2EF194u, 0x2EF19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF19Cu;
label_2ef19c:
    // 0x2ef19c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ef19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ef1a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ef1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef1a4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x2ef1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x2ef1a8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ef1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ef1ac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ef1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ef1b0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2ef1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ef1b4: 0x24637d20  addiu       $v1, $v1, 0x7D20
    ctx->pc = 0x2ef1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32032));
    // 0x2ef1b8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ef1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ef1bc: 0x0  nop
    ctx->pc = 0x2ef1bcu;
    // NOP
label_2ef1c0:
    // 0x2ef1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ef1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ef1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF1C8u;
        // 0x2ef1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF1D0u;
}
