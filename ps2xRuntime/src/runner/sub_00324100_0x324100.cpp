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

// Function: sub_00324100
// Address: 0x324100 - 0x324198
void sub_00324100_0x324100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324100_0x324100");
#endif

    ctx->pc = 0x324100u;

    // 0x324100: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324104: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x324104u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x324108: 0x9423ad90  lhu         $v1, -0x5270($at)
    ctx->pc = 0x324108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946192)));
    // 0x32410c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x32410Cu;
    {
        const bool branch_taken_0x32410c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32410c) {
            ctx->pc = 0x324188u;
            goto label_324188;
        }
    }
    ctx->pc = 0x324114u;
    // 0x324114: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x324114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x324118: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x324118u;
    {
        const bool branch_taken_0x324118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324118u;
        // 0x32411c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324118) {
            ctx->pc = 0x324188u;
            goto label_324188;
        }
    }
    ctx->pc = 0x324120u;
    // 0x324120: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x324120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x324124: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x324124u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x324128: 0xa422ad90  sh          $v0, -0x5270($at)
    ctx->pc = 0x324128u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946192), (uint16_t)GPR_U32(ctx, 2));
    // 0x32412c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x32412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324130: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324134: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x324134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x324138: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x324138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x32413c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x324140: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x324140u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x324144: 0x9423a900  lhu         $v1, -0x5700($at)
    ctx->pc = 0x324144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294945024)));
    // 0x324148: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32414c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324150: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x324150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x324154: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324158: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x324158u;
    {
        const bool branch_taken_0x324158 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324158u;
        // 0x32415c: 0x24420900  addiu       $v0, $v0, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324158) {
            ctx->pc = 0x324168u;
            goto label_324168;
        }
    }
    ctx->pc = 0x324160u;
    // 0x324160: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x324160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x324164: 0x0  nop
    ctx->pc = 0x324164u;
    // NOP
label_324168:
    // 0x324168: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x324168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x32416c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x32416cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x324170: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x324170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x324174: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x324174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x324178: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x324178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x32417c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x324180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x324180u;
    {
        const bool branch_taken_0x324180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324180u;
        // 0x324184: 0xa0a30010  sb          $v1, 0x10($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324180) {
            ctx->pc = 0x324190u;
            goto label_324190;
        }
    }
    ctx->pc = 0x324188u;
label_324188:
    // 0x324188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32418c: 0x0  nop
    ctx->pc = 0x32418cu;
    // NOP
label_324190:
    // 0x324190: 0x3e00008  jr          $ra
    ctx->pc = 0x324190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324198u;
}
