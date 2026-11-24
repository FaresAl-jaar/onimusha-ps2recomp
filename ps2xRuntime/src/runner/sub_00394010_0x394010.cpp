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

// Function: sub_00394010
// Address: 0x394010 - 0x3940dc
void sub_00394010_0x394010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394010_0x394010");
#endif

    switch (ctx->pc) {
        case 0x394060u: goto label_394060;
        case 0x394070u: goto label_394070;
        case 0x39408cu: goto label_39408c;
        case 0x3940a0u: goto label_3940a0;
        case 0x3940bcu: goto label_3940bc;
        case 0x3940d0u: goto label_3940d0;
        default: break;
    }

    ctx->pc = 0x394010u;

    // 0x394010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x394014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x394014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x394018: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x394018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x39401c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x39401Cu;
    {
        const bool branch_taken_0x39401c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39401c) {
            ctx->pc = 0x3940D0u;
            goto label_3940d0;
        }
    }
    ctx->pc = 0x394024u;
    // 0x394024: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x394024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x394028: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x394028u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x39402c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x39402Cu;
    {
        const bool branch_taken_0x39402c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x394030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39402Cu;
        // 0x394030: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39402c) {
            ctx->pc = 0x3940D0u;
            goto label_3940d0;
        }
    }
    ctx->pc = 0x394034u;
    // 0x394034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x394034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x394038: 0x24a52270  addiu       $a1, $a1, 0x2270
    ctx->pc = 0x394038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
    // 0x39403c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x39403cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x394040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x394040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x394044: 0x600008  jr          $v1
    ctx->pc = 0x394044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x394050u: goto label_394050;
            case 0x394068u: goto label_394068;
            case 0x394078u: goto label_394078;
            case 0x394098u: goto label_394098;
            case 0x3940A8u: goto label_3940a8;
            case 0x3940C8u: goto label_3940c8;
            case 0x3940D0u: goto label_3940d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39404Cu;
    // 0x39404c: 0x0  nop
    ctx->pc = 0x39404cu;
    // NOP
label_394050:
    // 0x394050: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x394050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x394054: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x394054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x394058: 0xc0e5038  jal         func_3940E0
    ctx->pc = 0x394058u;
    SET_GPR_U32(ctx, 31, 0x394060u);
    ctx->pc = 0x3940E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3940E0u, 0x394058u, 0x394060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394060u;
label_394060:
    // 0x394060: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x394060u;
    {
        const bool branch_taken_0x394060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394060) {
            ctx->pc = 0x3940D0u;
            goto label_3940d0;
        }
    }
    ctx->pc = 0x394068u;
label_394068:
    // 0x394068: 0xc0e5038  jal         func_3940E0
    ctx->pc = 0x394068u;
    SET_GPR_U32(ctx, 31, 0x394070u);
    ctx->pc = 0x39406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394068u;
    // 0x39406c: 0xc48c0038  lwc1        $f12, 0x38($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3940E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3940E0u, 0x394068u, 0x394070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394070u;
label_394070:
    // 0x394070: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x394070u;
    {
        const bool branch_taken_0x394070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394070) {
            ctx->pc = 0x3940D0u;
            goto label_3940d0;
        }
    }
    ctx->pc = 0x394078u;
label_394078:
    // 0x394078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x394078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39407c: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x39407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x394080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x394080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x394084: 0xc0e5038  jal         func_3940E0
    ctx->pc = 0x394084u;
    SET_GPR_U32(ctx, 31, 0x39408Cu);
    ctx->pc = 0x394088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394084u;
    // 0x394088: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3940E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3940E0u, 0x394084u, 0x39408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39408Cu;
label_39408c:
    // 0x39408c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39408Cu;
    {
        const bool branch_taken_0x39408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39408c) {
            ctx->pc = 0x3940D0u;
            goto label_3940d0;
        }
    }
    ctx->pc = 0x394094u;
    // 0x394094: 0x0  nop
    ctx->pc = 0x394094u;
    // NOP
label_394098:
    // 0x394098: 0xc0e5094  jal         func_394250
    ctx->pc = 0x394098u;
    SET_GPR_U32(ctx, 31, 0x3940A0u);
    ctx->pc = 0x39409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394098u;
    // 0x39409c: 0xc48c0038  lwc1        $f12, 0x38($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x394250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394250u, 0x394098u, 0x3940A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940A0u;
label_3940a0:
    // 0x3940a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3940A0u;
    {
        const bool branch_taken_0x3940a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3940a0) {
            ctx->pc = 0x3940D0u;
            goto label_3940d0;
        }
    }
    ctx->pc = 0x3940A8u;
label_3940a8:
    // 0x3940a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3940a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3940ac: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x3940acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3940b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3940b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3940b4: 0xc0e50b0  jal         func_3942C0
    ctx->pc = 0x3940B4u;
    SET_GPR_U32(ctx, 31, 0x3940BCu);
    ctx->pc = 0x3940B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940B4u;
    // 0x3940b8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3942C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3942C0u, 0x3940B4u, 0x3940BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940BCu;
label_3940bc:
    // 0x3940bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3940BCu;
    {
        const bool branch_taken_0x3940bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3940bc) {
            ctx->pc = 0x3940D0u;
            goto label_3940d0;
        }
    }
    ctx->pc = 0x3940C4u;
    // 0x3940c4: 0x0  nop
    ctx->pc = 0x3940c4u;
    // NOP
label_3940c8:
    // 0x3940c8: 0xc0e50b0  jal         func_3942C0
    ctx->pc = 0x3940C8u;
    SET_GPR_U32(ctx, 31, 0x3940D0u);
    ctx->pc = 0x3940CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3940C8u;
    // 0x3940cc: 0xc48c0038  lwc1        $f12, 0x38($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3942C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3942C0u, 0x3940C8u, 0x3940D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3940D0u;
label_3940d0:
    // 0x3940d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3940d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3940d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3940D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3940D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3940D4u;
        // 0x3940d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3940D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3940DCu;
}
