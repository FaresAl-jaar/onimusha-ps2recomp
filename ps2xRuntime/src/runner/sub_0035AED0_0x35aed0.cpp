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

// Function: sub_0035AED0
// Address: 0x35aed0 - 0x35af64
void sub_0035AED0_0x35aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AED0_0x35aed0");
#endif

    switch (ctx->pc) {
        case 0x35aef0u: goto label_35aef0;
        case 0x35af04u: goto label_35af04;
        case 0x35af14u: goto label_35af14;
        case 0x35af24u: goto label_35af24;
        case 0x35af34u: goto label_35af34;
        case 0x35af44u: goto label_35af44;
        case 0x35af54u: goto label_35af54;
        default: break;
    }

    ctx->pc = 0x35aed0u;

    // 0x35aed0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35aed4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x35aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x35aed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35aedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35aee0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35AEE0u;
    {
        const bool branch_taken_0x35aee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEE0u;
        // 0x35aee4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aee0) {
            ctx->pc = 0x35AEF8u;
            goto label_35aef8;
        }
    }
    ctx->pc = 0x35AEE8u;
    // 0x35aee8: 0xc09681c  jal         func_25A070
    ctx->pc = 0x35AEE8u;
    SET_GPR_U32(ctx, 31, 0x35AEF0u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x35AEE8u, 0x35AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEF0u;
label_35aef0:
    // 0x35aef0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35AEF0u;
    {
        const bool branch_taken_0x35aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEF0u;
        // 0x35aef4: 0xe60000cc  swc1        $f0, 0xCC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aef0) {
            ctx->pc = 0x35AF08u;
            goto label_35af08;
        }
    }
    ctx->pc = 0x35AEF8u;
label_35aef8:
    // 0x35aef8: 0xc60000cc  lwc1        $f0, 0xCC($s0)
    ctx->pc = 0x35aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35aefc: 0xc09681c  jal         func_25A070
    ctx->pc = 0x35AEFCu;
    SET_GPR_U32(ctx, 31, 0x35AF04u);
    ctx->pc = 0x35AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEFCu;
    // 0x35af00: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x35AEFCu, 0x35AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF04u;
label_35af04:
    // 0x35af04: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x35af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
label_35af08:
    // 0x35af08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35af08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35af0c: 0xc041494  jal         func_105250
    ctx->pc = 0x35AF0Cu;
    SET_GPR_U32(ctx, 31, 0x35AF14u);
    ctx->pc = 0x35AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF0Cu;
    // 0x35af10: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x35AF0Cu, 0x35AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF14u;
label_35af14:
    // 0x35af14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35af14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35af18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35af1c: 0xc04144e  jal         func_105138
    ctx->pc = 0x35AF1Cu;
    SET_GPR_U32(ctx, 31, 0x35AF24u);
    ctx->pc = 0x35AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF1Cu;
    // 0x35af20: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x35AF1Cu, 0x35AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF24u;
label_35af24:
    // 0x35af24: 0xc60c00cc  lwc1        $f12, 0xCC($s0)
    ctx->pc = 0x35af24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35af28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af2c: 0xc041588  jal         func_105620
    ctx->pc = 0x35AF2Cu;
    SET_GPR_U32(ctx, 31, 0x35AF34u);
    ctx->pc = 0x35AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF2Cu;
    // 0x35af30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x35AF2Cu, 0x35AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF34u;
label_35af34:
    // 0x35af34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af38: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x35af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x35af3c: 0xc04144e  jal         func_105138
    ctx->pc = 0x35AF3Cu;
    SET_GPR_U32(ctx, 31, 0x35AF44u);
    ctx->pc = 0x35AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF3Cu;
    // 0x35af40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x35AF3Cu, 0x35AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF44u;
label_35af44:
    // 0x35af44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35af44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35af48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35af4c: 0xc0414e2  jal         func_105388
    ctx->pc = 0x35AF4Cu;
    SET_GPR_U32(ctx, 31, 0x35AF54u);
    ctx->pc = 0x35AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF4Cu;
    // 0x35af50: 0x260600c0  addiu       $a2, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105388u, 0x35AF4Cu, 0x35AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF54u;
label_35af54:
    // 0x35af54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35af54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35af58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35af58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35af5c: 0x3e00008  jr          $ra
    ctx->pc = 0x35AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF5Cu;
        // 0x35af60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AF64u;
}
