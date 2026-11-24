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

// Function: sub_0039C730
// Address: 0x39c730 - 0x39c7e0
void sub_0039C730_0x39c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C730_0x39c730");
#endif

    switch (ctx->pc) {
        case 0x39c768u: goto label_39c768;
        case 0x39c778u: goto label_39c778;
        case 0x39c78cu: goto label_39c78c;
        default: break;
    }

    ctx->pc = 0x39c730u;

    // 0x39c730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39c734: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x39c734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x39c738: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x39c73c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x39c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x39c740: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39c740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39c744: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39c744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39c748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39c748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39c74c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c750: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x39c750u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x39c754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39c754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39c758: 0x92a021  addu        $s4, $a0, $s2
    ctx->pc = 0x39c758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x39c75c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c760: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x39c760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c764: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x39c764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39c768:
    // 0x39c768: 0x8e852b20  lw          $a1, 0x2B20($s4)
    ctx->pc = 0x39c768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11040)));
    // 0x39c76c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x39c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x39c770: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x39C770u;
    SET_GPR_U32(ctx, 31, 0x39C778u);
    ctx->pc = 0x39C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C770u;
    // 0x39c774: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x39C770u, 0x39C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C778u;
label_39c778:
    // 0x39c778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c77c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C77Cu;
    {
        const bool branch_taken_0x39c77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39c77c) {
            ctx->pc = 0x39C790u;
            goto label_39c790;
        }
    }
    ctx->pc = 0x39C784u;
    // 0x39c784: 0xc0e68e8  jal         func_39A3A0
    ctx->pc = 0x39C784u;
    SET_GPR_U32(ctx, 31, 0x39C78Cu);
    ctx->pc = 0x39A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A3A0u, 0x39C784u, 0x39C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C78Cu;
label_39c78c:
    // 0x39c78c: 0x0  nop
    ctx->pc = 0x39c78cu;
    // NOP
label_39c790:
    // 0x39c790: 0xae802b20  sw          $zero, 0x2B20($s4)
    ctx->pc = 0x39c790u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11040), GPR_U32(ctx, 0));
    // 0x39c794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39c794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c798: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39c798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x39c79c: 0xa2632b2c  sb          $v1, 0x2B2C($s3)
    ctx->pc = 0x39c79cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11052), (uint8_t)GPR_U32(ctx, 3));
    // 0x39c7a0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x39c7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x39c7a4: 0xa2602b2f  sb          $zero, 0x2B2F($s3)
    ctx->pc = 0x39c7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11055), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c7a8: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x39c7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x39c7ac: 0xa2602b32  sb          $zero, 0x2B32($s3)
    ctx->pc = 0x39c7acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11058), (uint8_t)GPR_U32(ctx, 0));
    // 0x39c7b0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x39C7B0u;
    {
        const bool branch_taken_0x39c7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7B0u;
        // 0x39c7b4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c7b0) {
            ctx->pc = 0x39C768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39c768;
        }
    }
    ctx->pc = 0x39C7B8u;
    // 0x39c7b8: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x39c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x39c7bc: 0xa4602b36  sh          $zero, 0x2B36($v1)
    ctx->pc = 0x39c7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11062), (uint16_t)GPR_U32(ctx, 0));
    // 0x39c7c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39c7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39c7c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39c7c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39c7c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39c7c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39c7cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39c7ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c7d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c7d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c7d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39c7d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x39C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C7D8u;
        // 0x39c7dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C7E0u;
}
