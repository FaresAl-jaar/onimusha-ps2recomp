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

// Function: sub_00302400
// Address: 0x302400 - 0x302494
void sub_00302400_0x302400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302400_0x302400");
#endif

    switch (ctx->pc) {
        case 0x30243cu: goto label_30243c;
        case 0x30245cu: goto label_30245c;
        default: break;
    }

    ctx->pc = 0x302400u;

    // 0x302400: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x302400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x302404: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x302404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x302408: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x302408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30240c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x302410: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x302410u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302414: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x302414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x302418: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x302418u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30241c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30241cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x302420: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x302420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302424: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x302424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x302428: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x302428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30242c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30242cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x302430: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x302430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302434: 0xc0c0818  jal         func_302060
    ctx->pc = 0x302434u;
    SET_GPR_U32(ctx, 31, 0x30243Cu);
    ctx->pc = 0x302438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302434u;
    // 0x302438: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x302060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302060u, 0x302434u, 0x30243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30243Cu;
label_30243c:
    // 0x30243c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30243Cu;
    {
        const bool branch_taken_0x30243c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x302440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30243Cu;
        // 0x302440: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30243c) {
            ctx->pc = 0x302468u;
            goto label_302468;
        }
    }
    ctx->pc = 0x302444u;
    // 0x302444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x302444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302448: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x302448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30244c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30244cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302450: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x302450u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x302454: 0xc0c079c  jal         func_301E70
    ctx->pc = 0x302454u;
    SET_GPR_U32(ctx, 31, 0x30245Cu);
    ctx->pc = 0x302458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302454u;
    // 0x302458: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301E70u, 0x302454u, 0x30245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30245Cu;
label_30245c:
    // 0x30245c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30245Cu;
    {
        const bool branch_taken_0x30245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30245Cu;
        // 0x302460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30245c) {
            ctx->pc = 0x302470u;
            goto label_302470;
        }
    }
    ctx->pc = 0x302464u;
    // 0x302464: 0x0  nop
    ctx->pc = 0x302464u;
    // NOP
label_302468:
    // 0x302468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x302468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30246c: 0x0  nop
    ctx->pc = 0x30246cu;
    // NOP
label_302470:
    // 0x302470: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x302470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x302474: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x302474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x302478: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x302478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30247c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30247cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302480: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x302480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302484: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x302484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302488: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x302488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30248c: 0x3e00008  jr          $ra
    ctx->pc = 0x30248Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30248Cu;
        // 0x302490: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30248Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302494u;
}
