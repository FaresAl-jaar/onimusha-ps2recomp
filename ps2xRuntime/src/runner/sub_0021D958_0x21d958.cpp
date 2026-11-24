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

// Function: sub_0021D958
// Address: 0x21d958 - 0x21d9d8
void sub_0021D958_0x21d958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D958_0x21d958");
#endif

    switch (ctx->pc) {
        case 0x21d96cu: goto label_21d96c;
        case 0x21d998u: goto label_21d998;
        case 0x21d9acu: goto label_21d9ac;
        case 0x21d9c0u: goto label_21d9c0;
        default: break;
    }

    ctx->pc = 0x21d958u;

    // 0x21d958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d960: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d964: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21D964u;
    SET_GPR_U32(ctx, 31, 0x21D96Cu);
    ctx->pc = 0x21D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D964u;
    // 0x21d968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21D964u, 0x21D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D96Cu;
label_21d96c:
    // 0x21d96c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21d96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21d970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D974u;
    {
        const bool branch_taken_0x21d974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D974u;
        // 0x21d978: 0x34a50132  ori         $a1, $a1, 0x132 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)306);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d974) {
            ctx->pc = 0x21D990u;
            goto label_21d990;
        }
    }
    ctx->pc = 0x21D97Cu;
    // 0x21d97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d984: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d988: 0x80848e0  j           func_212380
    ctx->pc = 0x21D988u;
    ctx->pc = 0x21D98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D988u;
    // 0x21d98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21D990u;
label_21d990:
    // 0x21d990: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21D990u;
    SET_GPR_U32(ctx, 31, 0x21D998u);
    ctx->pc = 0x21D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D990u;
    // 0x21d994: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21D990u, 0x21D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D998u;
label_21d998:
    // 0x21d998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d99c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D99Cu;
    {
        const bool branch_taken_0x21d99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D99Cu;
        // 0x21d9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d99c) {
            ctx->pc = 0x21D9B8u;
            goto label_21d9b8;
        }
    }
    ctx->pc = 0x21D9A4u;
    // 0x21d9a4: 0xc087000  jal         func_21C000
    ctx->pc = 0x21D9A4u;
    SET_GPR_U32(ctx, 31, 0x21D9ACu);
    ctx->pc = 0x21C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C000u, 0x21D9A4u, 0x21D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9ACu;
label_21d9ac:
    // 0x21d9ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21D9ACu;
    {
        const bool branch_taken_0x21d9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9ACu;
        // 0x21d9b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9ac) {
            ctx->pc = 0x21D9C4u;
            goto label_21d9c4;
        }
    }
    ctx->pc = 0x21D9B4u;
    // 0x21d9b4: 0x0  nop
    ctx->pc = 0x21d9b4u;
    // NOP
label_21d9b8:
    // 0x21d9b8: 0xc087676  jal         func_21D9D8
    ctx->pc = 0x21D9B8u;
    SET_GPR_U32(ctx, 31, 0x21D9C0u);
    ctx->pc = 0x21D9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D9D8u, 0x21D9B8u, 0x21D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9C0u;
label_21d9c0:
    // 0x21d9c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d9c4:
    // 0x21d9c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d9c8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x21d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x21d9cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d9ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21D9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9D0u;
        // 0x21d9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D9D8u;
}
