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

// Function: sub_002866D0
// Address: 0x2866d0 - 0x286758
void sub_002866D0_0x2866d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002866D0_0x2866d0");
#endif

    switch (ctx->pc) {
        case 0x286700u: goto label_286700;
        case 0x286728u: goto label_286728;
        default: break;
    }

    ctx->pc = 0x2866d0u;

    // 0x2866d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2866d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2866d4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2866d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2866d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2866d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2866dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2866dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2866e0: 0x90a4001c  lbu         $a0, 0x1C($a1)
    ctx->pc = 0x2866e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2866e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2866e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2866e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2866ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2866ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2866f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2866f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2866f4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x2866f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2866f8: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x2866F8u;
    SET_GPR_U32(ctx, 31, 0x286700u);
    ctx->pc = 0x2866FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866F8u;
    // 0x2866fc: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2866F8u, 0x286700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286700u;
label_286700:
    // 0x286700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286700u;
    {
        const bool branch_taken_0x286700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286700) {
            ctx->pc = 0x286710u;
            goto label_286710;
        }
    }
    ctx->pc = 0x286708u;
    // 0x286708: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x286708u;
    {
        const bool branch_taken_0x286708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286708u;
        // 0x28670c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286708) {
            ctx->pc = 0x286748u;
            goto label_286748;
        }
    }
    ctx->pc = 0x286710u;
label_286710:
    // 0x286710: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x286710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x286714: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x286714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x286718: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x286718u;
    {
        const bool branch_taken_0x286718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286718u;
        // 0x28671c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286718) {
            ctx->pc = 0x286748u;
            goto label_286748;
        }
    }
    ctx->pc = 0x286720u;
    // 0x286720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x286720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286724: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x286724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_286728:
    // 0x286728: 0xa4a40010  sh          $a0, 0x10($a1)
    ctx->pc = 0x286728u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x28672c: 0xa0a00013  sb          $zero, 0x13($a1)
    ctx->pc = 0x28672cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x286730: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x286730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x286734: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x286734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x286738: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x286738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28673c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28673Cu;
    {
        const bool branch_taken_0x28673c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28673Cu;
        // 0x286740: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28673c) {
            ctx->pc = 0x286728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286728;
        }
    }
    ctx->pc = 0x286744u;
    // 0x286744: 0x0  nop
    ctx->pc = 0x286744u;
    // NOP
label_286748:
    // 0x286748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28674c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286750: 0x3e00008  jr          $ra
    ctx->pc = 0x286750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286750u;
        // 0x286754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286758u;
}
